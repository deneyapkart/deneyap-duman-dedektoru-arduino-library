# Deneyap Duman Dedektörü Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Duman Dedektörü için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M39**, **mpv1.0**
- `MCU` STM8S003F3
- `Ağırlık`
- `Modul Boyutları`
- `I2C Adres` 0x20, 0x4E, 0x57, 0x58

| Adres |  | 
| :---  | :---     |
| 0x20 | varsayılan adres |
| 0x4E | ADR1 kısa devre yapıldığındaki adres |
| 0x57 | ADR2 kısa devre yapıldığındaki adres |
| 0x58 | ADR1 ve ADR2 kısa devre yapıldığındaki adres |

## :closed_book:Dokümanlar
Deneyap Duman Dedektörü 

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
1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Duman Dedektörü ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir. 

| Duman Dedektörü | Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     | Güç    | 3.3V    |
| GND      | Toprak |GND      |
| SDA      | I2C Data  | SDA pini |
| SCL      | I2C Clock | SCL pini|
| SWIM | Debug | bağlantı yok |
| RES  | Debug | bağlantı yok |
| AO 	|Analog Output|herhangi Analog pini|
| DO 	|Dijital Output|herhangi GPIO pini|
| H 	|||

## :bookmark_tabs:Lisans Bilgisi
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-duman-dedektoru-arduino-library/blob/master/LICENSE) dosyasını inceleyin.