#include <IRremote.h>


int irval = 0;

int ENA = 3;
int in1 = 2;
int in2 = 4;
int ENB = 6;
int in3 = 5;
int in4 = 7;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(8, ENABLE_LED_FEEDBACK);

  pinMode(ENA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void remote() {
  if (IrReceiver.decode()) {
    switch (IrReceiver.decodedIRData.command) {
      case 24:
        irval = 2;
        break;
      case 8:
        irval = 4;
        break;
      case 90:
        irval = 6;
        break;
      case 82:
        irval = 8;
        break;
      }
    IrReceiver.resume();
    Serial.println(irval);
  }
}

void msdelay(int delNum) {
  int startms = millis();
  int currentms = millis();
  while (currentms - startms < delNum) {
    currentms = millis();
    remote();
  }
}

void ond(int pin) {
  digitalWrite(pin, HIGH);
}

void ona(int pin) {
  analogWrite(pin, 255);
}

void offd(int pin) {
  digitalWrite(pin, LOW);
}

void offa(int pin) {
  analogWrite(pin, 0);
}

void loop() {
remote();
msdelay(300);
if (irval == 6)
{
  ond(in1);
  offd(in2);
  offd(in3);
  ond(in4);
  ona(ENA);
  ona(ENB);
  delay(185);
  irval =0;
}

else if (irval == 4)
{
  offd(in1);
  ond(in2);
  ond(in3);
  offd(in4);
  ona(ENA);
  ona(ENB);
  delay(185);
  irval =0;
}

else if (irval == 2)
{
  ond(in1);
  offd(in2);
  ond(in3);
  offd(in4);
  ona(ENA);
  ona(ENB);
  delay(350);
  irval =0;
}

else if (irval == 8)
{
  offd(in1);
  ond(in2);
  offd(in3);
  ond(in4);
  ona(ENA);
  ona(ENB);
  delay(350);
  irval =0;
}
else
{
  offd(in1);
  offd(in2);
  offd(in3);
  offd(in4);
  offa(ENA);
  offa(ENB);
}
}
