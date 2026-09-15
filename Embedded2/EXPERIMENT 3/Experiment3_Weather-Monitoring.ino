#include "dht.h"
dht DHT;

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#include <string.h>
String lcdVal;

int temp() {
  DHT.read11(2);
  Serial.println(DHT.temperature);
  return DHT.temperature;
}

void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(4, 0);
  lcd.print("Weather");
  lcd.setCursor(3, 1);
  lcd.print("Monitoring");
  delay(5000);
  lcd.clear();
}

void loop() {
  if (digitalRead(9) == LOW) {
    lcdVal = "Room Temp: ";
  } else if (digitalRead(8) == LOW) {
    lcdVal = "Hand Temp: ";
  } else if (digitalRead(7) == LOW) {
    lcdVal = "Outside Temp: ";
  } else if (digitalRead(6) == LOW) {
    lcdVal = "Bag Temp: ";
  }
  SS else if (digitalRead(5) == LOW) {
    lcdVal = "CR Temp: ";
  }
  lcd.setCursor(3, 0);
  lcd.print(lcdVal);
  lcd.setCursor(6, 1);
  lcd.print(temp());
  lcd.print((char)223);
  lcd.print("C");
  delay(1000);
  lcd.clear();
}
