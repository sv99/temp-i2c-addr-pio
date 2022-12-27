#include <Arduino.h>
/*
   Чтение уникального адреса термометра для последующего использования
   ВНИМАНИЕ! Устанавливать не более одного датчика на линию (пин)
*/
#include <microDS18B20.h>

#define DS18B20_PIN 2

MicroDS18B20 <DS18B20_PIN> sensor;  // Создаем термометр без адреса
uint8_t address[8];

void setup() {
    Serial.begin(9600);
    while (!Serial) {
        ; // wait for serial port to connect. Needed for Leonardo only
    }
    Serial.println("setup");
}

void print_hex(uint8_t buf[8]) {
    Serial.print('{');
    for (uint8_t i = 0; i < 8; i++) {
        Serial.print("0x");
        Serial.print(buf[i], HEX);
        if (i < 7) Serial.print(", ");
    }
    Serial.println('}');
}

void print_dec(uint8_t buf[8]) {
    for (uint8_t i = 0; i < 8; i++) {
        Serial.print(buf[i]);
        if (i < 7) Serial.print(".");
    }
    Serial.println();
}

void loop() {
    if (sensor.readAddress(address)) {
        print_hex(address);
        print_dec(address);
        if (sensor.readTemp()) {
            sensor.requestTemp();
            delay(800);
            Serial.println(sensor.getTemp());
        } else {
            Serial.println("error read temp");
        }
    } else {
        Serial.println("Not connected");
    }
    delay(3000);
}