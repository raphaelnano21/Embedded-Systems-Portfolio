#include <IRremote.h>
#include <Stepper.h>
#include <Servo.h>

int irval;

const int steps = 300;
Stepper stepper(steps, 13, 11, 12, 10);

Servo servo;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(7, ENABLE_LED_FEEDBACK);

  stepper.setSpeed(70);

  servo.attach(6);
  servo.write(0);

  pinMode(A4, OUTPUT);

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void remote() {
  if (IrReceiver.decode()) {
    switch (IrReceiver.decodedIRData.command) {
      case 22:
        irval = 0;
        break;
      case 12:
        irval = 1;
        break;
      case 24:
        irval = 2;
        break;
      case 94:
        irval = 3;
        break;
      case 8:
        irval = 4;
        break;
      case 28:
        irval = 5;
        break;
      case 67:
        irval = 10;
        break;
    }
    IrReceiver.resume();
    Serial.println(irval);
  }
}

void playTone(int frequency, int duration) {
  for (long i = 0; i < duration * 1000L; i += 2 * frequency) {
    digitalWrite(A4, HIGH);
    delayMicroseconds(frequency);
    digitalWrite(A4, LOW);
    delayMicroseconds(frequency);
  }
}

void msdelay(int delNum) {
  int startms = millis();
  int currentms = millis();
  while (currentms - startms < delNum) {
    currentms = millis();
  }
  remote();
}

void LED() {
  digitalWrite(3, HIGH);
  msdelay(50);
  digitalWrite(3, LOW);
  msdelay(50);
  digitalWrite(4, HIGH);
  msdelay(50);
  digitalWrite(4, LOW);
  msdelay(50);
  digitalWrite(5, HIGH);
  msdelay(50);
  digitalWrite(5, LOW);
  msdelay(50);
  for (int i = 0; i < 2; i++) {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    msdelay(150);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    msdelay(150);
  }
  digitalWrite(5, HIGH);
  msdelay(50);
  digitalWrite(5, LOW);
  msdelay(50);
  digitalWrite(4, HIGH);
  msdelay(50);
  digitalWrite(4, LOW);
  msdelay(50);
  digitalWrite(3, HIGH);
  msdelay(50);
  digitalWrite(3, LOW);
  msdelay(50);
  for (int i = 0; i < 2; i++) {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    msdelay(150);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    msdelay(150);
  }
}

void loop() {
  remote();

  if (irval == 1) {
    while (irval != 10) {
      stepper.step(steps);
      remote();
    }
  } else if (irval == 2) {
    while (irval != 10) {
      servo.write(180);
      msdelay(500);
      servo.write(0);
      msdelay(500);
      remote();
    }
  } else if (irval == 3) {
    while (irval != 10) {
      playTone(1000, 100);
      remote();
    }
  } else if (irval == 4) {
    while (irval != 10) {
      LED();
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      msdelay(1000);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      msdelay(1000);
    }
  } else if (irval == 5) {
    while (irval != 10) {
      remote();
      if (irval == 10)
      {
        break;
      }
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      msdelay(50);
      if (irval == 10)
      {
        break;
      }
      stepper.step(100);
      servo.write(180);
      playTone(1000, 500);
      remote();
      if (irval == 10)
      {
        break;
      }
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      msdelay(50);
      if (irval == 10)
      {
        break;
      }
      stepper.step(100);
      servo.write(0);
      playTone(1000, 500);
      remote();
      if (irval == 10)
      {
        break;
      }
    }
    digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
  }
}
