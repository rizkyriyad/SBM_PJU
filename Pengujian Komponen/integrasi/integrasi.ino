// =========================================
// BLYNK + ESP8266 AT (Pastikan BAUD RATE 9600 sudah benar)
// =========================================
#define BLYNK_TEMPLATE_ID "TMPL6zFvzaQmO"
#define BLYNK_TEMPLATE_NAME "SMART PJU"
#define BLYNK_AUTH_TOKEN "M_0EI-gobSbd52wrI2WxUJWszkGT54PP"

#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>

// ESP8266 pada SERIAL3 (Mega)
// TX3 = PIN 14 → RX ESP
// RX3 = PIN 15 → TX ESP
#define EspSerial Serial3
// Coba 115200 jika 9600 gagal menghubungkan ESP
#define ESP8266_BAUD 9600 

ESP8266 wifi(&EspSerial);

// WiFi (Ganti dengan kredensial Anda)
char ssid[] = "Master1";
char pass[] = "01234567890";

// =========================================
// SENSOR & LCD & RTC
// =========================================
#include <Wire.h>
#include "DS1307.h"
#include <rgb_lcd.h>

rgb_lcd lcd;
DS1307 clock;

// Pin yang digunakan
const int ldrPin = A0;
const int ledPin = 6;

// =========================================
// SETUP
// =========================================
void setup() {
  Serial.begin(9600);
  delay(200);

  // ESP START
  EspSerial.begin(ESP8266_BAUD);
  delay(200);

  Serial.println("Menghubungkan ke Blynk...");
  Blynk.begin(BLYNK_AUTH_TOKEN, wifi, ssid, pass);

  // RTC
  Wire.begin();
  clock.begin();

  // BARIS INI HANYA DIJALANKAN SEKALI SAAT PERTAMA KALI MENGATUR WAKTU.
  // Setelah waktu disetel, komentar atau hapus 2 baris ini:
  /*
  clock.fillByHMS(13, 19, 40);
  clock.setTime();
  */

  // LCD
  lcd.begin(16, 2);
  lcd.clear();

  pinMode(ledPin, OUTPUT);

  Serial.println("Sistem Siap!");
}

// =========================================
// LOOP
// =========================================
void loop() {
  // Jalankan proses Blynk (wajib)
  Blynk.run();

  // =============================
  // 1. RTC WAKTU
  // =============================
  clock.getTime();

  int hour24 = clock.hour;
  int minute = clock.minute;
  int second = clock.second;

  // 12-Hour Format
  int hour12 = hour24;
  String ampm = "AM";

  if (hour24 == 0) hour12 = 12;
  else if (hour24 == 12) ampm = "PM";
  else if (hour24 > 12) {
    hour12 = hour24 - 12;
    ampm = "PM";
  }

  // Format string waktu untuk Blynk dan LCD
  String timeStr = String(hour12) + ":" +
                   (minute < 10 ? "0" : "") + String(minute) + ":" +
                   (second < 10 ? "0" : "") + String(second) + " " + ampm;

  // =============================
  // 2. SENSOR LDR & KONTROL LED
  // =============================
  int ldrValue = analogRead(ldrPin);

  // Mapping LDR ke persentase kecerahan (200=gelap=100%, 900=terang=0%)
  int brightnessPercent = map(ldrValue, 200, 900, 100, 0);
  brightnessPercent = constrain(brightnessPercent, 0, 100);

  // Mode otomatis berdasarkan waktu (Override)
  if (hour24 >= 18 && hour24 <= 23) {
    brightnessPercent = 100; // Malam
  } else if (hour24 >= 0 && hour24 < 6) {
    brightnessPercent = 50; // Dini hari
  }

  // Output PWM (Mapping Persentase ke 1-255)
  int pwmValue = map(brightnessPercent, 1, 100, 1, 255);
  analogWrite(ledPin, pwmValue);

  // =============================
  // 3. LCD OUTPUT
  // =============================
  // Baris 1: Waktu
  lcd.setCursor(0, 0);
  lcd.print("Time ");
  lcd.print(timeStr);

  // Baris 2: Kecerahan
  lcd.setCursor(0, 1);
  lcd.print("Kecerahan:");
  lcd.print(brightnessPercent);
  lcd.print("% ");

  // =============================
  // 4. KIRIM KE BLYNK
  // =============================
  Blynk.virtualWrite(V0, timeStr); // Waktu
  Blynk.virtualWrite(V1, ldrValue); // Nilai mentah LDR
  Blynk.virtualWrite(V2, brightnessPercent); // Persentase Kecerahan
  // V3 dihilangkan karena duplikasi dengan V0/V2. Jika perlu, bisa ditambahkan lagi.

  delay(200); // Pertahankan delay agar sistem stabil dan tidak membanjiri Blynk
}