#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

unsigned long prevMillis = 0;
bool showWaktu = true;  

void setup() {
  lcd.begin(16, 2);

  lcd.setCursor(6, 0);
  lcd.print("Waktu");
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - prevMillis >= 5000) {
    prevMillis = currentMillis;
    showWaktu = !showWaktu; 
    lcd.clear();

    lcd.setCursor(6, 0);
    lcd.print("Waktu");
  }

  if (showWaktu) {
    lcd.setCursor(3, 1);
    lcd.print("14.43 WITA   ");
  } else {
    lcd.setCursor(3, 0);
    lcd.print("Kecerahan");
    lcd.setCursor(4, 1);
    lcd.print("Lampu 50%");
  }
}
