#include <Servo.h>
#include "dht.h"
 
Servo servo;
dht DHT;

int humsensor()
{
 DHT.read11(A0);
 return DHT.humidity;
}

void setup() {
  Serial.begin(9600);
  pinMode(A2,INPUT);
  servo.attach(8);
  servo.write(0);
}

void loop() {
  int soundsensor = digitalRead(A2);
  if ((humsensor()>=60) && (soundsensor == LOW) )
  {
    int startms = millis();
    int currentms = millis();
    while (currentms - startms < 30)
    {
      currentms = millis();
    }
  for (int angle = 0; angle<180; angle++)
    {
      servo.write(angle);
      delay(10);
    }
  }
}