#include <ESP8266WiFi.h>
#include "ThingSpeak.h"
#include <Arduino.h>

#include "IRremoteESP8266.h"
#include <IRrecv.h>
#include <IRutils.h>

#include "Servo.h"

char ssid[] = "fh_dbe600";
char pass[] = "wlan2419ff";
int keyIndex = 0;
WiFiClient client;

unsigned long myChannelNumber = 2448718;
const char* myWriteAPIKey = "EJS3HL8Z2SOA2HQQ";

IRrecv irrecv(14);

  long int timeStart = 0;
decode_results results;
int irdata;
int irval;
int LEDcount= 0;
int buzzcount = 0;
int servocount = 0;
int thingvalue;
Servo servo;

void setup() {

  irrecv.enableIRIn();  // Initialize serial

  Serial.begin(115200);  // Initialize serial
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for Leonardo native USB port only
  }

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

  pinMode(16, OUTPUT);
  pinMode(5, OUTPUT);
  servo.attach(0);
  servo.write(0);
}


void remote() {
  if (irrecv.decode(&results)) {
    irdata = results.value;
    switch (irdata) {
      case 16724175:
        LEDcount++;
        thingvalue = 1;
        digitalWrite(16, HIGH);
        break;
      case 16718055:
        servocount++;
        thingvalue = 2;
        digitalWrite(16, LOW);
        servo.write(90);
        delay(200);
        servo.write(0);
        delay(200);
        break;
      case 16743045:
        buzzcount++;
        thingvalue = 3;
        playTone(2000, 1000);
        break;
      case 16726215:
        thingvalue = 0;
        digitalWrite(16, LOW);
        servo.write(0);
        break;
    }
    Serial.println(irdata);
    irrecv.resume();
  }
}

void playTone(int frequency, int duration) {
  for (long i = 0; i < duration * 1000L; i += 2 * frequency) {
    digitalWrite(5, HIGH);
    delayMicroseconds(frequency);
    digitalWrite(5, LOW);
    delayMicroseconds(frequency);
  }
}


void loop() {
  if ((millis() - timeStart) >= 15000)
  {
  ThingSpeak.setField(1,thingvalue);
  ThingSpeak.setField(2,LEDcount);
  ThingSpeak.setField(3,servocount);
  ThingSpeak.setField(4,buzzcount);
  
  int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  if (x == 200) {
    Serial.println("Channel update successful.");
  } else {
    Serial.println("Problem updating channel. HTTP error code " + String(x));
  }
  timeStart = millis();
  }
  
  remote();
  delay(300);
}
