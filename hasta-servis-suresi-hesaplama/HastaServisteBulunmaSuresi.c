#include <stdio.h>
#include <time.h>

// Yapı (struct) tanımı: Hastanın serviste kalma süresi
struct HastaServis {
    struct tm yatışZamani;
    struct tm taburcuZamani;
};

// Birlik (union) tanımı: Epoch zaman hesaplaması
union EpochZaman {
    time_t epochDegeri;
};

// Serviste kalma süresini hesaplayan fonksiyon
void servisSuresiHesapla(struct HastaServis hasta) {
    union EpochZaman yatışEpoch, taburcuEpoch;
    
    yatışEpoch.epochDegeri = mktime(&hasta.yatışZamani);
    taburcuEpoch.epochDegeri = mktime(&hasta.taburcuZamani);
    
    double sure = difftime(taburcuEpoch.epochDegeri, yatışEpoch.epochDegeri);
    
    printf("Hastanın serviste kalma süresi: %.0f saniye (%.2f saat, %.2f gün)\n", 
           sure, sure / 3600, sure / 86400);
}

// Kullanıcıdan tarih bilgisi alan fonksiyon
void kullanicidanTarihAl(struct tm *zamanYapisi, char *mesaj) {
    printf("%s (YYYY MM DD HH MM SS): ", mesaj);
    scanf("%d %d %d %d %d %d", 
          &zamanYapisi->tm_year, 
          &zamanYapisi->tm_mon, 
          &zamanYapisi->tm_mday, 
          &zamanYapisi->tm_hour, 
          &zamanYapisi->tm_min, 
          &zamanYapisi->tm_sec);
    
    zamanYapisi->tm_year -= 1900;
    zamanYapisi->tm_mon -= 1;
}

int main() {
    struct HastaServis hasta;
    
    printf("🏥 Hastanın Serviste Kalma Süresi Hesaplama\n");
    kullanicidanTarihAl(&hasta.yatışZamani, "📌 Hastanın servise yatış tarihini giriniz");
    kullanicidanTarihAl(&hasta.taburcuZamani, "✅ Hastanın taburcu olduğu tarihi giriniz");
    
    servisSuresiHesapla(hasta);
    
    return 0;
}
