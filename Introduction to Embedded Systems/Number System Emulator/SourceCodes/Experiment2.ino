#include "SevSeg.h"
#include <IRremote.h>
SevSeg sevseg;
const int RECV_PIN = A5;
IRrecv irrecv(RECV_PIN);
decode_results results;
unsigned long key_value = 0;


void setup()
{
pinMode(A0,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);
pinMode(A4,OUTPUT);
pinMode(8,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);
pinMode(6,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
pinMode(0,INPUT_PULLUP);

irrecv.enableIRIn();
  byte numDigits = 4;
byte digitPins[] = {13,12,LOW,LOW};
byte segmentPins[] = {11, 10, 4, 3, 2, 9, 1, LOW};
bool resistorOnSegments = false;
bool leadingZeros = true;
byte hardwareConfig = COMMON_CATHODE;
sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorOnSegments, 0, 1, 0);
sevseg.setBrightness(150);

}


void allhigh() {
  digitalWrite(A3, 255);
  digitalWrite(A2, 255);
  digitalWrite(A1, 255);
  digitalWrite(A0, 255);
}
void alllow() {
  digitalWrite(A3, 0);
  digitalWrite(A2, 0);
  digitalWrite(A1, 0);
  digitalWrite(A0, 0);
}
int casechecker()
{
  int a;
  if (digitalRead(5) == LOW && digitalRead(7) == HIGH && digitalRead(6) == HIGH && digitalRead(8) == HIGH) 
    return a=0;
  else if (digitalRead(6) == LOW && digitalRead(7) == HIGH && digitalRead(5) == HIGH && digitalRead(8) == HIGH) 
   return a=1;
  else if (digitalRead(7) == LOW && digitalRead(5) == HIGH && digitalRead(6) == HIGH && digitalRead(8) == HIGH) 
  return a=2;
  else if (digitalRead(8) == LOW && digitalRead(7) == HIGH && digitalRead(6) == HIGH && digitalRead(5) == HIGH) 
  return a=3;
  else if (digitalRead(5) == LOW && digitalRead(6) == LOW && digitalRead(7) == HIGH && digitalRead(8) == HIGH) 
  return a=4;
  else if (digitalRead(7) == LOW && digitalRead(6) == LOW && digitalRead(5) == HIGH && digitalRead(8) == HIGH) 
  return a=5;
  else if (digitalRead(7) == LOW && digitalRead(8) == LOW && digitalRead(5) == HIGH && digitalRead(6) == HIGH) 
  return a=6;
  else if (digitalRead(5) == LOW && digitalRead(8) == LOW && digitalRead(7) == HIGH && digitalRead(6) == HIGH) 
  return a = 7;
  else if (digitalRead(6) == LOW && digitalRead(8) == LOW && digitalRead(7) == HIGH && digitalRead(5) == HIGH) 
  return a = 8;
  else if (digitalRead(5) == LOW && digitalRead(7) == LOW && digitalRead(6) == HIGH && digitalRead(8) == HIGH) 
  return a = 9;
  else if (digitalRead(5) == LOW && digitalRead(6) == LOW && digitalRead(7) == LOW && digitalRead(8) == HIGH) 
  return a = 10;
  else if (digitalRead(5) == LOW && digitalRead(6) == LOW && digitalRead(7) == HIGH && digitalRead(8) == LOW) 
  return a = 11;
  else if (digitalRead(5) == LOW && digitalRead(6) == HIGH && digitalRead(7) == LOW && digitalRead(8) == LOW) 
  return a = 12;
  else if (digitalRead(5) == HIGH && digitalRead(6) == LOW && digitalRead(7) == LOW && digitalRead(8) == LOW) 
  return a = 13;
  else if (digitalRead(5) == LOW && digitalRead(6) == LOW && digitalRead(7) == LOW && digitalRead(8) == LOW) 
  return a =14;
  else 
  return a=15;
}

void BitToExcess()
{
sevseg.refreshDisplay();
  alllow();
  digitalWrite(A4, 255);
  delay(500);
  digitalWrite(A4, 0);
  delay(500);
  digitalWrite(A4, 255);
  delay(500);
  digitalWrite(A4, 0);
  delay(500);
  digitalWrite(A4, 255);
  delay(500);
  digitalWrite(A4, 0);
  delay(500);

  int a = casechecker();
  switch(a) {
    //one bit
    case 0:
      {
        while (digitalRead(7) == HIGH && digitalRead(6) == HIGH && digitalRead(8) == HIGH) {
          sevseg.refreshDisplay();sevseg.setNumber(600,1);digitalWrite(A3, 255);
          
        }
      }
      break;
      
    case 1:
      {
        while (digitalRead(7) == HIGH && digitalRead(5) == HIGH && digitalRead(8) == HIGH) {
          digitalWrite(A2, 255);sevseg.refreshDisplay();
          sevseg.setNumber(700,1);
        }
      }
      break;
      
    case 2:
      {
        while (digitalRead(5) == HIGH && digitalRead(6) == HIGH && digitalRead(8) == HIGH) {
          digitalWrite(A1, 255);sevseg.refreshDisplay();
          sevseg.setNumber(900,1);
        }
      }
      break;
      
    case 3:
      {
        while (digitalRead(7) == HIGH && digitalRead(6) == HIGH && digitalRead(5) == HIGH) {
          digitalWrite(A0, 255);sevseg.refreshDisplay();
          sevseg.setNumber(1300,1);
        }
      }
      break;
    //two bits  
    case 4:
      {
        while (digitalRead(7) == HIGH && digitalRead(8) == HIGH) {
          digitalWrite(A2, 255);sevseg.refreshDisplay();
          digitalWrite(A3, 255);
          sevseg.setNumber(800,1);
        }
      }
      break;
      
    case 5:
      {
        while (digitalRead(5) == HIGH && digitalRead(8) == HIGH) {
          digitalWrite(A2, 255);sevseg.refreshDisplay();
          digitalWrite(A1, 255);
          sevseg.setNumber(1100,1);
        }
      }
      break;

    case 6:
      {
        while (digitalRead(5) == HIGH && digitalRead(6) == HIGH) {
          digitalWrite(A0, 255);sevseg.refreshDisplay();
          digitalWrite(A1, 255);
          sevseg.setNumber(1700,1);
        }
      }
      break;

    case 7:
      {
        while (digitalRead(7) == HIGH && digitalRead(6) == HIGH) {
          digitalWrite(A3, 255);sevseg.refreshDisplay();
          digitalWrite(A0, 255);
          sevseg.setNumber(1400,1);
        }
      }
      break;

    case 8:
      {
        while (digitalRead(7) == HIGH && digitalRead(5) == HIGH) {
          digitalWrite(A2, 255);sevseg.refreshDisplay();
          digitalWrite(A0, 255);
          sevseg.setNumber(1500,1);
        }
      }
      break;

    case 9:
      {
        while (digitalRead(6) == HIGH && digitalRead(8) == HIGH) {
          digitalWrite(A3, 255);sevseg.refreshDisplay();
          digitalWrite(A1, 255);
          sevseg.setNumber(1000,1);
        }
      }
      break;
    ///three bits
    case 10:
      {
        while (digitalRead(8) == HIGH) {
          digitalWrite(A3, 255);sevseg.refreshDisplay();
          digitalWrite(A2, 255);
          digitalWrite(A1, 255);
          sevseg.setNumber(1200,1);
        }
      }
      break;

    case 11:
      {
        while (digitalRead(7) == HIGH) {
          digitalWrite(A3, 255);sevseg.refreshDisplay();
          digitalWrite(A2, 255);
          digitalWrite(A0, 255);
          sevseg.setNumber(1600,1);
        }
      }
      break;

    case 12:
      {
        while (digitalRead(6) == HIGH) {
          digitalWrite(A3, 255);sevseg.refreshDisplay();
          digitalWrite(A1, 255);
          digitalWrite(A0, 255);
          sevseg.setNumber(1800,1);
        }
      }
      break;

    case 13:
      {
        while (digitalRead(5) == HIGH) {
          digitalWrite(A2, 255);sevseg.refreshDisplay();
          digitalWrite(A1, 255);
          digitalWrite(A0, 255);
          sevseg.setNumber(1900,1);
        }
      }
      break;
    //four bits
    case 14:
      {
        while (digitalRead(5) == LOW && digitalRead(6) == LOW && digitalRead(7) == LOW && digitalRead(8) == LOW) {
          digitalWrite(A3, 255);sevseg.refreshDisplay();
          digitalWrite(A2, 255);
          digitalWrite(A1, 255);
          digitalWrite(A0, 255);
          sevseg.setNumber(2000,1);
        }
      }
      break;
    
    case 15:
      {
        while (digitalRead(5) == HIGH && digitalRead(6) == HIGH && digitalRead(7) == HIGH && digitalRead(8) == HIGH) {
          alllow();sevseg.refreshDisplay();
          sevseg.setNumber(500,1);
        }
      }
      break;

    default:
      
      break;
  }
}

void DeciToBin()
{
  sevseg.refreshDisplay();
  if (irrecv.decode(&results)){
 
        if (results.value == 0XFFFFFFFF)
          results.value = key_value;

        switch(results.value){
          case 0xFF6897:
          sevseg.setNumber(00,1);
           digitalWrite(A3, 0);
           digitalWrite(A2, 0);
          digitalWrite(A1, 0);
          digitalWrite(A0, 0);
          break;  
          case 0xFF30CF:
          sevseg.setNumber(100);
          digitalWrite(A3, 255);
          digitalWrite(A2, 0);
          digitalWrite(A1, 0);
          digitalWrite(A0, 0);
          break;
          case 0xFF18E7:
          sevseg.setNumber(200,1);
          digitalWrite(A2, 255);
          digitalWrite(A3, 0);
          digitalWrite(A1, 0);
          digitalWrite(A0, 0);
          break;
          case 0xFF7A85:
          sevseg.setNumber(300,1);
          digitalWrite(A3, 255);
          digitalWrite(A2, 255);
          digitalWrite(A1, 0);
          digitalWrite(A0, 0);
          break;
          case 0xFF10EF:
          sevseg.setNumber(400,1);
          digitalWrite(A1, 255);
          digitalWrite(A2, 0);
          digitalWrite(A3, 0);
          digitalWrite(A0, 0);
          break;
          case 0xFF38C7:
          sevseg.setNumber(500,1);
          digitalWrite(A1, 255);
          digitalWrite(A3, 255);
          digitalWrite(A2, 0);
          digitalWrite(A0, 0);
          break;
          case 0xFF5AA5:
          sevseg.setNumber(600,1);
          digitalWrite(A1, 255);
          digitalWrite(A2, 255);
          digitalWrite(A3, 0);
          digitalWrite(A0, 0);
          break;
          case 0xFF42BD:
          sevseg.setNumber(700,1);
          digitalWrite(A1, 255);
          digitalWrite(A2, 255);
          digitalWrite(A3, 255);
          digitalWrite(A0, 0);
          break;
          case 0xFF4AB5:
          sevseg.setNumber(800,1);
          digitalWrite(A0, 255);
          digitalWrite(A2, 0);
          digitalWrite(A3, 0);
          digitalWrite(A1, 0);
          break;
          case 0xFF52AD:
          sevseg.setNumber(900,1);
          digitalWrite(A0, 255);
          digitalWrite(A3, 255);
          digitalWrite(A2, 0);
          digitalWrite(A1, 0);
          break;      
        }
        key_value = results.value;
        irrecv.resume();
  
  }
}
void loop()
{
  while ((digitalRead(5)==HIGH)&&(digitalRead(6)==HIGH)&&(digitalRead(7)==HIGH)&&(digitalRead(8)==HIGH))
  {
  DeciToBin();
  }
  BitToExcess();
}
