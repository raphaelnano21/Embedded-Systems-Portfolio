#include <LiquidCrystal_I2C.h>
#include <ESP8266WiFi.h>
#include "ThingSpeak.h"
#include <Arduino.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int peopleCount = 0;
const int MAX = 9;
const int TRIG1 = 14;
const int ECHO1 = 12;
const int TRIG2 = 13;
const int ECHO2 = 15;
const int green = 16;
const int yellow = 0;
const int red = 2;
int duration1, distance1, duration2, distance2;
int lightStatus = 0;

char ssid[] = "fh_dbe600";
char pass[] = "wlan2419ff";
int keyIndex = 0;
WiFiClient client;
long int timeStart = 0;

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

  pinMode(TRIG1, OUTPUT);
  pinMode(ECHO1, INPUT);
  pinMode(TRIG2, OUTPUT);
  pinMode(ECHO2, INPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("IOT-BASED");
  lcd.setCursor(0, 1);
  lcd.print("BUILDING  SYSTEM");
  delay(5000);
  lcd.clear();
}

void usd1() {
  digitalWrite(TRIG1, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG1, LOW);

  duration1 = pulseIn(ECHO1, HIGH);
  distance1 = 0.017 * duration1;

  Serial.println(distance1);
}

void usd2() {
  digitalWrite(TRIG2, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG2, LOW);

  duration2 = pulseIn(ECHO2, HIGH);
  distance2 = 0.017 * duration2;

  Serial.println(distance2);
}

void loop() {
  if ((millis() - timeStart) >= 60000) {
    ThingSpeak.setField(1, peopleCount);
    ThingSpeak.setField(2, lightStatus);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    if (x == 200) {
      Serial.println("Channel update successful.");
    } else {
      Serial.println("Problem updating channel. HTTP error code " + String(x));
    }
    timeStart = millis();
  }

  usd1();
  usd2();
  if (distance1 < 15) {
    if (peopleCount == MAX) {
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("MAX OCCUPANCY");
      lcd.setCursor(4, 1);
      lcd.print("REACHED!");
      delay(2000);
      lcd.clear();
    } else {
      peopleCount++;
    }
  }
  if (distance2 < 15) {
    if (peopleCount == 0) {
      lcd.clear();
      lcd.setCursor(3, 0);
      lcd.print("NINE SPACES");
      lcd.setCursor(4, 1);
      lcd.print("AVAILABLE!");
      delay(2000);
      lcd.clear();
    } else {
      peopleCount--;
    }
  }
  if (peopleCount == 0) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    lightStatus = 0;
  } else if ((peopleCount >= 1) && (peopleCount < 4)) {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    lightStatus = 1;
  } else if ((peopleCount >= 4) && (peopleCount < 9)) {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
    lightStatus = 1;
  } else if (peopleCount == MAX) {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, HIGH);
    lightStatus = 1;
  }

  lcd.setCursor(0, 0);
  lcd.print("MAX OCCUPANCY: 9");
  lcd.setCursor(0, 1);
  lcd.print("PERSON COUNT: ");
  lcd.print(peopleCount);
  delay(700);
}
