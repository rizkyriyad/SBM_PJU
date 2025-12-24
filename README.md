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


Rumusan Masalah:
1. Bagaimana cara kerja sistem IntelliLight yang berbasis IoT dapat dirancang menggunakan kombinasi Sensor LDR dan RTC sebagai pengontrol utama pencahayaan adaptif?
2. Apakah sistem IntelliLight dapat berfungsi secara otomatis untuk mengendalikan pencahayaan secara adaptif berdasarkan pembacaan Sensor LDR dan data RTC?
   
Tujuan:
Tujuan utama dari pembuatan prototipe bernama IntelliLight (Implementasi Smart Street Lighting Berbasis IoT Menggunakan Sensor LDR dan RTC sebagai Pengendali Pencahayaan Adaptif)

Alat dan Bahan:
Adapun alat dan bahan yang digunakan yaitu:
1. Arduino IDE
2. Lampu LED: indikator sebagai representasi lampu jalan yang tingkat kecerahannya dikontrol melalui PWM.
3. Liquid Crystal Display 2x16: untuk menampilkan status lampu secara realtime serta menunjukkan waktu setempat.
4. Kabel: untuk mengoneksikan antar perangkat.
5. Light Sensor: sebagai pendeteksi intensitas cahaya lingkungan
6. Real Time Clock (RTC): sebagai penentu waktu aktual untuk mengatur logika malam dan siang.
   
Pembuatan Alat:
1. Wiring:
   a. LED dikoneksikan ke D6 PWM
   b. LCD dikoneksikan I2C
   c. RTC dikoneksikan I2C
2. Pembuatan Program dan Integrasi:
Uji Coba Komponen
1. Pengujian Sensor Cahaya
   Pengujian dilakukan dengan memvariasikan intensitas cahaya pada sensor LDR menggunakan kondisi terang, redup, dan gelap.
   <img width="898" height="274" alt="image" src="https://github.com/user-attachments/assets/7c02780f-32e9-43ea-aa08-fbb5546d9856" />
2. Pengujian RTC (Real Time Clock)
   RTC diuji sebagai acuan waktu otomatis untuk memaksa lampu menyala 100% pada pukul 19.00 - 11.59, dan pada pukul 00.00 hingga pukul 06.00 menyala dengan intensitas cahaya 50%.
3. Pengujian LED
   LED diuji dengan program kondisi 1 dan 0 terlebih dahulu sebelum diintegrasikan
   <img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/cc3d2a35-a77e-4cbe-9d80-8d0553efcacc" />
5. Pengujian LCD
   LCD diuji untuk menampilkan Time : (Jam:Menit:Detik AM/PM) dan Kecerahan Lampu : (1-100%)
   <img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/2c49a9c6-2be1-47e1-bb97-4a7da658df70" />

6. Integrasi Keseluruhan Sistem
   Integrasi keseluruhan sistem dilakukan dengan menggabungkan fungsi Sensor LDR, RTC, LED, dan LCD ke dalam satu rangkaian yang bekerja secara bersamaan dan saling mendukung. Sensor LDR berperan membaca intensitas cahaya lingkungan, sementara RTC memberikan acuan waktu yang akurat untuk menentukan mode operasi lampu sesuai jadwal malam dan dini hari. Nilai cahaya dari LDR kemudian diolah oleh mikrokontroler dan diterjemahkan menjadi sinyal PWM untuk mengatur kecerahan LED secara real-time. LCD digunakan untuk menampilkan data waktu dan persentase kecerahan sehingga proses kerja sistem dapat dipantau langsung. Setelah diintegrasikan, seluruh komponen terbukti dapat bekerja serentak tanpa konflik, menghasilkan sistem pencahayaan jalan adaptif yang mampu menyesuaikan intensitas lampu berdasarkan waktu dan kondisi cahaya lingkungan.
<img width="1280" height="960" alt="image" src="https://github.com/user-attachments/assets/7301bc87-b007-4da3-be3f-37b94e2dd55c" />
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/d70c0d6e-2a84-4c54-8c5a-fd56701f29d5" />

Hasil dan pembahasan:
Berdasarkan hasil perancangan, pengujian, dan analisis sistem IntelliLight, dapat disimpulkan bahwa prototipe Smart Street Lighting berbasis Arduino, Sensor LDR, dan RTC berhasil berfungsi sesuai tujuan. Sensor LDR mampu membaca intensitas cahaya lingkungan dengan baik dan mengatur tingkat kecerahan lampu LED secara adaptif melalui PWM. Sistem juga berhasil memanfaatkan RTC sebagai pengendali waktu sehingga lampu dapat menyala 100% antara pukul 19.00 hingga 06.00, terlepas dari kondisi cahaya di sekitar, meniru perilaku lampu jalan pada umumnya.

Hasil pengujian:
1. Ketika waktu menunjukkan pukul 03.00 pagi (AM), kecerahan lampu 50%
<img width="1200" height="1600" alt="image" src="https://github.com/user-attachments/assets/93781025-c45b-4fe8-a349-a7f38fb87135" />
2. Ketika waktu menunjukkan pukul 11.00 malam (PM), kecerahan lampu 100%
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/fd0032d3-73d1-49d4-b8eb-9fd960260186" />
3. Ketika waktu menunjukkan pukul 13.00 siang (AM) dengan kondisi suasana mendung/gelap, kecerahan lampu 98% (tergantung intensitas cahaya di sekitar)
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/331d63d9-87ad-4290-9fa6-48a74b60b171" />
4.Ketika waktu menunjukkan pukul 13.00 siang (AM) dengan kondisi suasana terang, kecerahan lampu 23% (tergantung intensitas cahaya di sekitar)
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/dfec2d7e-3336-4f9a-b428-8a8e20719d01" />

Integrasi seluruh komponen (RTC, LDR, LCD, dan LED) berjalan stabil tanpa konflik, serta memberikan respons real-time terhadap perubahan cahaya. Dari pengujian yang dilakukan, sistem mampu menghemat energi di siang hari, meningkatkan intensitas cahaya pada kondisi redup, dan memberikan pencahayaan maksimal di malam hari. Dengan demikian, IntelliLight berhasil menunjukkan bahwa kombinasi sensor lingkungan dan kontrol waktu dapat menghasilkan sistem pencahayaan adaptif yang efisien, responsif, dan relevan untuk implementasi Smart City.
