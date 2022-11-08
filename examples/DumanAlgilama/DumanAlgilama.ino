/*
 *   Duman Algılama örneği,
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Deneyap Duman Detektöründen gelen analog duman değerlerini okumaktadır. Bu değerleri seri port ekranına yazdırmaktadır. 
 *   Duman algılanınca seri port ekranına "Duman Algılandı" yazmaktadır ve kartın üzerinde yer alan çıkış ledi yanmaktır. 
 *    
 *   UYARI: Duman Algılama Değeri
 *    -> Deneyap Duman Detektörü kartına ilk güç verildiğinde analog olarak 1024 değerini gözlemleyeceksiniz. Kart ısındıkca bu analog değer düşmeye başlayacaktır.
 *    -> Duman değeri ortama göre değişebilmektedir. Değerin düşme hızı değişiklik gösterebilir. Analog duman değeri 300-500 kadar düşebilir.
 *    -> Projenizi geliştirmeden önce değerleri gözlemlendirmelisiz. Gözlemlediğiniz değerleri baz alarak projelerinizi geliştirebilirsiniz. 
 *  
 *   UYARI: Duman Algılama Durumu
 *    -> Deneyap Duman Detektörü kartındaki trimpot ile eşik(threshold) değerini değiştirebilirsiniz.  
 *      -> Trimpot saat yönüne çevirilirse eşik değeri düşecektir.
 *      -> Trimpot saat yönünün tersine çevirilirse eşik değeri yükselecektir.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Duman Dedektörü için oluşturulmuştur
 *      ------> https://docs.deneyapkart.org/tr/content/contentDetail/deneyap-modul-deneyap-duman-dedektoru-m39 <------
 *      ------> https://github.com/deneyapkart/deneyap-duman-dedektoru-arduino-library <------ 
*/
#include <Deneyap_DumanDedektoru.h>                          // Deneyap Duman Dedektörü kutuphanesi eklenmesi

SmokeDetector DumanSensor;                                   // SmokeDetector için class tanımlaması

void setup() {
    Serial.begin(115200);                                    // Seri haberlesme baslatılması
    if (!DumanSensor.begin(0x20)) {                          // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
        delay(3000);
        Serial.println("I2C bağlantısı başarısız ");         // I2C bağlantısı başarısız olursa seri port ekranına yazdırılması
        while (1);
    }
}

void loop() {
    bool dumanDurum = DumanSensor.ReadSmokeDigital();        // Duman durumu okunması
    if(dumanDurum == 1) {
      Serial.println("Duman Algılandı");                     // Duman algılanınca çıkış ledi yanacaktır
    }

    uint16_t dumanDeger = DumanSensor.ReadSmokeAnalog();     // Duman degeri okunması
    Serial.print("Duman Degeri:");
    Serial.println(dumanDeger);                              // Duman verisi seri port ekranına yazdırılması
    delay(10);
}
