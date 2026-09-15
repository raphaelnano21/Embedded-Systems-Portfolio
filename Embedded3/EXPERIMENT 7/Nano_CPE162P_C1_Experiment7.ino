#include <ESP8266WiFi.h>
#include "ThingSpeak.h"
#include <Arduino.h>

const int firesens = A0;
const int buzzPin = 5;
const int floor1 = 14;
const int floor2 = 12;
const int floor3 = 13;
const int floor4 = 15;
const int button = 4;

int fire;
int floorNum = 1;
int flr1_count = 0;
int flr2_count = 0;
int flr3_count = 0;
int flr4_count = 0;

char ssid[] = "fh_dbe600";
char pass[] = "wlan2419ff";
int keyIndex = 0;
WiFiClient client;
long int timeStart = 0;

unsigned long myChannelNumber = 2447481;
const char* myWriteAPIKey = "XFR3JPKJHUAZ49S2";

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

  pinMode(firesens, INPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(buzzPin, OUTPUT);
  pinMode(floor1, OUTPUT);
  pinMode(floor2, OUTPUT);
  pinMode(floor3, OUTPUT);
  pinMode(floor4, OUTPUT);
}

void playTone(int frequency, int duration) {
  for (long i = 0; i < duration * 1000L; i += 2 * frequency) {
    digitalWrite(buzzPin, HIGH);
    delayMicroseconds(frequency);
    digitalWrite(buzzPin, LOW);
    delayMicroseconds(frequency);
  }
}

void floorCheck() {
  if (floorNum == 1) {
    digitalWrite(floor1, HIGH);
    digitalWrite(floor2, LOW);
    digitalWrite(floor3, LOW);
    digitalWrite(floor4, LOW);
  } else if (floorNum == 2) {
    digitalWrite(floor1, LOW);
    digitalWrite(floor2, HIGH);
    digitalWrite(floor3, LOW);
    digitalWrite(floor4, LOW);
  } else if (floorNum == 3) {
    digitalWrite(floor1, LOW);
    digitalWrite(floor2, LOW);
    digitalWrite(floor3, HIGH);
    digitalWrite(floor4, LOW);
  } else if (floorNum == 4) {
    digitalWrite(floor1, LOW);
    digitalWrite(floor2, LOW);
    digitalWrite(floor3, LOW);
    digitalWrite(floor4, HIGH);
  }
  delay(100);
}

void fireCounter() {
  if (floorNum == 1) {
    flr1_count++;
  } else if (floorNum == 2) {
    flr2_count++;
  } else if (floorNum == 3) {
    flr3_count++;
  } else if (floorNum == 4) {
    flr4_count++;
  }
}

void alarmReset() {
  flr1_count = 0;
  flr2_count = 0;
  flr3_count = 0;
  flr4_count = 0;
}

void loop() {
  if ((millis() - timeStart) >= 15000) {
    ThingSpeak.setField(1, flr1_count);
    ThingSpeak.setField(2, flr2_count);
    ThingSpeak.setField(3, flr3_count);
    ThingSpeak.setField(4, flr4_count);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    if (x == 200) {
      Serial.println("Channel update successful.");
    } else {
      Serial.println("Problem updating channel. HTTP error code " + String(x));
    }
    timeStart = millis();
  }
  
  fire = analogRead(A0);
  Serial.println(fire);
  if (digitalRead(button) == 0) {
    if (floorNum == 4) {
      floorNum = 1;
    } else {
      floorNum++;
    }
  }

  floorCheck();

  if (fire >= 1023) {
    while (fire >= 1023) {
      for (int i = 0; i < 3; i++) {
        tone(buzzPin, 698);
        delay(500);
        noTone(buzzPin);
        delay(500);
      }
      fire = analogRead(A0);
    }
    fireCounter();

    ThingSpeak.setField(1, flr1_count);
    ThingSpeak.setField(2, flr2_count);
    ThingSpeak.setField(3, flr3_count);
    ThingSpeak.setField(4, flr4_count);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    if (x == 200) {
      Serial.println("Channel update successful.");
    } else {
      Serial.println("Problem updating channel. HTTP error code " + String(x));
    }
    timeStart = millis();
  }

  alarmReset();

  delay(200);
}
