#include <Wire.h>
#include <RtcDS1307.h>

RtcDS1307<TwoWire> Rtc(Wire); 

void setup () {
    Serial.begin(9600);
    while (!Serial);

    Wire.begin();
    Rtc.Begin();

    RtcDateTime waktuAwal(2025, 12, 2, 17, 35, 0);
    Rtc.SetDateTime(waktuAwal);
    
    if (!Rtc.IsRunning()) {
        Rtc.SetDateTime(waktuAwal);
    }

    Serial.println("DS1307 siap");
}

void loop () {
    RtcDateTime sekarang = Rtc.GetDateTime();

    char buffer[20];
    
    sprintf(
        buffer, 
        "%02d/%02d/%d %02d:%02d:%02d", 
        sekarang.Day(), 
        sekarang.Month(), 
        sekarang.Year(), 
        sekarang.Hour(), 
        sekarang.Minute(), 
        sekarang.Second()
    );

    Serial.print("Waktu saat ini: ");
    Serial.println(buffer);

    delay(1000);
}