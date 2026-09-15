#include <Servo.h>
#include <Stepper.h>

const int steps = 300;
const int trigPin = 8;
const int echoPin = 7;
int closed = 0;
Stepper stepMotor(steps, 13, 11, 12, 10);
Servo servo;
int startms = millis();
int currentms = millis();
void setup() {
  stepMotor.setSpeed(70);
  servo.attach(9);
  servo.write(120);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void closeCan() {
  stepMotor.step(steps);
  stepMotor.step(steps);
  stepMotor.step(steps / 2);
  delay(100);
}

void openCan() {
  stepMotor.step(-steps);
  stepMotor.step(-steps);
  stepMotor.step(-steps / 2);
  delay(100);
}

void pushDown() {
  for (int i = 0; i < 3; i++) {
    for (int angle = 120; angle > 0; angle--) {
      servo.write(angle);
      delay(7);
    }
    for (int angle = 0; angle < 120; angle++) {
      servo.write(angle);
      delay(7);
    }
  }
}

int distance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  int duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
  Serial.println(distance);
  return distance;
}

void loop() {
  if (!(distance() > 5)) {
    startms = millis();
    currentms = millis();
    while (currentms - startms < 4000) {
      currentms = millis();
    }
    while ((distance() <= 5)) {
      closeCan();
      pushDown();
    }
    closed = 1;
  } else if (!(distance() < 5)) {
    startms = millis();
    currentms = millis();
    while (currentms - startms < 4000) {
      currentms = millis();
    }
    if ((closed == 1) && (distance() > 5)) {
      openCan();
      closed = 0;
    }
  }
}
