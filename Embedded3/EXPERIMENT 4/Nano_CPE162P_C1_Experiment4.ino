#include "Servo.h"
#include <LiquidCrystal_I2C.h>
#include <String.h>
#include <ESP8266WiFi.h>
#include "ThingSpeak.h"
#include <Arduino.h>

Servo servo;
LiquidCrystal_I2C lcd(0x27, 16, 2);
const int sensor = A0;
String title = "IRRIGATION SYSTEM";

float moisture;
int plantStat = 0;
long int timeStart = 0;
char ssid[] = "fh_dbe600";
char pass[] = "wlan2419ff";
int keyIndex = 0;
WiFiClient client;

unsigned long myChannelNumber = 2462986;
const char* myWriteAPIKey = "ZPCN22BHRDMCDGIC";

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

  servo.attach(0);
  servo.write(0);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("IRRIGATION");
  lcd.setCursor(5, 1);
  lcd.print("SYSTEM");
  delay(5000);
  lcd.clear();
}

void readMoist() {
  moisture = (100.00 - ((analogRead(sensor) / 1023.00) * 100.00));
  Serial.print("Soil Moisture(in Percentage) = ");
  Serial.print(moisture);
  Serial.println("%");
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

void servoOp() {
  servo.write(180);
  delay(3000);
  for (int i = 180; i > 0; i--) {
    servo.write(i);
  }
  delay(5000);
}

void loop() {
  readMoist();
  if ((millis() - timeStart) >= 15000) {
    ThingSpeak.setField(1, moisture);
    ThingSpeak.setField(2, plantStat);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    if (x == 200) {
      Serial.println("Channel update successful.");
    } else {
      Serial.println("Problem updating channel. HTTP error code " + String(x));
    }
    timeStart = millis();
  }

  if (moisture < 10) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Moisture: ");
    lcd.setCursor(10, 0);
    lcd.print(moisture);
    lcd.print("%");
    lcd.setCursor(5, 1);
    lcd.print("Too Dry");
    servoOp();
    plantStat = 1;
  } else if ((moisture > 10) && (moisture < 30)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Moisture: ");
    lcd.setCursor(10, 0);
    lcd.print(moisture);
    lcd.print("%");
    lcd.setCursor(2, 1);
    lcd.print("Below Normal");
    servoOp();
    plantStat = 2;
  } else if ((moisture >= 30) && (moisture < 50)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Moisture: ");
    lcd.setCursor(10, 0);
    lcd.print(moisture);
    lcd.print("%");
    lcd.setCursor(5, 1);
    lcd.print("Normal");
    plantStat = 3;
  } else if (moisture >= 50) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Moisture: ");
    lcd.setCursor(10, 0);
    lcd.print(moisture);
    lcd.print("%");
    lcd.setCursor(4, 1);
    lcd.print("Drowning!");
    plantStat = 4;
  }
  delay(3500);
}
