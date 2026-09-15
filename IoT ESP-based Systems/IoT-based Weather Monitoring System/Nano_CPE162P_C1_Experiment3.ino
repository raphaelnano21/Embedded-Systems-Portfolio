#include <ESP8266WiFi.h>
#include "ThingSpeak.h"
#include <Arduino.h>

#include <dht.h>
#include <LiquidCrystal_I2C.h>
#include <String.h>

dht DHT;
LiquidCrystal_I2C lcd(0x27, 16, 2);
String title = "WEATHER MONITORING";
#define DHT11_PIN 2

long int timeStart = 0;
char ssid[] = "fh_dbe600";
char pass[] = "wlan2419ff";
int keyIndex = 0;
WiFiClient client;

unsigned long myChannelNumber = 2448718;
const char* myWriteAPIKey = "EJS3HL8Z2SOA2HQQ";

void setup() {
  Serial.begin(115200);
  ThingSpeak.begin(client);
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println("fh_dbe600");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, pass);
      Serial.print(".");
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
  lcd.init();
  lcd.backlight();
  lcd.setCursor(4, 0);
  lcd.print("WEATHER");
  lcd.setCursor(3, 1);
  lcd.print("MONITORING");
  delay(5000);
  lcd.clear();
}

void scrollText(int row, String message, int delayTime, int lcdColumns) {
  for (int i = 0; i < lcdColumns; i++) {
    message = " " + message;
  }
  message = message + " ";
  for (int pos = 0; pos < message.length(); pos++) {
    lcd.setCursor(0, row);
    lcd.print(message.substring(pos, pos + lcdColumns));
    delay(delayTime);
  }
}

void loop() {
  if ((millis() - timeStart) >= 15000) {
    ThingSpeak.setField(1, int(DHT.temperature));
    ThingSpeak.setField(2, int(DHT.humidity));

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    if (x == 200) {
      Serial.println("Channel update successful.");
    } else {
      Serial.println("Problem updating channel. HTTP error code " + String(x));
    }
    timeStart = millis();
  }

  DHT.read11(2);
  Serial.println(DHT.temperature);
  lcd.setCursor(0, 1);
  lcd.print("Temp:");
  lcd.setCursor(5, 1);
  lcd.print(int(DHT.temperature));
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(10, 1);
  lcd.print("Hum:");
  lcd.setCursor(14, 1);
  lcd.print(int(DHT.humidity));
  scrollText(0, title, 350, 16);
}
