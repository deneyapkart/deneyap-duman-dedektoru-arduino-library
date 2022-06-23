/*
 *   Duman Algılama örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensörden gelen duman değerleri okumaktadır. Bu değerleri seri monitöre yazdırmaktadır. 
 *   Duman algılayınca Duman Dedektörü kartındaki yeşil çıkış ledi yanmaktadır.
 *   Not: Karta ilk güç verildiketn sonra yeşil çıkış led sönene kadar beklenilmeli. Led sönme süresi uzadığı takdirde üzerindeki pot değeri değiştirilmelidir. 
 *   
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Duman Dedektörü için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-duman-dedektoru-arduino-library <------ 
 *
*/

#include <Deneyap_DumanDedektoru.h>                          // Deneyap_DumanDedektoru kutuphanesi eklenmesi

SmokeDetector DumanSensor;                                   // SmokeDetector için class tanımlaması

void setup() {
    Serial.begin(115200);                                    // Seri haberlesme baslatılması
    if (!DumanSensor.begin(0x20)) {                          // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
        delay(3000);
        Serial.println("I2C bağlantısı başarısız ");         // I2C bağlantısı başarısız olursa seri monitore yazdırılması
        while (1);
    }
}

void loop() {
    /* ReadSmokeDetectorDigital() = 0 ise "duman ALGILANDI"
                                    1 ise "duman ALGILANMADI" */
    bool dumanDurum = DumanSensor.ReadSmokeDigital();        // Duman durumu okunması
    Serial.print("Duman Durumu:");
    Serial.print(dumanDurum);                                // Duman durumu seri monitore yazdırılması

    uint16_t dumanDeger = DumanSensor.ReadSmokeAnalog();     // Duman degeri okunması
    Serial.print("\t Duman Degeri:");
    Serial.println(dumanDeger);                              // Duman verisi seri monitore yazdırılması

    delay(10);
}
