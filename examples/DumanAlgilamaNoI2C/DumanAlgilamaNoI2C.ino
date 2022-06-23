/*
 *   I2C haberleşme protokolü kullanılmadan Duman Algılama örneği,
 *
 *   Sensörden gelen duman değerleri okumaktadır. Bu değerleri seri monitöre yazdırmaktadır. 
 *   Duman algılayınca Duman Dedektörü kartındaki yeşil çıkış ledi yanmaktadır.
 *   Not: Karta ilk güç verildiketn sonra yeşil çıkış led sönene kadar beklenilmeli. Led sönme süresi uzadığı takdirde üzerindeki pot değeri değiştirilmelidir. 
 *   
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır. 
 *   Bu örnek I2C haberleşme protokolü kullanılmadan yazılmıştır.
 *
 *   Bu örnek Deneyap Duman Dedektörü için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-duman-dedektoru-arduino-library <------
 *
*/

#define DOUTPIN D0                                 // Duman Dedektörü kartındaki DO pininin D0 pinine baglanmalıdır
#define AOUTPIN A0                                 // Duman Dedektörü kartındaki AO pininin A0 pinine baglanmalıdır

void setup() {
    Serial.begin(115200);                          // Seri haberleşme başlatılması
}

void loop() {
    bool DumanDurum = digitalRead(DOUTPIN);        // Duman durumu okunması
    Serial.print("Duman Durumu: ");
    Serial.print(DumanDurum);                      // Duman durumu seri monitore yazdırılması
    
    uint16_t DumanDeger = analogRead(AOUTPIN);     // Duman degerinin okunması
    Serial.print("\tDuman Degeri: ");
    Serial.println(DumanDeger);                    // Duman verisi seri monitore yazdırılması
}
