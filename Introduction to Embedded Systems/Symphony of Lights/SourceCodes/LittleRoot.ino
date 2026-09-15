
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void melodyhigh(int i)
{
  if (i == 13)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
  }
  else if (i == 12)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  }
  else if (i == 11)
  {
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
  }
  else if (i == 10)
  {
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
  }
}
void melodylow(int i)
{
  if (i == 13)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
  }
  else if (i == 12)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  else if (i == 11)
  {
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
  }
  else if (i == 10)
  {
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
}

void melodyhigh2(int i)
{
  if (i == 13)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
  }
  else if (i == 12)
  {
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
  }
  else if (i == 11)
  {
    digitalWrite(13,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(5,HIGH);
  }
  else if (i == 10)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  }
}
void melodylow2(int i)
{
  if (i == 13)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
  }
  else if (i == 12)
  {
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
  }
  else if (i == 11)
  {
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(5,LOW);
  }
  else if (i == 10)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  }
}

void trombone() {
  
    for (int i = 13; i !=9 ; i--) {
      if (i != 10) {
        digitalWrite(i, HIGH);
        melodyhigh(i);
        delay(530);
        digitalWrite(i, LOW);
        melodylow(i);
        delay(280);
        digitalWrite(i, HIGH);
        melodyhigh(i);
        delay(280);
        digitalWrite(i, LOW);
        melodylow(i);
        delay(100);
        digitalWrite(i - 1, HIGH);
        melodyhigh(i);
        delay(280);
        digitalWrite(i - 1, LOW);
        melodylow(i);
        delay(60);
        digitalWrite(i - 1, HIGH);
        melodyhigh(i);
        delay(370);
        digitalWrite(i - 1, LOW);
        melodylow(i);
        delay(290);
        
        
      } 
      else {
        melodyhigh(i);
        digitalWrite(i, HIGH);
        delay(530);
        digitalWrite(i, LOW);
        melodylow(i);
        delay(280);
        melodyhigh(i);
        digitalWrite(i, HIGH);
        delay(265);
        digitalWrite(i, LOW);
        melodylow(i);
        delay(100);
        melodyhigh(i);
        digitalWrite(13, HIGH);
        delay(280);
        digitalWrite(13, LOW);
        delay(60);
        melodyhigh(i);
        digitalWrite(13, HIGH);
        delay(370);
        digitalWrite(13, LOW);
        melodylow(i);
        delay(290);
      }
    }
  
}
void trombone2()
{
  for (int i = 13; i !=9 ; i--) {
      if (i != 10) {
        melodyhigh2(i);
        delay(530);
        melodylow2(i);
        delay(280);
        melodyhigh2(i);
        delay(280);
        melodylow2(i);
        delay(100);
        melodyhigh2(i);
        delay(280);
        melodylow2(i);
        delay(60);
        melodyhigh2(i);
        delay(370);
        melodylow2(i);
        delay(280);
        
        
      } 
      else {
        melodyhigh2(i);
        delay(530);
        melodylow2(i);
        delay(280);
        melodyhigh2(i);
        delay(265);
        melodylow2(i);
        delay(100);
        melodyhigh2(i);
        delay(280);
        delay(60);
        melodyhigh2(i);
        delay(370);
        melodylow2(i);
        delay(280);
      }
    }
}
void prechorus()
{
  digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(150);
digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
delay(150);
digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(500);

    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(600);

    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(150);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(150);

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(150);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(150);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(150);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(150);

    digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
    delay(150);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(150);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(500);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(150);

    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(150);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(150);

    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(150);

    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(150);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(200);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(150);


    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(900);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(400);

digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(300);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(300); 
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(300);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    delay(300); 
    digitalWrite(9,HIGH);
delay(300);

digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(150);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);
digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(150);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);
digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(600);

    digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(150);
digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
delay(150);
digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(900);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(300);

    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(300);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(300); 
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    delay(300);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(300); 
    digitalWrite(9,HIGH);
delay(300);

digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(150);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);
digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(150);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);
digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(150);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);
digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(600);
    
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(150);

    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(150);

    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(150);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(700);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(200);
for (int i=0; i<3; i++)
{
digitalWrite(5,HIGH);
delay(30);
digitalWrite(5,LOW);
delay(30);
digitalWrite(6,HIGH);
delay(30);
digitalWrite(6,LOW);
delay(30);
digitalWrite(7,HIGH);
delay(30);
digitalWrite(7,LOW);
delay(30);
digitalWrite(8,HIGH);
delay(30);
digitalWrite(8,LOW);
delay(30);
digitalWrite(9,HIGH);
delay(30);
digitalWrite(9,LOW);
delay(30);
digitalWrite(10,HIGH);
delay(30);
digitalWrite(10,LOW);
delay(30);
digitalWrite(11,HIGH);
delay(30);
digitalWrite(11,LOW);
delay(30);
digitalWrite(12,HIGH);
delay(30);
digitalWrite(12,LOW);
delay(30);
digitalWrite(13,HIGH);
delay(30);
digitalWrite(13,LOW);
delay(30);


digitalWrite(13,HIGH);
delay(30);
digitalWrite(13,LOW);
delay(30);
digitalWrite(12,HIGH);
delay(30);
digitalWrite(12,LOW);
delay(30);
digitalWrite(11,HIGH);
delay(30);
digitalWrite(11,LOW);
delay(30);
digitalWrite(10,HIGH);
delay(30);
digitalWrite(10,LOW);
delay(30);
digitalWrite(9,HIGH);
delay(30);
digitalWrite(9,LOW);
delay(30);
digitalWrite(8,HIGH);
delay(30);
digitalWrite(8,LOW);
delay(30);
digitalWrite(7,HIGH);
delay(30);
digitalWrite(7,LOW);
delay(30);
digitalWrite(6,HIGH);
delay(30);
digitalWrite(6,LOW);
delay(30);
digitalWrite(5,HIGH);
delay(30);
digitalWrite(5,LOW);
delay(30);
}
delay(50);
}

void loop() {
  for (int i = 12; i > 4; i--) {
    digitalWrite(i, HIGH);
    delay(280);
    digitalWrite(i, LOW);
    delay(280);
  }
  for (int i = 5; i < 13; i++) {
    digitalWrite(i, HIGH);
    delay(280);
    digitalWrite(i, LOW);
    delay(280);
  }
  for (int i = 12; i > 4; i--) {
    digitalWrite(i, HIGH);
    digitalWrite(i - 1, HIGH);
    delay(280);
    digitalWrite(i, LOW);
    digitalWrite(i - 1, LOW);
    delay(280);
  }
  for (int i = 5; i < 13; i++) {
    digitalWrite(i, HIGH);
    digitalWrite(i + 1, HIGH);
    delay(280);
    digitalWrite(i, LOW);
    digitalWrite(i + 1, LOW);
    delay(280);
  }
    trombone();
    trombone2();
    prechorus();
}