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
void backandforth3() {
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  delay(50);
  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  delay(50);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite(11, HIGH);
  delay(50);
  digitalWrite(11, LOW);
  delay(50);
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(50);

  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(50);
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);
  digitalWrite(11, HIGH);
  delay(50);
  digitalWrite(11, LOW);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  delay(50);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  delay(50);
  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  delay(50);


}
void backandforth4() {
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  delay(50);
  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  delay(50);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite(11, HIGH);
  delay(50);
  digitalWrite(11, LOW);
  delay(50);
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(50);

  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(50);
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);
  digitalWrite(11, HIGH);
  delay(50);
  digitalWrite(11, LOW);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  delay(50);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  delay(50);
  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  delay(50);
}
void first()
{
  for (int i=0; i<4; i++)
  {
  allhigh();
delay(520/4);
alllow();
delay(520/4);
  }
//first ten ten ten
digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
delay(520);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
delay(520);
allhigh();
delay(520);
alllow();
delay(520);

// second tenen ten ten
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
delay(520/2);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
delay(520/2);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
delay(520/2);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
delay(520/2);
alllow();
delay(520/2);
allhigh();
delay(520/2);
alllow();
delay(520);

//third tenen ten ten
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
delay(520/2);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
delay(520/2);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
delay(520/2);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
delay(520/2);
alllow();
delay(520/2);
allhigh();
delay(520/2);
alllow();
delay(520);

//fourth tenen ten ten
digitalWrite(5,HIGH);
digitalWrite(13,HIGH);
delay(520/2);
digitalWrite(12,HIGH);
digitalWrite(6,HIGH);
delay(520/2);
digitalWrite(11,HIGH);
digitalWrite(7,HIGH);
delay(520/2);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
delay(520/2);
alllow();

//fifth tenen ten ten
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
delay(520/2);
digitalWrite(11,HIGH);
digitalWrite(7,HIGH);
delay(520/2);
digitalWrite(12,HIGH);
digitalWrite(6,HIGH);
delay(520/2);
digitalWrite(5,HIGH);
digitalWrite(13,HIGH);
delay(520/2);
alllow();
delay(520/2);

allhigh();
delay(520/2);
alllow();
delay(520/2);
allhigh();
delay(520/8);
alllow();
delay(520/8);
allhigh();
delay(520/8);
alllow();
delay(520/8);

for (int i=0; i<2; i++)
{
for (int j = 13; j > 9; j--) {
    digitalWrite(j, HIGH);
    delay(520/4);
    digitalWrite(j, LOW);
    delay(520/4);
    digitalWrite(j - 2, HIGH);
    delay(520/4);
    digitalWrite(j - 2, LOW);
    delay(520/4);
  }
  for (int j = 5; j < 9; j++) {
    digitalWrite(j, HIGH);
    delay(520/4);
    digitalWrite(j, LOW);
    delay(520/4);
    digitalWrite(j + 2, HIGH);
    delay(520/4);
    digitalWrite(j + 2, LOW);
    delay(520/4);
  }

}

 digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  delay(6);
  digitalWrite(12, HIGH);
  delay(10);
  digitalWrite(12, LOW);
  delay(6);
  digitalWrite(11, HIGH);
  delay(20);
  digitalWrite(11, LOW);
  delay(6);
  digitalWrite(10, HIGH);
  delay(30);
  digitalWrite(10, LOW);
  delay(6);
  digitalWrite(9, HIGH);
  delay(40);
  digitalWrite(9, LOW);
  delay(6);
  digitalWrite(8, HIGH);
  delay(70);
  digitalWrite(8, LOW);
  delay(6);
  digitalWrite(7, HIGH);
  delay(75);
  digitalWrite(7, LOW);
  delay(6);
  digitalWrite(6, HIGH);
  delay(125);
  digitalWrite(6, LOW);
  delay(6);
  allhigh();
  delay(300);
  alllow();
  delay(6);
}

void second()
{
for (int i = 0; i <2; i++)
  {
for (int light = 0; light < 255; light = light + 10) {
    analogWrite(9, light);
    delay(20);  // Wait for 30 millisecond(s)
  }
  delay(580);
  for (int light = 255; light > 0; light = light - 10) {
    analogWrite(9, light);
    delay(20);  // Wait for 30 millisecond(s)
  }
  delay(580);
  }
digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  delay(6);
  digitalWrite(12, HIGH);
  delay(10);
  digitalWrite(12, LOW);
  delay(6);
  digitalWrite(11, HIGH);
  delay(20);
  digitalWrite(11, LOW);
  delay(6);
  digitalWrite(10, HIGH);
  delay(30);
  digitalWrite(10, LOW);
  delay(6);
  digitalWrite(9, HIGH);
  delay(40);
  digitalWrite(9, LOW);
  delay(6);
  digitalWrite(8, HIGH);
  delay(70);
  digitalWrite(8, LOW);
  delay(6);
  digitalWrite(7, HIGH);
  delay(75);
  digitalWrite(7, LOW);
  delay(6);
  digitalWrite(6, HIGH);
  delay(125);
  digitalWrite(6, LOW);
  delay(6);
  allhigh();
  delay(640);
  alllow();
  delay(120);

  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(320/4);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(320);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(640);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(320);

  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  delay(320/4);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(320);
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  delay(640);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(320);

  digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
  delay(320/2);
  digitalWrite(13, LOW);
  digitalWrite(5, LOW);
  delay(320);
  digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
  delay(640);
  digitalWrite(13, LOW);
  digitalWrite(5, LOW);
  delay(320);
  for (int i = 0; i <2; i++)
  {
for (int light = 0; light < 255; light = light + 10) {
    analogWrite(9, light);
    delay(20);  // Wait for 30 millisecond(s)
  }
  delay(580);
  for (int light = 255; light > 0; light = light - 10) {
    analogWrite(9, light);
    delay(20);  // Wait for 30 millisecond(s)
  }
  delay(640);
  }
backandforth3();
backandforth4();
for (int light = 0; light <= 255; light += 10) {
    analogWrite(13, light);
    analogWrite(12, light);
    analogWrite(11, light);
    analogWrite(10, light);
    analogWrite(9, light);
    analogWrite(8, light);
    analogWrite(7, light);
    analogWrite(6, light);
    analogWrite(5, light);
    delay(30);  // Wait for 30 millisecond(s)
  }
  delay(900);
  for (int light = 255; light >= 0; light -= 10) {
    analogWrite(13, light);
    analogWrite(12, light);
    analogWrite(11, light);
    analogWrite(10, light);
    analogWrite(9, light);
    analogWrite(8, light);
    analogWrite(7, light);
    analogWrite(6, light);
    analogWrite(5, light);
    delay(10);  // Wait for 30 millisecond(s)
  }
}
void loop() {
first();
second();
}
