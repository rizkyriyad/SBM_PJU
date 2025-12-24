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

1. **Arduino (Mikrokontroler)** – sebagai mikrokontroler utama untuk pemrograman dan pengendalian sistem.  
2. **Lampu LED** – berfungsi sebagai representasi lampu jalan; kecerahannya dikontrol menggunakan **PWM**.  
3. **Liquid Crystal Display (LCD) 2x16** – menampilkan status lampu secara real-time serta menunjukkan waktu setempat.  
4. **Kabel** – untuk menghubungkan antar perangkat dan modul.  
5. **Light Sensor (LDR)** – sebagai pendeteksi intensitas cahaya lingkungan.  
6. **Real Time Clock (RTC)** – sebagai penentu waktu aktual untuk mengatur logika malam dan siang.  
7. **Laptop** – untuk memprogram Arduino menggunakan Arduino IDE dan memonitor keluaran melalui Serial Monitor.  

> **Catatan:** Alat dan bahan akan ditambahkan seiring berjalannya pengembangan prototipe.


## Pengujian Komponen

Bagian ini menjelaskan pengujian masing-masing komponen **IntelliLight**, termasuk LCD, LED, RTC, dan sensor cahaya (LDR).  
Tujuan pengujian adalah memastikan setiap komponen bekerja dengan baik sebelum digabung menjadi sistem smart street lighting berbasis IoT.

### Pengujian LCD

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

## Pembuatan Alat

Pada tahap pembuatan alat, sistem IntelliLight mulai diintegrasikan sebagai prototipe Smart Street Lighting berbasis Arduino. Sistem ini menggabungkan **Sensor LDR**, **RTC**, **LED**, dan **LCD** untuk membentuk lampu jalan adaptif yang menyesuaikan kecerahan berdasarkan kondisi cahaya lingkungan dan waktu aktual.

Fokus utama tahap ini adalah merancang wiring dan struktur dasar program sebelum dilakukan pengujian komponen secara terpisah. LED digunakan sebagai output lampu jalan, Sensor LDR membaca intensitas cahaya sekitar, RTC menyediakan waktu aktual untuk logika malam dan dini hari, dan LCD menampilkan waktu serta persentase kecerahan lampu secara real-time.

Tahap pembuatan alat mencakup:  
1. **Wiring:**  
   - LED dikoneksikan ke pin **D6 PWM**  
   - LCD dikoneksikan melalui **I2C**  
   - RTC dikoneksikan melalui **I2C**  

2. **Pembuatan Program dan Integrasi:**  
   - Membuat struktur program awal untuk membaca sensor dan mengatur LED serta menampilkan informasi di LCD.  
   - Sistem masih dalam versi **non-IoT**, fokus pada pengoperasian lokal.  

## Kode IntelliLight

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
| 03:00 AM      | Malam gelap       | 50              | LED menyala sedang         |
| 11:00 PM      | Malam             | 100             | LED menyala penuh          |
| 13:00 PM      | Mendung / gelap   | 98              | LED menyala tinggi         |
| 13:00 PM      | Terang            | 23              | LED menyala rendah         |

## Kesimpulan

Prototipe **IntelliLight** berhasil membuktikan bahwa sistem Smart Street Lighting berbasis **Arduino**, **Sensor LDR**, dan **RTC** dapat dirancang untuk berfungsi secara adaptif dan otomatis sesuai tujuan pembuatan prototipe. Sistem ini mampu membaca intensitas cahaya lingkungan melalui sensor LDR dan memproses data waktu dari RTC untuk mengatur kecerahan lampu LED secara real-time menggunakan PWM. Lampu menyala **100% pada malam hari (19.00–23.59) dan 50% pada dini hari (00.00–06.00)**, serta menyesuaikan kecerahan di siang hari berdasarkan cahaya sekitar, sehingga implementasi pencahayaan adaptif berjalan dengan efektif. Hasil ini menegaskan bahwa **IntelliLight** dapat bekerja otomatis sebagai pengendali pencahayaan adaptif, menjawab rumusan masalah terkait cara kerja sistem, mekanisme otomatisasi, dan pengendalian kecerahan lampu. Dengan demikian, prototipe ini memenuhi tujuan utama, yaitu menciptakan sistem **Smart Street Lighting berbasis IoT** yang efisien, responsif, dan relevan untuk implementasi Smart City.



