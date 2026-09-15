
#include <ESP8266WiFi.h>
#include "secrets.h"
#include "ThingSpeak.h" 

char ssid[] = "fh_dbe600";   
char pass[] = "wlan2419ff";   
int keyIndex = 0;           
WiFiClient  client;

unsigned long myChannelNumber = 2442619;
const char * myWriteAPIKey = "L5151GMFH32WN7YV";

int number = 0;
int light;

void setup() {
  Serial.begin(115200);  // Initialize serial
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo native USB port only
  }
  
  WiFi.mode(WIFI_STA); 
  ThingSpeak.begin(client);

  pinMode(16,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(15,OUTPUT);
  pinMode(A0,INPUT);

}

void loop() {

  
  if(WiFi.status() != WL_CONNECTED){
    Serial.print("Attempting to connect to SSID: ");
    Serial.println("fh_dbe600");
    while(WiFi.status() != WL_CONNECTED){
      WiFi.begin(ssid, pass);  
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nConnected.");
  }
  
  light = analogRead(A0);
if ((light>0) && (light<=700))
  {
    digitalWrite(15,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(0,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(16,HIGH);

  }
  else if ((650< light) && (light<=750)) {
    digitalWrite(15,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(0,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(16,LOW);
  }
  else if ((750< light) && (light <=850)) {
    digitalWrite(15,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(0,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(16,LOW);
  }
  else if ((850< light) &&(light<=900)) {
    digitalWrite(15,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,LOW);
    digitalWrite(2,LOW);
    digitalWrite(0,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(16,LOW);
      }
  else if ((900<light)&&(light<=1000)) {
    
    digitalWrite(15,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(14,LOW);
    digitalWrite(2,LOW);
    digitalWrite(0,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(16,LOW);
  }
  else {
    digitalWrite(15,LOW);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(14,LOW);
    digitalWrite(2,LOW);
    digitalWrite(0,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(16,LOW);
  }
  
  int x = ThingSpeak.writeField(myChannelNumber, 1, light, myWriteAPIKey);
  if(x == 200){
    Serial.println("Channel update successful.");
  }
  else{
    Serial.println("Problem updating channel. HTTP error code " + String(x));
  }

  
  delay(60000); 
}
