#include <Stepper.h>
#include <Servo.h>
#include "SevSeg.h"

const int steps = 300;
const int trigPin1 = 3;
const int echoPin1 = 2;
const int trigPin2 = 12;
const int echoPin2 = 13;
Stepper stepMotor(steps, 13, 11, 12, 10);
SevSeg sevseg;
Servo servo;
int avail = 15;
int occupied = 0;
int dispNum = 0;
void setup() {
  stepMotor.setSpeed(70);
  byte numDigits = 4;
  byte digitPins[] = { 9, 8, 7, 6 };
  byte segmentPins[] = { A0, A1, A2, A3, A4, A5, 5, LOW };
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins,
               segmentPins, false, 0, 1, 0);
  sevseg.setBrightness(90);
  servo.attach(4);
  servo.write(0);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
}


int updateSlots() {
  if (occupied < 0) {
    occupied = 0;
  }
  if (avail < 0) {
    avail = 0;
  }
  dispNum = (occupied * 100) + avail;
  return dispNum;
}

void stepUp() {
  stepMotor.step(steps);
  stepMotor.step(steps);
  stepMotor.step(steps);
  delay(500);
  sevseg.refreshDisplay();
}
void stepDown() {
  stepMotor.step(-steps);
  stepMotor.step(-steps / 2);
  delay(500);
  sevseg.refreshDisplay();
}

void motorUp() {
  sevseg.setNumber(updateSlots());
  sevseg.refreshDisplay();
  for (int angle = 0; angle < 90; angle++) {
    servo.write(angle);
    delayMicroseconds(2);
    sevseg.refreshDisplay();
  }
  sevseg.refreshDisplay();
}

void motorDown() {
  sevseg.setNumber(updateSlots());
  sevseg.refreshDisplay();
  for (int angle = 90; angle > 0; angle--) {
    servo.write(angle);
    delayMicroseconds(2);
    sevseg.refreshDisplay();
  }
  sevseg.refreshDisplay();
}

int distance1() {
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);

  int duration = pulseIn(echoPin1, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}

int distance2() {
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);

  int duration = pulseIn(echoPin2, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}

void loop() {
  sevseg.refreshDisplay();
  sevseg.setNumber(updateSlots());
  while (distance1() < 10) {
    if (occupied == 0) {
      continue;
    } else {
      avail++;
      occupied--;
      sevseg.refreshDisplay();
      motorUp();
      int startms = millis();
      int currentms = millis();
      while (currentms - startms < 5000) {
        currentms = millis();
        sevseg.setNumber(updateSlots());
        sevseg.refreshDisplay();
      }
      startms = currentms;
      sevseg.refreshDisplay();
      motorDown();
    }
  }

  while (distance2() < 14) {
    if (avail == 0) {
      continue;
    } else {
      avail = avail - 1;
      occupied++;
      sevseg.refreshDisplay();
      stepUp();
      int startms = millis();
      int currentms = millis();
      while (currentms - startms < 3000) {
        currentms = millis();
        sevseg.setNumber(updateSlots());
        sevseg.refreshDisplay();
      }
      startms = currentms;
      sevseg.refreshDisplay();
      stepDown();
    }
  }
}
