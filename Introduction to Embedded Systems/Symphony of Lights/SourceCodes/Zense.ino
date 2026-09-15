void setup() {
  // put your setup code here, to run once:
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
void fastblink(int pin)
{
  digitalWrite(9,HIGH);
  digitalWrite(pin, HIGH);
  delay(315/4);
  digitalWrite(9,LOW);
  digitalWrite(pin,LOW);
  delay(315/4);
}
void endshigh() {
  digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
}

void endslow() {
  digitalWrite(13, LOW);
  digitalWrite(5, LOW);
}
void backandforth1() {
  digitalWrite(13, HIGH);
  delay(10); 
  digitalWrite(13, LOW);
  delay(10);
  digitalWrite(12, HIGH);
  delay(10);
  digitalWrite(12, LOW);
  delay(10);
  digitalWrite(11, HIGH);
  delay(10);
  digitalWrite(11, LOW);
  delay(10);
  digitalWrite(10, HIGH);
  delay(10);
  digitalWrite(10, LOW);
  delay(10);
  digitalWrite(9, HIGH);
  delay(10);
  digitalWrite(9, LOW);
  delay(10);
  digitalWrite(8, HIGH);
  delay(10);
  digitalWrite(8, LOW);
  delay(10);
  digitalWrite(7, HIGH);
  delay(10);
  digitalWrite(7, LOW);
  delay(10);
  digitalWrite(6, HIGH);
  delay(10);
  digitalWrite(6, LOW);
  delay(10);
  digitalWrite(5, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);

  digitalWrite(5, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(6, HIGH);
  delay(10);
  digitalWrite(6, LOW);
  delay(10);
  digitalWrite(7, HIGH);
  delay(10);
  digitalWrite(7, LOW);
  delay(10);
  digitalWrite(8, HIGH);
  delay(10);
  digitalWrite(8, LOW);
  delay(10);
  digitalWrite(9, HIGH);
  delay(10);
  digitalWrite(9, LOW);
  delay(10);
  digitalWrite(10, HIGH);
  delay(10);
  digitalWrite(10, LOW);
  delay(10);
  digitalWrite(11, HIGH);
  delay(10);
  digitalWrite(11, LOW);
  delay(10);
  digitalWrite(12, HIGH);
  delay(10);
  digitalWrite(12, LOW);
  delay(10);
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  delay(10);
}
void backandforth2() {
  digitalWrite(5, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
  digitalWrite(6, HIGH);
  delay(10);
  digitalWrite(6, LOW);
  delay(10);
  digitalWrite(7, HIGH);
  delay(10);
  digitalWrite(7, LOW);
  delay(10);
  digitalWrite(8, HIGH);
  delay(10);
  digitalWrite(8, LOW);
  delay(10);
  digitalWrite(9, HIGH);
  delay(10);
  digitalWrite(9, LOW);
  delay(10);
  digitalWrite(10, HIGH);
  delay(10);
  digitalWrite(10, LOW);
  delay(10);
  digitalWrite(11, HIGH);
  delay(10);
  digitalWrite(11, LOW);
  delay(10);
  digitalWrite(12, HIGH);
  delay(10);
  digitalWrite(12, LOW);
  delay(10);
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  delay(10);

  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  delay(10);
  digitalWrite(12, HIGH);
  delay(10);
  digitalWrite(12, LOW);
  delay(10);
  digitalWrite(11, HIGH);
  delay(10);
  digitalWrite(11, LOW);
  delay(10);
  digitalWrite(10, HIGH);
  delay(10);
  digitalWrite(10, LOW);
  delay(10);
  digitalWrite(9, HIGH);
  delay(10);
  digitalWrite(9, LOW);
  delay(10);
  digitalWrite(8, HIGH);
  delay(10);
  digitalWrite(8, LOW);
  delay(10);
  digitalWrite(7, HIGH);
  delay(10);
  digitalWrite(7, LOW);
  delay(10);
  digitalWrite(6, HIGH);
  delay(10);
  digitalWrite(6, LOW);
  delay(10);
  digitalWrite(5, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}
void alllow() {
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}
void allhigh() {
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void intro()
{
  for (int k = 0; k < 2; k++) {
    allhigh();
    delay(315 / 4);
    alllow();
    delay(315/8);
    for (int i = 5; i < 13; i++) {
      digitalWrite(i, HIGH);
      digitalWrite(i + 1, HIGH);
      delay(315 / 2);
      digitalWrite(i, LOW);
      digitalWrite(i + 1, LOW);
      delay(315 / 2);
    }
    allhigh();
    delay(315 / 4);
    alllow();
    delay(315/8);
    for (int i = 13; i > 5; i--) {
      digitalWrite(i, HIGH);
      digitalWrite(i - 1, HIGH);
      delay(315 / 2);
      digitalWrite(i, LOW);
      digitalWrite(i - 1, LOW);
      delay(315 / 2);
    }
    allhigh();
    delay(315 / 4);
    alllow();
    delay(315/8);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(315);
    digitalWrite(10, HIGH);
    delay(315);
    digitalWrite(7, HIGH);
    delay(315);
    digitalWrite(11, HIGH);
    delay(315);
    digitalWrite(6, HIGH);
    delay(315);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(315);
    digitalWrite(5, HIGH);
    delay(315);
    alllow();
    if (k==0)
    {
for (int i = 0; i < 2; i++) {
      backandforth2();
      delay(315);
    }
    for (int i = 0; i < 7; i++) {
      allhigh();
      delay(315 / 4);
      alllow();
      delay(315 / 4);
    }
    }
    else
    {
      for (int i = 0; i < 2; i++) {
      backandforth1();
      delay(315);
    }
    allhigh();
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    delay(315);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(315);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    delay(315);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    delay(315);
    }
  }
}

void verse1()
{
for (int k = 0; k <8; k++)
{
  digitalWrite(9, HIGH);  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(315/2);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(315/2);
}
  for (int k = 0; k <8; k++)
{
  digitalWrite(9, HIGH);  
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(315/2);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(315/2);
}
for (int i=0; i<2; i++)
{
fastblink(13);
fastblink(5);
fastblink(12);
fastblink(6);
fastblink(11);
fastblink(7);
fastblink(10);
fastblink(8);
fastblink(8);
fastblink(10);
fastblink(7);
fastblink(11);
fastblink(6);
fastblink(12);
fastblink(5);
fastblink(13);
}

for (int i = 0; i < 8; i++) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(315/2);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(315/2);
  }
for (int i = 0; i < 8; i++) {
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(315/2);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(315/2);
  }
  for (int i=0; i<2; i++)
{
  fastblink(8);
fastblink(10);
fastblink(7);
fastblink(11);
fastblink(6);
fastblink(12);
fastblink(5);
fastblink(13);
fastblink(13);
fastblink(5);
fastblink(12);
fastblink(6);
fastblink(11);
fastblink(7);
fastblink(10);
fastblink(8);
}

for (int i = 0; i < 4; i++) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(315/2);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(315/2);
  }
for (int i = 0; i < 4; i++) {
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(315/2);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(315/2);
  }
  fastblink(8);
fastblink(10);
fastblink(7);
fastblink(11);
fastblink(6);
fastblink(12);
fastblink(5);
fastblink(13);
fastblink(13);
fastblink(5);
fastblink(12);
fastblink(6);
allhigh();
delay(315/4);
alllow();
delay(315/4);
allhigh();
delay(315/4);
alllow();
delay(315/4);
allhigh();
delay(315/4);
alllow();
delay(315/4);
allhigh();
delay(315/4);
alllow();
delay(315/4);
}

void loop() {
  // put your main code here, to run repeatedly:
  intro();
  verse1();
}
