# Deneyap Duman Dedektörü Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Duman Dedektörü için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M39**, **mpv1.0**
- `MCU` MQ-2, STM8S003F3
- `Ağırlık`
- `Modul Boyutları` 25,4 mm x 38,1 mm
- `I2C Adres` 0x20, 0x4E, 0x57, 0x58

| Adres |  | 
| :---  | :---     |
| 0x20 | varsayılan adres |
| 0x4E | ADR1 kısa devre yapıldığındaki adres |
| 0x57 | ADR2 kısa devre yapıldığındaki adres |
| 0x58 | ADR1 ve ADR2 kısa devre yapıldığındaki adres |

## :closed_book:Dokümanlar
[Deneyap Duman Dedektörü](https://docs.deneyapkart.org/en/content/contentDetail/deneyap-modul-deneyap-duman-dedektoru-m39)

[Deneyap Duman Dedektörü Shematic](https://cdn.deneyapkart.org/media/upload/userFormUpload/W0wwJGClTVDjdv9xZl9liTXfBbeG99Uo.pdf)

[Deneyap Duman Dedektörü Mechanical Drawing](https://cdn.deneyapkart.org/media/upload/userFormUpload/Mzb7brJaIeM7gkEY3G5w31l4TOAEWbT3.pdf)

[MQ-2_datasheet](https://www.winsen-sensor.com/d/files/PDF/Semiconductor%20Gas%20Sensor/MQ-2%20(Ver1.4)%20-%20Manual.pdf)

[Arduino Kütüphanesi Nasıl İndirilir](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Duman Dedektörü 
Bu Arduino kütüphanesi Deneyap Duman Dedektörü I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz.

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.1 - fonkiyon(ReadSmokeDigital) ve örnek uygulamalardaki yorum satırları güncellendi

1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Duman Dedektörü ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir. 

| Duman Dedektörü | Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     |3.3V Besleme Gerilimi| 3.3V    |
| GND      | Toprak |GND      |
| SDA      |Çift Yönlü Veri Hattı| SDA pini |
| SCL      |Veri Hattı Zaman Senkronizasyon İşareti| SCL pini|
| SWIM | Debug | bağlantı yok |
| RES  | Debug | bağlantı yok |
| AO 	|Analog Çıkış Pini|herhangi Analog pini|
| DO 	|Dijital Çıkış Pini|herhangi GPIO pini|
| H 	|Algılayıcının Isıtıcı Pini||

## :bookmark_tabs:Lisans Bilgisi
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-duman-dedektoru-arduino-library/blob/master/LICENSE) dosyasını inceleyin.