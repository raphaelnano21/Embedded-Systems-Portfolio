#include <LiquidCrystal_I2C.h>
#include <ESP8266WiFi.h>
#include "ThingSpeak.h"
#include <Arduino.h>

LiquidCrystal_I2C lcd(0x27,16,2);
float volume;

char ssid[] = "NANO FAMILY 2.4G";
char pass[] = "N4n0family";
int keyIndex = 0;
WiFiClient client;
long int timeStart = 0;

unsigned long myChannelNumber = 2442619;
const char* myWriteAPIKey = "L5151GMFH32WN7YV";

void setup() {
  
Serial.begin(115200);
  ThingSpeak.begin(client);
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println("NANO FAMILY 2.4G");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, pass);
      Serial.print(".");
      delay(5000);
    }
    Serial.println("\nConnected.");
  }


lcd.init();
lcd.backlight();
lcd.setCursor(0,0);
lcd.print("WATER MONITORING");
lcd.setCursor(5,1);
lcd.print("SYSTEM");
delay(5000);
lcd.clear();

}

void loop() {
  if ((millis() - timeStart) >= 60000) {
    ThingSpeak.setField(1, volume);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    if (x == 200) {
      Serial.println("Channel update successful.");
    } else {
      Serial.println("Problem updating channel. HTTP error code " + String(x));
    }
    timeStart = millis();
  }

float water = analogRead(A0);
volume = 3.14 * 22.0 * ((water / 130.0))*((water / 130.0));
lcd.setCursor(1,0);
lcd.print("WATER VOLUME: ");
lcd.setCursor(3,1);
lcd.print(volume);
lcd.print(" CM^3");
delay(3000);
lcd.clear();
}
