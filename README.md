# Deneyap Gas Sensor Arduino Library
[FOR TURKISH VERSION](docs/README_tr.md) ![trflag](https://github.com/deneyapkart/deneyapkart-arduino-core/blob/master/docs/tr.png)

***** Add photo ****

Arduino library for Deneyap Gas Sensor

## :mag_right:Specifications 
- `Product ID` **M39**, **mpv1.0**
- `MCU` MQ-2, STM8S003F3
- `Weight` 
- `Module Dimension` 25,4 mm x 38,1 mm
- `I2C address` 0x20, 0x4E, 0x57, 0x58

| Address |  | 
| :---      | :---     |
| 0x20 | default address |
| 0x4E | address when ADR1 pad is shorted |
| 0x57 | address when ADR2 pad is shorted |
| 0x58 | address when ADR1 and ADR2 pads are shorted |

## :closed_book:Documentation
[Deneyap Gas Sensor](https://docs.deneyapkart.org/en/content/contentDetail/deneyap-modul-deneyap-duman-dedektoru-m39)

[Deneyap Gas Sensor Shematic](https://cdn.deneyapkart.org/media/upload/userFormUpload/W0wwJGClTVDjdv9xZl9liTXfBbeG99Uo.pdf)

[Deneyap Gas Sensor Mechanical Drawing](https://cdn.deneyapkart.org/media/upload/userFormUpload/Mzb7brJaIeM7gkEY3G5w31l4TOAEWbT3.pdf)

[MQ-2_datasheet](https://www.winsen-sensor.com/d/files/PDF/Semiconductor%20Gas%20Sensor/MQ-2%20(Ver1.4)%20-%20Manual.pdf)

[How to install a Arduino Library](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Gas Sensor
This Arduino library allows you to use Deneyap Gas Sensor with I2C peripheral. You can use this library in your projects with any Arduino compatible board with I2C peripheral.

## :globe_with_meridians:Repository Contents
- `/docs ` README_tr.md and product photos
- `/examples ` Examples with .ino extension sketches
- `/src ` Source files (.cpp .h)
- `keywords.txt ` Keywords from this library that will be highlighted in the Arduino IDE
- `library.properties ` General library properties for the Arduino package manager

## Version History
1.0.1 - updated function(ReadSmokeDigital) and comment line in examples

1.0.0 - initial release

## :rocket:Hardware Connections
- Deneyap Gas Sensor and Board can be connected with I2C cable
- or 3V3, GND, SDA and SCL pins can be connected with jumper cables

|Gas Sensor| Function | Board pins | 
|:--- |   :---  | :---|
|3.3V | Power   |3.3V |      
|GND  | Ground  | GND | 
|SDA  | I2C Data  | SDA pin |
|SCL  | I2C Clock | SCL pin |
|SWIM | Debug | no connection |
|RES  | Debug | no connection |
| AO  |Analog Output|any Analog pin|
| DO  |Dijital Output|any GPIO pin|
| H   |Sensor's Heater Pin||

## :bookmark_tabs:License Information
Please review the [LICENSE](https://github.com/deneyapkart/deneyap-duman-dedektoru-arduino-library/blob/master/LICENSE) file for license information.