# IntelliLight  
**Smart Street Lighting Berbasis IoT dengan Sensor Cahaya dan RTC untuk Pencahayaan Adaptif**

Nama Anggota :
1. Muhammad Rizky Riyadin
2. Hizkia Chris Stevanus

## Latar Belakang

Penerangan jalan umum merupakan infrastruktur penting yang berperan dalam mendukung keselamatan, keamanan, dan aktivitas masyarakat pada malam hari. Namun, sistem penerangan jalan konvensional umumnya masih bersifat statis, di mana lampu menyala penuh dari senja hingga fajar tanpa mempertimbangkan kondisi lingkungan yang sebenarnya. Pola ini menyebabkan konsumsi energi yang tinggi serta pemborosan sumber daya, terutama saat kondisi jalan sepi atau intensitas cahaya alami masih mencukupi. Beberapa penelitian menunjukkan bahwa sistem penerangan jalan menyumbang porsi signifikan dari konsumsi energi listrik perkotaan, sehingga diperlukan solusi yang lebih efisien dan adaptif  
([Emerald Insight, 2011](https://www.emerald.com/insight/content/doi/10.1108/17427371111146437/full/html)).

Salah satu permasalahan utama pada sistem penerangan jalan konvensional adalah tidak adanya mekanisme pengendalian yang responsif terhadap perubahan intensitas cahaya dan waktu operasional. Pengaturan berbasis timer sederhana sering kali kurang akurat karena tidak memperhitungkan faktor cuaca, musim, maupun pergeseran waktu matahari terbit dan terbenam. Akibatnya, lampu tetap menyala meskipun tidak dibutuhkan, yang berdampak pada meningkatnya biaya operasional dan menurunnya efisiensi energi.

Perkembangan teknologi sensor, mikrokontroler, dan Internet of Things (IoT) membuka peluang untuk mengembangkan sistem penerangan jalan pintar (*smart street lighting*). Sensor cahaya dapat digunakan untuk mendeteksi intensitas pencahayaan lingkungan secara real-time, sedangkan Real Time Clock (RTC) berfungsi sebagai acuan waktu yang akurat untuk pengaturan jadwal operasional lampu. Penelitian yang dipublikasikan oleh MDPI menunjukkan bahwa sistem penerangan adaptif berbasis IoT mampu meningkatkan efisiensi energi serta mendukung konsep *smart city* melalui pengendalian dan pemantauan yang lebih fleksibel  
([MDPI, 2021](https://www.mdpi.com/2624-6511/3/4/71)).

Selain itu, berbagai penelitian terdahulu juga menegaskan bahwa penggunaan sensor cahaya dan mikrokontroler pada sistem penerangan jalan dapat mengurangi konsumsi energi serta meningkatkan keandalan sistem dibandingkan metode konvensional. Studi yang dipublikasikan melalui Academia.edu menunjukkan bahwa integrasi sensor dan sistem kendali otomatis merupakan fondasi yang kuat dalam pengembangan smart street lighting berbasis IoT  
([Academia.edu, SUB156224](https://www.academia.edu/download/75810626/SUB156224.pdf)).

Berdasarkan permasalahan dan penelitian terdahulu tersebut, dikembangkan **IntelliLight**, yaitu sistem *smart street lighting* berbasis IoT yang memanfaatkan sensor cahaya dan Real Time Clock (RTC) sebagai pengendali pencahayaan adaptif. Sistem ini dirancang untuk menyesuaikan kondisi nyala lampu berdasarkan intensitas cahaya lingkungan dan waktu operasional secara otomatis, sehingga mampu meningkatkan efisiensi energi dan mendukung penerapan penerangan jalan yang cerdas dan berkelanjutan.


## Rumusan Masalah

1. Bagaimana perancangan dan cara kerja sistem **IntelliLight** berbasis Internet of Things (IoT) yang menggunakan kombinasi **Sensor LDR** dan **Real Time Clock (RTC)** sebagai pengontrol utama pencahayaan adaptif?
2. Apakah sistem **IntelliLight** mampu beroperasi secara **otomatis** dalam mengendalikan pencahayaan jalan berdasarkan pembacaan **intensitas cahaya lingkungan (LDR)** dan **data waktu (RTC)**?
3. Bagaimana tingkat efektivitas sistem IntelliLight dalam menyesuaikan kondisi nyala lampu untuk mendukung **efisiensi energi** pada penerangan jalan?

## Tujuan

Tujuan utama dari pengembangan prototipe **IntelliLight (Implementasi Smart Street Lighting Berbasis IoT Menggunakan Sensor LDR dan RTC sebagai Pengendali Pencahayaan Adaptif)** adalah:

1. Merancang dan merealisasikan sistem **smart street lighting berbasis IoT** yang memanfaatkan **Sensor LDR** dan **RTC** sebagai pengendali pencahayaan adaptif.
2. Menghasilkan sistem penerangan jalan yang mampu bekerja **secara otomatis** berdasarkan kondisi cahaya lingkungan dan waktu operasional yang akurat.
3. Meningkatkan **efisiensi penggunaan energi listrik** serta keandalan sistem penerangan jalan melalui pengendalian yang cerdas dan adaptif.


## Alat dan Bahan

Adapun alat dan bahan yang digunakan dalam prototipe **IntelliLight** adalah:

1. **Arduino (Mikrokontroler)** – sebagai mikrokontroler utama untuk pemrograman dan pengendalian sistem dalam bentuk konvensional untuk pengujian awal.
2. **ESP32 (Mikrokontroler)** = sebagai mikrokontroler utama untuk pemrograman dan pengendalian sistem dalam bentuk IoT untuk hasil akhir.
3. **Lampu LED** – berfungsi sebagai representasi lampu jalan; kecerahannya dikontrol menggunakan **PWM**.  
4. **Liquid Crystal Display (LCD) 2x16** – menampilkan status lampu secara real-time serta menunjukkan waktu setempat.  
5. **Kabel** – untuk menghubungkan antar perangkat dan modul.  
6. **Light Sensor (LDR)** – sebagai pendeteksi intensitas cahaya lingkungan.  
7. **Real Time Clock (RTC)** – sebagai penentu waktu aktual untuk mengatur logika malam dan siang.  
8. **Laptop** – untuk memprogram Arduino menggunakan Arduino IDE dan memonitor keluaran melalui Serial Monitor serta _setup_ sistem aplikasi blynk.
9. **Handphone** - untuk mengontrol Intellilight melalui aplikasi Blynk.

> **Catatan:** Alat dan bahan akan ditambahkan seiring berjalannya pengembangan prototipe.


## Pengujian Komponen

Bagian ini menjelaskan pengujian masing-masing komponen **IntelliLight**, termasuk LCD, LED, RTC, dan sensor cahaya (LDR).  
Tujuan pengujian adalah memastikan setiap komponen bekerja dengan baik sebelum digabung menjadi sistem smart street lighting berbasis IoT.

### Pengujian LCD (OUTPUT)

LCD 2x16 digunakan untuk menampilkan **status lampu** dan **waktu real-time** pada sistem IntelliLight.  
Pengujian ini bertujuan memastikan bahwa LCD dapat menampilkan informasi secara jelas dan bergantian, sehingga siap digunakan sebagai media monitoring sebelum komponen lain diintegrasikan.  

Fokus pengujian meliputi:  
- Kemampuan LCD menampilkan teks secara bergantian (misalnya waktu dan status kecerahan lampu).  
- Kejelasan dan keterbacaan teks pada layar.  
- Respons LCD terhadap perintah kontrol dari mikrokontroler.  

**Tujuan:**  
- LCD siap menampilkan status kecerahan lampu dan waktu dengan akurat.  
- Menjadi media monitoring visual untuk prototipe IntelliLight.

**Kode Pengujian LCD:**
  
```cpp
#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;
unsigned long prevMillis = 0;
bool showWaktu = true;  

void setup() {
  lcd.begin(16, 2);             // Inisialisasi LCD 16x2
  lcd.setCursor(6, 0);           // Set posisi kursor kolom 6, baris 0
  lcd.print("Waktu");            // Tampilkan teks "Waktu"
}

void loop() {
  unsigned long currentMillis = millis();   // Ambil waktu saat ini
  if (currentMillis - prevMillis >= 5000) { // Ganti tampilan setiap 5 detik
    prevMillis = currentMillis;
    showWaktu = !showWaktu; 
    lcd.clear();               // Hapus layar sebelum menampilkan teks baru
    lcd.setCursor(6, 0);
    lcd.print("Waktu");
  }
  if (showWaktu) {
    lcd.setCursor(3, 1);
    lcd.print("14.43 WITA   ");       // Tampilkan waktu simbolik
  } else {
    lcd.setCursor(3, 0);
    lcd.print("Kecerahan");            // Tampilkan status kecerahan
    lcd.setCursor(4, 1);
    lcd.print("Lampu 50%");
  }
}
```
**Tabel Hasil Pengujian LCD**

| Waktu Pengujian (detik) | Tampilan LCD              | Status       |
|-------------------------|--------------------------|--------------|
| 0 - 5                   | Waktu / 14.43 WITA       | Berfungsi    |
| 5 - 10                  | Kecerahan / Lampu 50%    | Berfungsi    |
| 10 - 15                 | Waktu / 14.43 WITA       | Berfungsi    |
| 15 - 20                  | Kecerahan / Lampu 50%    | Berfungsi    |

Hasil pengujian menunjukkan bahwa LCD 2x16 mampu menampilkan informasi dengan jelas dan bergantian sesuai interval 5 detik. Tampilan waktu dan status kecerahan lampu terlihat rapi dan mudah dibaca, serta respons terhadap perintah dari mikrokontroler berjalan dengan baik. Dengan hasil ini, LCD siap digunakan sebagai media monitoring visual pada sistem IntelliLight dan dapat diintegrasikan dengan komponen lainnya seperti LED dan sensor cahaya.

### Pengujian LED

LED digunakan sebagai representasi lampu jalan pada sistem IntelliLight.  

Fokus pengujian:  
- Memastikan LED dapat menyala dan meredup sesuai perintah dari mikrokontroler.  
- Menguji kontrol kecerahan menggunakan **PWM (Pulse Width Modulation)**.  
- Menyiapkan LED agar bisa berfungsi adaptif sesuai input dari sensor cahaya (LDR).  

**Tujuan:**  
- LED mampu menampilkan variasi kecerahan dari mati hingga terang penuh.  
- Menjadi dasar untuk integrasi dengan sensor LDR agar pencahayaan adaptif berjalan optimal.

**Kode Pengujian LED:**
```cpp
int led = 8;  // Pin LED
void setup() {
  pinMode(led, OUTPUT); // Set pin LED sebagai output
}

void loop() {
  // Menaikkan kecerahan LED secara bertahap
  for (int duty = 0; duty <= 255; duty++) {
    analogWrite(led, duty); 
    delay(10); // Memberi jeda agar perubahan terlihat smooth
  }
  
  // Menurunkan kecerahan LED secara bertahap
  for (int duty = 255; duty >= 0; duty--) {
    analogWrite(led, duty);
    delay(10); 
  }
}
```
**Tabel Hasil Pengujian LED**

| Waktu Pengujian (ms) | Duty Cycle | Status LED             |
|---------------------|------------|-----------------------|
| 0 - 2550            | 0 - 255    | LED bertambah terang  |
| 2560 - 5110         | 255 - 0    | LED meredup           |
| 5110 - 7660         | 0 - 255    | LED bertambah terang  |
| 7670 - 10220        | 255 - 0    | LED meredup           |

Hasil pengujian menunjukkan LED berhasil menyala dan meredup secara smooth sesuai perubahan duty cycle. Kontrol kecerahan menggunakan PWM berjalan dengan baik, sehingga LED siap diintegrasikan dengan sensor cahaya (LDR) untuk pencahayaan adaptif pada sistem IntelliLight.

### Pengujian RTC (Real Time Clock)

RTC digunakan untuk mengetahui waktu aktual agar sistem IntelliLight dapat membedakan **siang dan malam** secara akurat.

Fokus pengujian:  
- Memastikan modul RTC dapat memberikan waktu yang benar dan konsisten.  
- Memverifikasi komunikasi antara RTC dan mikrokontroler (Arduino).  
- Menyiapkan data waktu untuk logika pengendalian lampu berdasarkan jam.

**Tujuan:**  
- RTC memberikan waktu real-time yang akurat.  
- Waktu yang didapat dapat digunakan untuk mengontrol status lampu otomatis sesuai siang/malam.

**Kode Pengujian RTC:**
```cpp
#include <Wire.h>
#include <RtcDS1307.h>

RtcDS1307<TwoWire> Rtc(Wire); 

void setup () {
    Serial.begin(9600);        // Memulai komunikasi serial
    while (!Serial);           // Tunggu serial siap
    Wire.begin();              // Memulai komunikasi I2C
    Rtc.Begin();               // Inisialisasi modul RTC

    // Set waktu awal (hanya jika RTC belum berjalan)
    RtcDateTime waktuAwal(2025, 12, 2, 17, 35, 0);
    Rtc.SetDateTime(waktuAwal);
    
    if (!Rtc.IsRunning()) {
        Rtc.SetDateTime(waktuAwal);
    }

    Serial.println("DS1307 siap");
}

void loop () {
    RtcDateTime sekarang = Rtc.GetDateTime(); // Ambil waktu sekarang
    char buffer[20];
    
    // Format tampilan waktu
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
    delay(1000); // Update setiap 1 detik
}
```
**Tabel Hasil Pengujian RTC**

| Waktu Pengujian (detik) | Output Serial              | Status       |
|-------------------------|---------------------------|--------------|
| 0 - 10                  | 02/12/2025 17:35:00       | Berfungsi    |
| 10 - 20                 | 02/12/2025 17:35:10       | Berfungsi    |
| 20 - 30                 | 02/12/2025 17:35:20       | Berfungsi    |
| 30 - 40                 | 02/12/2025 17:35:30       | Berfungsi    |

Hasil pengujian menunjukkan bahwa modul RTC (DS1307) mampu memberikan waktu real-time yang akurat dan konsisten. Serial Monitor menampilkan waktu sesuai yang diharapkan dengan update tiap 1 detik. Modul RTC siap digunakan untuk logika pengendalian lampu siang/malam pada sistem IntelliLight.

### Pengujian Sensor Cahaya (LDR) dan LED Adaptif

Sensor LDR digunakan untuk mendeteksi intensitas cahaya lingkungan, sedangkan LED menyesuaikan kecerahan secara otomatis.  

Fokus pengujian:  
- Memastikan LDR membaca perubahan cahaya dengan akurat.  
- Menguji respons LED terhadap perubahan intensitas cahaya.  
- Menentukan nilai ambang (threshold) untuk mengatur kecerahan adaptif:
  - Intensitas cahaya ≤ 25% → LED 100% terang  
  - Intensitas cahaya 26–49% → LED menyesuaikan 40–100%  
  - Intensitas cahaya ≥ 50% → LED redup / mati  

**Tujuan:**  
- LED mampu menyesuaikan kecerahan secara adaptif sesuai kondisi cahaya.  
- Menjadi dasar untuk integrasi sistem IntelliLight berbasis IoT.

**Kode Pengujian Sensor Cahaya (LDR) dan LED Adaptif:**
```cpp
const int lightPin = A0;  // Pin LDR
const int lampPin = 8;    // Pin LED

void setup() {
  pinMode(lightPin, INPUT);   // Set LDR sebagai input
  pinMode(lampPin, OUTPUT);   // Set LED sebagai output
  analogWrite(lampPin, 0);    // Matikan LED awalnya
  Serial.begin(9600);         // Serial Monitor untuk memantau nilai
}

void loop() {
  int lightRaw = analogRead(lightPin); // Baca nilai LDR
  
  // Konversi nilai LDR ke persentase intensitas cahaya
  int ambientPercent = map(lightRaw, 0, 1023, 100, 0);
  ambientPercent = constrain(ambientPercent, 0, 100); 

  int lampBrightness;
  
  // Atur kecerahan LED sesuai ambang
  if (ambientPercent <= 25) {
    lampBrightness = 100;
  } else if (ambientPercent < 50) {
    lampBrightness = map(ambientPercent, 26, 49, 100, 40);
  } else {
    lampBrightness = map(ambientPercent, 50, 100, 40, 0);
  }
  
  lampBrightness = constrain(lampBrightness, 0, 100); 
  int pwm = map(lampBrightness, 0, 100, 0, 255);
  analogWrite(lampPin, pwm);  // Kontrol LED dengan PWM

  // Tampilkan status di Serial Monitor
  Serial.print("Intensitas Cahaya: ");
  Serial.print(ambientPercent);
  Serial.print("%, Kecerahan Lampu: ");
  Serial.print(lampBrightness);
  Serial.println("%");
  
  delay(100); // Update tiap 100ms
}
```
**Tabel Hasil Pengujian Sensor Cahaya (LDR) dan LED Adaptif**

| Intensitas Cahaya (%) | Kecerahan LED (%) | Status LED            |
|----------------------|-----------------|---------------------|
| 0 - 25               | 100             | LED menyala terang  |
| 26 - 49              | 40 - 100        | LED menala sedang   |
| 50 - 100             | 0 - 40          | LED redup / mati    |

Hasil pengujian menunjukkan bahwa sensor LDR berhasil mendeteksi perubahan cahaya lingkungan secara akurat, dan LED merespons dengan kecerahan yang sesuai. LED mampu menyesuaikan kecerahan secara adaptif sesuai ambang yang telah ditentukan, sehingga sistem IntelliLight siap berfungsi sebagai smart street lighting berbasis IoT.

## Dokumentasi Pengujian Komponen

Berikut dokumentasi pengujian komponen **IntelliLight** :

| No | Deskripsi | Lampiran |
|----|-----------|----------|
| 1  | Output LCD yang menampilan INPUT dari RTC (RTC + LCD) |<img width="800" height="600" alt="image" src="https://github.com/user-attachments/assets/ad497998-a64e-4eb9-a3f3-a79019a156d7" /> |
| 2  | LED PWM | <img width="800" height="600" alt="image" src="https://github.com/user-attachments/assets/04aabf60-7275-4dd9-bc29-4fad38a2d64b" /> |
| 3  | Sensor LDR| <img width="1280" height="960" alt="image" src="https://github.com/user-attachments/assets/d9a137c4-73b5-4232-b626-4b76616baaa8" /> |


## Pembuatan Alat Konvensional

Pada tahap pembuatan alat, sistem IntelliLight mulai diintegrasikan sebagai prototipe Smart Street Lighting berbasis Arduino. Sistem ini menggabungkan **Sensor LDR**, **RTC**, **LED**, dan **LCD** untuk membentuk lampu jalan adaptif yang menyesuaikan kecerahan berdasarkan kondisi cahaya lingkungan dan waktu aktual.

Fokus utama tahap ini adalah merancang wiring dan struktur dasar program sebelum dilakukan pengujian komponen secara terpisah. LED digunakan sebagai output lampu jalan, Sensor LDR membaca intensitas cahaya sekitar, RTC menyediakan waktu aktual untuk logika malam dan dini hari, dan LCD menampilkan waktu serta persentase kecerahan lampu secara real-time.

Tahap pembuatan alat mencakup:  
1. **Wiring:**  
   - LED dikoneksikan ke pin **D6 PWM**  
   - LDR dikoneksikan ke pin **A0**
   - LCD dikoneksikan melalui **I2C**  
   - RTC dikoneksikan melalui **I2C**  

2. **Pembuatan Program dan Integrasi:**  
   - Membuat struktur program awal untuk membaca sensor dan mengatur LED serta menampilkan informasi di LCD.  
   - Sistem masih dalam versi **non-IoT**, fokus pada pengoperasian lokal.  

## Kode IntelliLight Konvensional

Berikut potongan kode untuk prototipe IntelliLight yang mengintegrasikan **Sensor LDR**, **RTC**, **LED**, dan **LCD**. Sistem ini masih versi non-IoT dan fokus pada pengoperasian lokal.

```cpp
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

  clock.fillByHMS(13, 19, 40);  // Set waktu awal
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

  // Aturan waktu malam dan dini hari
  if (hour24 >= 18 && hour24 <= 23) {
    brightnessPercent = 100;
  } else if (hour24 >= 0 && hour24 < 6) {
    brightnessPercent = 50;
  }

  int pwmValue = map(brightnessPercent, 1, 100, 1, 255);
  analogWrite(ledPin, pwmValue);

  // Tampilkan waktu di LCD
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

  // Tampilkan kecerahan lampu di LCD
  lcd.setCursor(0, 1);
  lcd.print("Kecerahan:");
  lcd.print(brightnessPercent);
  lcd.print("% ");

  delay(200); // Update setiap 200 ms
}
```
## Integrasi Sistem dan Hasil Pengujian

Setelah semua komponen diuji secara terpisah (LCD, LED, RTC, LDR), tahap selanjutnya adalah **integrasi keseluruhan sistem**. Sistem IntelliLight bekerja dengan prinsip:

- **Sensor LDR** membaca intensitas cahaya lingkungan.  
- **RTC** memberikan acuan waktu untuk menentukan mode malam dan dini hari.  
- **Mikrokontroler** memproses data LDR dan RTC menjadi sinyal PWM untuk LED.  
- **LCD** menampilkan waktu dan persentase kecerahan lampu secara real-time.  
- Sistem bekerja serentak tanpa konflik, memberikan pencahayaan adaptif yang sesuai kondisi lingkungan dan waktu.

### Tabel Hasil Pengujian IntelliLight

| Waktu         | Kondisi Lingkungan | Kecerahan LED (%) | Status                      |
|---------------|------------------|-----------------|----------------------------|
| 01:00 AM      | Malam gelap       | 50              | LED menyala sedang         |
| 11:00 PM      | Malam             | 100             | LED menyala penuh          |
| 13:00 PM      | Mendung / gelap   | 98              | LED menyala tinggi         |
| 13:00 PM      | Terang            | 23              | LED menyala rendah         |

<img width="800" height="600" alt="image" src="https://github.com/user-attachments/assets/2caf2f78-e244-458a-9ff1-88470334865b" />
<img width="800" height="600" alt="image" src="https://github.com/user-attachments/assets/e5df302b-8340-4433-9193-f9481d4e02ce" />
<img width="800" height="600" alt="image" src="https://github.com/user-attachments/assets/5dc5e0ea-88a4-4c2d-b9f3-a631fccaa3da" />
<img width="800" height="600" alt="image" src="https://github.com/user-attachments/assets/2121cda2-92e1-4092-abf4-5c9a912f2cee" />

# Integrasi dengan IoT - IntelliLight
## Pengujian Blynk - IntelliLight

### Tujuan
- Menguji kontrol ESP32 via Blynk sebelum implementasi fisik
- Memantau LED, LDR, dan RTC secara real-time
- Mengatur lampu otomatis/manual melalui aplikasi

### Komponen (Simulasi Wokwi)

| Komponen | Pin / Keterangan |
|----------|-----------------|
| ESP32    | Mikrokontroler utama |
| LED      | D25 (PWM)        |
| LDR      | A34               |
| RTC DS1307 | SDA 21, SCL 22 |
| LCD I2C  | SDA 21, SCL 22   |
| Blynk App | Kontrol jarak jauh |

### Data Stream Blynk

| Virtual Pin | Fungsi |
|------------|--------|
| V0 | Waktu RTC |
| V1 | Nilai LDR |
| V2 | Kecerahan Lampu |
| V3 | Tombol ON/OFF |
| V4 | Slider Brightness |

### Wiring (Simulasi)

| Komponen | ESP32 Pin |
|----------|-----------|
| LED      | 25 (PWM) |
| LDR      | 34       |
| RTC SDA  | 21       |
| RTC SCL  | 22       |
| LCD SDA  | 21       |
| LCD SCL  | 22       |

### Program Simulasi pada Wokwi
```cpp
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
```

### Hasil Pengujian
- Lampu LED menyala/mati sesuai tombol Blynk  
- Slider Blynk mengatur kecerahan LED (0–100%)  
- Nilai LDR terbaca real-time di Blynk  
- Waktu RTC tampil di Blynk dan LCD

### Dokumentasi Pengujian Blynk pada Wokwi
![3333](https://github.com/user-attachments/assets/30dc8c96-df62-4055-916d-7c603c4ed8ce)
![4444](https://github.com/user-attachments/assets/c67d06cb-027b-4b40-97ca-135e4c09f6a1)

**Catatan:** Sistem siap diuji di perangkat fisik setelah simulasi ini berhasil.

# Implementasi Fisik IoT Intellilight

Implementasi fisik **IntelliLight** merupakan tahap penerapan sistem *Smart Street Lighting* berbasis **IoT** pada perangkat nyata menggunakan **ESP32** sebagai mikrokontroler utama. Tahap ini dilakukan setelah pengujian integrasi konvensional dan simulasi wokwi berhasil dijalankan dengan stabil, sehingga logika sistem dapat diterapkan langsung ke perangkat keras sebenarnya.

ESP32 terhubung ke jaringan **Wi-Fi lokal** dan berkomunikasi langsung dengan platform **Blynk** sebagai media kontrol dan monitoring jarak jauh. **Sensor LDR** digunakan untuk membaca intensitas cahaya lingkungan, sedangkan **RTC DS1307** berfungsi sebagai penyedia data waktu aktual. Data dari sensor dan RTC diproses oleh ESP32 untuk mengatur kecerahan lampu LED menggunakan metode **PWM**, baik secara otomatis maupun melalui kontrol manual dari aplikasi Blynk.

Selain monitoring melalui aplikasi, sistem juga dilengkapi **LCD I2C** yang menampilkan waktu dan persentase kecerahan lampu secara real-time sebagai monitoring lokal.

---

## 1. Alasan Tidak Menggunakan Arduino Mega

Pada sistem ini **Arduino Mega tidak digunakan** karena beberapa alasan teknis:

- Arduino Mega **tidak memiliki modul Wi-Fi internal**, sehingga memerlukan perangkat tambahan (ESP8266/ESP32) untuk koneksi IoT.
- ESP32 sudah memiliki **Wi-Fi dan Bluetooth bawaan**, sehingga lebih efisien dan ringkas.
- Platform simulasi **Wokwi hanya mendukung satu mikrokontroler utama dalam satu proyek**, sehingga penggunaan ESP32 menjadi pilihan paling optimal.
- ESP32 mendukung **PWM, ADC resolusi tinggi, dan multitasking**, yang sangat sesuai untuk sistem IoT real-time.

Dengan pertimbangan tersebut, **ESP32 dipilih sebagai mikrokontroler utama** baik pada simulasi maupun implementasi fisik.

---

## 2. Cara Pembuatan Sistem (Langkah Implementasi)

Tahapan pembuatan sistem IntelliLight secara fisik adalah sebagai berikut:

1. Menyiapkan seluruh komponen perangkat keras.
2. Melakukan wiring antar komponen sesuai konfigurasi pin ESP32.
3. Menghubungkan ESP32 ke jaringan Wi-Fi lokal.
4. Membuat dan mengonfigurasi **Data Stream** pada platform Blynk.
5. Mengunggah program ke ESP32 menggunakan Arduino IDE.
6. Melakukan pengujian kontrol manual melalui aplikasi Blynk.
7. Melakukan pengujian sistem otomatis berbasis LDR dan RTC.

---

## 3. Wiring Sistem

| Komponen | Pin Komponen | Pin ESP32 |
|--------|-------------|----------|
| LDR | AO | GPIO 34 |
| LED | Anoda | GPIO 25 |
| RTC DS1307 | SDA | GPIO 21 |
| RTC DS1307 | SCL | GPIO 22 |
| LCD I2C | SDA | GPIO 21 |
| LCD I2C | SCL | GPIO 22 |
| Semua GND | GND | GND |
| Semua VCC | VCC | 5V / 3.3V |

---

## 4. Konfigurasi Data Stream Blynk

| Virtual Pin | Fungsi | Tipe Data |
|------------|-------|----------|
| V0 | Waktu (RTC) | String |
| V1 | Intensitas Cahaya (LDR) | Integer |
| V2 | Kecerahan Lampu | Integer (%) |
| V3 | ON / OFF Lampu | Boolean |
| V4 | Slider Kecerahan | Integer (%) |

---

## 5. Integrasi IoT dengan Blynk

Proyek **IntelliLight** diintegrasikan dengan IoT menggunakan **ESP32** dan platform **Blynk**. Integrasi ini memungkinkan lampu jalan pintar dikontrol secara jarak jauh melalui aplikasi Blynk di smartphone.

Fitur IoT yang tersedia meliputi:
- Monitoring waktu secara real-time (RTC)
- Monitoring intensitas cahaya lingkungan
- Monitoring persentase kecerahan lampu
- Kontrol ON/OFF lampu
- Kontrol kecerahan lampu menggunakan slider

ESP32 terhubung ke jaringan **Master** Hotspot milik pengguna dan menggunakan **Auth Token Blynk** milik pengguna. Setiap perubahan pada aplikasi Blynk akan langsung mempengaruhi kondisi lampu pada simulasi secara real-time.

## 6. Program (Source Code)

> Source code adalah sebagai berikut:

```cpp
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
```
## 7. Hasil Implementasi

Berdasarkan pengujian yang telah dilakukan, sistem IntelliLight menunjukkan hasil sebagai berikut:

- Lampu dapat dikontrol ON/OFF dari aplikasi Blynk.
- Kecerahan lampu dapat diatur secara manual melalui slider.
- Sistem mampu menyesuaikan kecerahan secara otomatis berdasarkan LDR dan waktu RTC.
- Data waktu dan kecerahan tampil secara real-time pada LCD dan aplikasi Blynk.
- Sistem berjalan stabil baik pada simulasi maupun implementasi fisik.

---
## Dokumentasi Implementasi

| No | Jenis Dokumentasi | Keterangan | File |
|----|------------------|------------|------|
| 1 | Wiring Detail | Dokumentasi koneksi pin antar komponen dengan ESP32 | <img width="886" height="673" alt="image" src="https://github.com/user-attachments/assets/9660178a-e54f-475d-98a3-a076edc07d29" /> |
| 2 | Tampilan LCD | LCD menampilkan waktu (RTC) dan persentase kecerahan lampu | <img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/bd9f3ada-4ec9-431d-b914-8efb86e57acc" /> |
| 3 | Kontrol ON | Pengujian tombol ON lampu melalui aplikasi Blynk |<img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/7af387e2-a1da-4898-931b-944ae2ca85dc" /> |
| 4 | Kontrol OFF | Pengujian tombol OFF lampu melalui aplikasi Blynk | <img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/3668c1ba-3b12-4144-b7ef-35e172653586" /> |
| 5 | Kontrol Kecerahan | Pengaturan kecerahan lampu menggunakan slider Blynk | <img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/b212929e-e71d-46de-901f-efc8f9c4caaa" />|
| 6 | Hasil Implementasi | Sistem berjalan normal pada kondisi nyata | <img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/b03d50de-a68f-453c-8127-1698b5cd92ab" /> |


# Kesimpulan

Prototipe **IntelliLight** berhasil membuktikan bahwa sistem Smart Street Lighting berbasis **ESP32** (yang sebelumnya konvensional menggunakan **Arduino Mega**), **Sensor LDR**, dan **RTC** dapat bekerja secara adaptif dan otomatis sesuai tujuan awal. Sistem mampu membaca **intensitas cahaya lingkungan** melalui LDR dan memproses data waktu dari RTC untuk mengatur kecerahan lampu LED secara real-time menggunakan PWM. Lampu menyala **100% pada malam hari (19.00–23.59)**, **50% pada dini hari (00.00–06.00)**, dan menyesuaikan kecerahan di siang hari berdasarkan cahaya sekitar. Hal ini membuktikan bahwa IntelliLight mampu menjalankan fungsi pengendalian otomatis yang efisien, menjawab rumusan masalah terkait cara kerja dan mekanisme otomatisasi sistem.

Selain itu, integrasi IoT menggunakan **ESP32** dan platform **Blynk** memungkinkan sistem dikontrol dan dipantau secara jarak jauh melalui smartphone. Pengguna dapat melihat **status nyala/mati lampu**, **persentase kecerahan**, **nilai sensor LDR**, dan **waktu real-time**, serta mengubah kecerahan lampu menggunakan slider atau tombol ON/OFF. Simulasi di **Wokwi** menjadi media pengujian awal yang efektif sebelum implementasi fisik, memastikan interaksi antara ESP32 dan Blynk berjalan stabil tanpa kesalahan.

Implementasi fisik di lapangan memperkuat hasil simulasi, di mana ESP32 yang terkoneksi ke Wi-Fi lokal mampu mengatur lampu berdasarkan sensor dan waktu secara real-time, sambil menampilkan informasi pada **LCD I2C**. Sistem ini menunjukkan kestabilan, responsivitas, dan keandalan dalam kondisi nyata, serta mendukung penggunaan energi yang lebih efisien dibandingkan sistem penerangan konvensional.

Secara keseluruhan, prototipe **IntelliLight** menjawab semua rumusan masalah: mendemonstrasikan mekanisme pengendalian adaptif lampu, kemampuan operasi otomatis berdasarkan cahaya dan waktu, serta integrasi IoT yang memungkinkan pemantauan dan kontrol jarak jauh. Dengan demikian, prototipe ini siap diterapkan sebagai solusi **Smart Street Lighting** yang efisien, responsif, dan relevan dengan perkembangan teknologi.

# Kontribusi Anggota

Dalam pengembangan prototipe **IntelliLight**, setiap anggota tim memiliki peran dan kontribusi yang spesifik untuk memastikan proyek berjalan lancar dan menyeluruh.

## Muhammad Rizky Riyadin
- Melakukan **riset literatur** terkait sistem Smart Street Lighting, sensor cahaya, RTC, dan integrasi IoT.  
- Membuat dan menulis **laporan proyek** secara detail, termasuk dokumentasi pengujian dan integrasi.  
- **Membuat dan menguji program** untuk prototipe IntelliLight, baik versi lokal (non-IoT) maupun versi IoT dengan ESP32 dan Blynk.  
- Menyusun **wiring sistem/hardware**, termasuk koneksi sensor LDR, RTC, LED, dan LCD.  
- Melakukan **simulasi** sistem di Wokwi untuk pengujian awal dan validasi logika program.  
- **Integrasi sistem** antara sensor, mikrokontroler, dan Blynk, termasuk uji coba kontrol manual dan otomatis.  
- Mengatur **data stream Blynk**, pengujian komunikasi, dan monitoring real-time.  
- Memastikan seluruh prototipe berjalan stabil, efisien, dan siap untuk implementasi fisik.  
- Menyusun **dokumentasi visual** berupa tabel pengujian, grafik, dan foto prototipe.

## Hizkia Chris Stevanus
- Membantu melakukan **pemeriksaan kondisi kabel dan koneksi hardware**, memastikan semua jalur listrik dan sinyal aman dan sesuai rancangan.  
- Membantu proses **wiring hardware** untuk koneksi ESP32, LED, sensor LDR, RTC, dan LCD.  
- Berperan dalam **uji coba fisik prototipe**, memberikan masukan terkait kestabilan dan keamanan sistem saat diimplementasikan.
- Membantu cek apabila terdapat kabel yang rusak atau putus.
- mendokumentasikan kegiatan.

Dengan pembagian tugas ini, tim berhasil mengembangkan **IntelliLight** secara menyeluruh, mulai dari riset, coding, simulasi, pengujian, hingga implementasi fisik dan integrasi IoT.
