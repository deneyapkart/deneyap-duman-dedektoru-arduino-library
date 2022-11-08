/*
 *   I2C haberleşme protokolü kullanılmadan Duman Algılama örneği,
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Deneyap Duman Detektöründen gelen analog duman değerlerini okumaktadır. Bu değerleri seri port ekranına yazdırmaktadır. 
 *   Duman algılanınca seri port ekranına "Duman Algılandı" yazmaktadır ve kartın üzerinde yer alan çıkış ledi yanmaktır. 
 *    
 *   UYARI: Duman Algılama Değeri
 *    -> Deneyap Duman Detektörü kartına ilk güç verildiğinde analog olarak 4095(kullandığınız geliştirme kartına göre değişir) değerini gözlemleyeceksiniz. 
 *    Kart ısındıkca bu analog değer düşmeye başlayacaktır.
 *    -> Duman değeri ortama göre değişebilmektedir. Değerin düşme hızı değişiklik gösterebilir. 
 *    Analog duman değeri 1200-2000(kullandığınız geliştirme kartına göre değişir) kadar düşebilir.
 *    -> Projenizi geliştirmeden önce değerleri gözlemlendirmelisiz. Gözlemlediğiniz değerleri baz alarak projelerinizi geliştirebilirsiniz. 
 *  
 *   UYARI: Duman Algılama Durumu
 *    -> Deneyap Duman Detektörü kartındaki trimpot ile eşik(threshold) değerini değiştirebilirsiniz.  
 *      -> Trimpot saat yönüne çevirilirse eşik değeri düşecektir.
 *      -> Trimpot saat yönünün tersine çevirilirse eşik değeri yükselecektir.
 * 
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır. 
 *   Bu örnek I2C haberleşme protokolü kullanılmadan yazılmıştır.
 *
 *   Bu örnek Deneyap Duman Dedektörü için oluşturulmuştur
 *      ------> https://docs.deneyapkart.org/tr/content/contentDetail/deneyap-modul-deneyap-duman-dedektoru-m39 <------
 *      ------> https://github.com/deneyapkart/deneyap-duman-dedektoru-arduino-library <------
*/
#define DOUTPIN D0                                 // Duman Dedektörü kartındaki DO pininin D0 pinine baglanmalıdır
#define AOUTPIN A0                                 // Duman Dedektörü kartındaki AO pininin A0 pinine baglanmalıdır

void setup() {
    Serial.begin(115200);                          // Seri haberleşme başlatılması
}

void loop() {
    bool DumanDurum = digitalRead(DOUTPIN);        // Duman durumu okunması
    if(DumanDurum == 0) {
      Serial.println("Duman Algılandı");           // Duman algılanınca çıkış ledi yanacaktır
    }
    
    uint16_t DumanDeger = analogRead(AOUTPIN);     // Duman degerinin okunması
    Serial.print("Duman Degeri: ");
    Serial.println(DumanDeger);                    // Duman verisi seri port ekranına yazdırılması
    delay(10);
}
