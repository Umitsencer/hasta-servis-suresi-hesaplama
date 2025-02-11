🏥 Hastanın Serviste Kalma Süresi Hesaplama
-
Bu program, C dili kullanılarak hastaların serviste kaldıkları toplam süreyi hesaplamak için geliştirilmiştir. Kullanıcıdan yatış ve taburcu tarihlerini alarak bu süreyi epoch zamanı (1 Ocak 1970'ten itibaren geçen saniye) üzerinden hesaplar ve sonucu saniye, saat ve gün cinsinden ekrana yazdırır.

📋 Program Özeti
-
struct ile hastanın yatış ve taburcu zamanı tutulur.
union kullanılarak bu zamanlar epoch zamanına dönüştürülür.
İki tarih arasındaki fark hesaplanır ve süre saniye, saat ve gün olarak ekrana yazdırılır.

🚀 Kullanım Talimatları
-
Programı çalıştırdıktan sonra sırasıyla şunları girmeniz istenir:

📌 Yatış tarihi ve saati (YYYY MM DD HH MM SS formatında)

✅ Taburcu tarihi ve saati (YYYY MM DD HH MM SS formatında)

Program, bu verileri kullanarak:Epoch zamanını hesaplar.
İki tarih arasındaki süreyi saniye, saat ve gün olarak ekrana yazdırır.

🛠 Örnek Çıktı
-
🏥 Hastanın Serviste Kalma Süresi Hesaplama  
📌 Hastanın servise yatış tarihini giriniz (YYYY MM DD HH MM SS): 2025 02 10 08 30 00  
✅ Hastanın taburcu olduğu tarihi giriniz (YYYY MM DD HH MM SS): 2025 02 11 10 30 00  

Hastanın serviste kalma süresi: 93600 saniye (26.00 saat, 1.08 gün)

📚 Kullanılan Kavramlar
-
Struct: Yatış ve taburcu zamanlarını tek bir yapı içinde saklamak için kullanılır.

Union: Epoch zaman hesaplamalarında belleği verimli kullanmak için kullanılır.

Epoch Zamanı: 1 Ocak 1970 UTC’den itibaren geçen saniye sayısını ifade eder ve tarih farkı hesaplamalarında kullanılır.
