#define BLYNK_TEMPLATE_ID "TMPL6zFvzaQmO"
#define BLYNK_TEMPLATE_NAME "SMART PJU"
#define BLYNK_AUTH_TOKEN "M_0EI-gobSbd52wrI2WxUJWszkGT54PP"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Master";
char pass[] = "01234567890";

// =========================================
// RTC, LCD, SENSOR
// =========================================
#include <Wire.h>
#include "RTClib.h"
#include <LiquidCrystal_I2C.h>

RTC_DS1307 rtc;
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pins
const int ldrPin = 34;
const int ledPin = 25;   // AKTIF-LOW

// Manual override
bool manualOverride = false;
int manualBrightness = 0;

// ==========================
// BLYNK CALLBACKS
// ==========================
BLYNK_WRITE(V3) { // SWITCH
  manualOverride = true;
  manualBrightness = param.asInt() ? 100 : 0;
}

BLYNK_WRITE(V4) { // SLIDER
  manualBrightness = constrain(param.asInt(), 0, 100);
  manualOverride = true;
  Blynk.virtualWrite(V3, manualBrightness > 0);
}

// ==========================
// SETUP
// ==========================
void setup() {
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);

  Wire.begin();

  if (!rtc.begin()) {
    Serial.println("❌ RTC TIDAK TERDETEKSI");
    while (1);
  }

  if (!rtc.isrunning()) {
    Serial.println("⚠️ RTC belum jalan, set waktu");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  lcd.init();
  lcd.backlight();
  lcd.clear();

  pinMode(ledPin, OUTPUT);

  Serial.println("✅ SMART PJU ESP32 SIAP");
}

// ==========================
// LOOP
// ==========================
void loop() {
  Blynk.run();

  // ===== RTC =====
  DateTime now = rtc.now();

  int hour = now.hour();
  int minute = now.minute();
  int second = now.second();

  String timeStr =
    (hour < 10 ? "0" : "") + String(hour) + ":" +
    (minute < 10 ? "0" : "") + String(minute) + ":" +
    (second < 10 ? "0" : "") + String(second);

  // ===== LDR =====
  int ldrValue = analogRead(ldrPin);

  // ===== BRIGHTNESS LOGIC =====
  int brightnessPercent;
  if (manualOverride) {
    brightnessPercent = manualBrightness;
  } else {
    brightnessPercent = map(ldrValue, 200, 900, 100, 0);
    brightnessPercent = constrain(brightnessPercent, 0, 100);

    if (hour >= 18 || hour < 6) brightnessPercent = 100;
    else brightnessPercent = 0;
  }

  // ===== PWM (AKTIF-LOW FIX) =====
  int pwmNormal = map(brightnessPercent, 0, 100, 0, 255);
  int pwmLED = 255 - pwmNormal;
  analogWrite(ledPin, pwmLED);

  // ===== LCD DISPLAY =====
  lcd.setCursor(0, 0);
  lcd.print("Time ");
  lcd.print(timeStr);
  lcd.print("   "); // clear sisa karakter

  lcd.setCursor(0, 1);
  lcd.print("Bright ");
  lcd.print(brightnessPercent);
  lcd.print("%   ");

  // ===== BLYNK =====
  Blynk.virtualWrite(V0, timeStr);
  Blynk.virtualWrite(V1, ldrValue);
  Blynk.virtualWrite(V2, brightnessPercent);

  delay(200);
}
