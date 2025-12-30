// =========================================
// BLYNK CONFIG (ESP32)
// =========================================
#define BLYNK_TEMPLATE_ID "TMPL6zFvzaQmO"
#define BLYNK_TEMPLATE_NAME "SMART PJU"
#define BLYNK_AUTH_TOKEN "M_0EI-gobSbd52wrI2WxUJWszkGT54PP"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Auth Token & WiFi
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

// =========================================
// RTC, LCD, SENSOR
// =========================================
#include <Wire.h>
#include "RTClib.h"
#include <LiquidCrystal_I2C.h>

RTC_DS1307 rtc;
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pins
const int ldrPin = 34;   // ADC
const int ledPin = 25;   // PWM output

// Manual override
bool manualOverride = false;
int manualBrightness = 0;

// Blynk V-pin mapping
// V0 -> RTC STRING
// V1 -> Sensor cahaya INTEGER
// V2 -> LED brightness INTEGER %
// V3 -> Tombol ON/OFF lampu
// V4 -> Slider brightness manual

// ==========================
// BLYNK CALLBACKS
// ==========================

// Tombol ON/OFF
BLYNK_WRITE(V3) {
  int val = param.asInt();
  if (val == 1) {        // ON
    manualOverride = true;
    manualBrightness = 100;
  } else {               // OFF
    manualOverride = true;
    manualBrightness = 0;
  }
}

// Slider brightness
BLYNK_WRITE(V4) {
  manualBrightness = param.asInt();  // 0-100
  manualOverride = true;             // aktifkan manual override
}

// ==========================
// SETUP
// ==========================
void setup() {
  Serial.begin(115200);
  delay(20);

  // connect to Blynk
  Serial.println("Connecting to Blynk...");
  Blynk.begin(auth, ssid, pass);

  // I2C + RTC
  Wire.begin();
  if (!rtc.begin()) {
    Serial.println("RTC tidak ditemukan!");
    while (1) delay(1000);
  }
  if (!rtc.isrunning()) {
    Serial.println("RTC belum berjalan, set waktu awal...");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  // LCD
  lcd.init();
  lcd.backlight();
  lcd.clear();

  Serial.println("IntelliLight ESP32 siap!");
}

// ==========================
// LOOP
// ==========================
void loop() {
  Blynk.run();

  // ==========================
  // Read RTC
  // ==========================
  DateTime now = rtc.now();
  int hour24 = now.hour();
  int minute = now.minute();
  int second = now.second();

  int hour12 = hour24;
  String ampm = "AM";
  if (hour24 == 0) hour12 = 12;
  else if (hour24 == 12) ampm = "PM";
  else if (hour24 > 12) { hour12 = hour24 - 12; ampm = "PM"; }

  String timeStr = String(hour12) + ":" +
                   (minute < 10 ? "0" : "") + String(minute) + ":" +
                   (second < 10 ? "0" : "") + String(second) + " " + ampm;

  // ==========================
  // Read LDR
  // ==========================
  int ldrValue = analogRead(ldrPin); // raw ADC

  // ==========================
  // Hitung brightness
  // ==========================
  int brightnessPercent;
  if (manualOverride) {
    brightnessPercent = manualBrightness;
  } else {
    brightnessPercent = map(ldrValue, 200, 900, 100, 0);
    brightnessPercent = constrain(brightnessPercent, 0, 100);
    // Override berdasarkan waktu malam
    if (hour24 >= 18 && hour24 <= 23) brightnessPercent = 100;
    else if (hour24 >= 0 && hour24 < 6) brightnessPercent = 50;
  }

  int pwmValue = map(brightnessPercent, 0, 100, 0, 255);
  pwmValue = constrain(pwmValue, 0, 255);

  // Output PWM ke LED
  analogWrite(ledPin, pwmValue);

  // ==========================
  // LCD
  // ==========================
  String line1 = "Time " + timeStr;
  if (line1.length() > 16) line1 = line1.substring(0, 16);
  lcd.setCursor(0, 0);
  lcd.print(line1);

  String line2 = "Kecerahan:" + String(brightnessPercent) + "%";
  if (line2.length() > 16) line2 = line2.substring(0, 16);
  lcd.setCursor(0, 1);
  lcd.print(line2);
  for (int i = line2.length(); i < 16; ++i) lcd.print(' ');

  // ==========================
  // Blynk Output
  // ==========================
  Blynk.virtualWrite(V0, timeStr);           // RTC STRING
  Blynk.virtualWrite(V1, ldrValue);          // Sensor cahaya INTEGER
  Blynk.virtualWrite(V2, brightnessPercent); // LED INTEGER %

  delay(200);
}
