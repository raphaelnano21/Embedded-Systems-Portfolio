#include "SevSeg.h"

SevSeg sevseg;

unsigned long startms;
unsigned long currentms;
int color = 1;
int change = 0;
int i = 60;
const int trigPin = 16;
const int echoPin = 17;

void setup() {
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

  Serial.begin(9600);

  byte numDigits = 2;
  byte digitPins[] = { 13, 12, LOW, LOW };
  byte segmentPins[] = { 11, 10, 9, 8, 7, 6, 5, LOW };
  bool resistorOnSegments = false;
  bool leadingZeros = false;
  byte hardwareConfig = COMMON_CATHODE;
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorOnSegments);
  sevseg.setBrightness(150);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void msdelay() {
  startms = millis();
  currentms = millis();

  while (currentms - startms < 500) {
    currentms = millis();
    sevseg.refreshDisplay();
  }
}

void adjust() {
  if (change == 0)
  {
if ((digitalRead(A0) == 0) && (color == 2)) {
    if (i <= 15) {
      i = 0;
    } else {
      i = i - 14;
    }
  change = 1;
  } else if ((digitalRead(A1) == 0) && (color == 1)) {
    i = i + 31;
    if (i >= 99) {
      i = 100;
    }
    change = 1;
  }
  }
  
  msdelay();
}

int distance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  int duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}

void counter(int color) {
  if (color == 1) {
    i = 60;
    change = 0;
    for (i; i >= 0; i--) {
      int k = i;
      if (i > 30) {
        digitalWrite(4, HIGH);
        sevseg.setNumber(k);
        msdelay();
        adjust();
      } else {
        digitalWrite(4, LOW);
        digitalWrite(3, HIGH);
        sevseg.setNumber(k);
        msdelay();
        adjust();
      }
      digitalWrite(3, LOW);
    }
  } else if (color == 2) {
    i = 60;
    change = 0;
    for (i; i >= 0; i--) {
      int k = 60 - i;
      digitalWrite(2, HIGH);
      sevseg.setNumber(k);
      msdelay();
      usd();
      adjust();
    }
    digitalWrite(2, LOW);
  }
}

void usd() {
  if (distance() < 10) {
    tone(A4, 698, 500);
  } else {
    noTone(A4);
  }
}

void loop() {
  if (color == 1) {
    counter(color);
    color = 2;
  } else if (color == 2) {
    counter(color);
    color = 1;
  }
}
