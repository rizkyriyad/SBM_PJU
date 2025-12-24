#include <Wire.h>
#include "DS1307.h"
#include <rgb_lcd.h>

rgb_lcd lcd;
DS1307 clock;

int ldrPin = A0;
int ledPin = 6;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  clock.begin();

  clock.fillByHMS(13, 19, 40);
  clock.setTime();

  lcd.begin(16, 2);
  lcd.clear();
  pinMode(ledPin, OUTPUT);
}

void loop() {
  clock.getTime();

  int hour24 = clock.hour;
  int minute = clock.minute;
  int second = clock.second;

  int hour12 = hour24;
  String ampm = "AM";

  if (hour24 == 0) hour12 = 12;
  else if (hour24 == 12) ampm = "PM";
  else if (hour24 > 12) {
    hour12 = hour24 - 12;
    ampm = "PM";
  }

  int ldrValue = analogRead(ldrPin);

  int brightnessPercent = map(ldrValue, 200, 900, 100, 0);
  brightnessPercent = constrain(brightnessPercent, 0, 100);

  if (hour24 >= 18 && hour24 <= 23) {
    brightnessPercent = 100;
  } else if (hour24 >= 0 && hour24 < 6) {
    brightnessPercent = 50;
  }

  int pwmValue = map(brightnessPercent, 1, 100, 1, 255);
  analogWrite(ledPin, pwmValue);

  lcd.setCursor(0, 0);
  lcd.print("Time ");
  lcd.print(hour12);
  lcd.print(":");
  if (minute < 10) lcd.print("0");
  lcd.print(minute);
  lcd.print(":");
  if (second < 10) lcd.print("0");
  lcd.print(second);
  lcd.print(" ");
  lcd.print(ampm);

  lcd.setCursor(0, 1);
  lcd.print("Kecerahan:");
  lcd.print(brightnessPercent);
  lcd.print("% ");

  delay(200);
}