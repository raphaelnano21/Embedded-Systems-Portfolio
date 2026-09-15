
void setup() {
  // initialize the LED pin as an output:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
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
void backandforth() {
  digitalWrite(5, HIGH);
  delay(30);
  digitalWrite(5, LOW);
  delay(30);
  digitalWrite(6, HIGH);
  delay(30);
  digitalWrite(6, LOW);
  delay(30);
  digitalWrite(7, HIGH);
  delay(30);
  digitalWrite(7, LOW);
  delay(30);
  digitalWrite(8, HIGH);
  delay(30);
  digitalWrite(8, LOW);
  delay(30);
  digitalWrite(9, HIGH);
  delay(30);
  digitalWrite(9, LOW);
  delay(30);
  digitalWrite(10, HIGH);
  delay(30);
  digitalWrite(10, LOW);
  delay(30);
  digitalWrite(11, HIGH);
  delay(30);
  digitalWrite(11, LOW);
  delay(30);
  digitalWrite(12, HIGH);
  delay(30);
  digitalWrite(12, LOW);
  delay(30);
  digitalWrite(13, HIGH);
  delay(30);
  digitalWrite(13, LOW);
  delay(30);


  digitalWrite(13, HIGH);
  delay(30);
  digitalWrite(13, LOW);
  delay(30);
  digitalWrite(12, HIGH);
  delay(30);
  digitalWrite(12, LOW);
  delay(30);
  digitalWrite(11, HIGH);
  delay(30);
  digitalWrite(11, LOW);
  delay(30);
  digitalWrite(10, HIGH);
  delay(30);
  digitalWrite(10, LOW);
  delay(30);
  digitalWrite(9, HIGH);
  delay(30);
  digitalWrite(9, LOW);
  delay(30);
  digitalWrite(8, HIGH);
  delay(30);
  digitalWrite(8, LOW);
  delay(30);
  digitalWrite(7, HIGH);
  delay(30);
  digitalWrite(7, LOW);
  delay(30);
  digitalWrite(6, HIGH);
  delay(30);
  digitalWrite(6, LOW);
  delay(30);
  digitalWrite(5, HIGH);
  delay(30);
  digitalWrite(5, LOW);
  delay(30);
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
void rnmfirst()
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

void rnmsecond()
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
void fastblink(int pin)
{
  digitalWrite(9,HIGH);
  digitalWrite(pin, HIGH);
  delay(315/4);
  digitalWrite(9,LOW);
  digitalWrite(pin,LOW);
  delay(315/4);
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

void zenseintro()
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

void zenseverse1()
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

void useintro1() {
  //first dudun
  for (int i = 0; i < 2; i++) {
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(170);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(170);
  }
  delay(340);
  delay(340);
  //second dudun
  for (int i = 0; i < 2; i++) {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(170);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(170);
  }
  delay(340);
  delay(340);

  // third dudun
  for (int i = 0; i < 2; i++) {
    allhigh();
    delay(170);
    alllow();
    delay(170);
  }
  delay(340);
  delay(340);

  for (int i = 0; i < 5; i++) {
    allhigh();
    delay(85);
    alllow();
    delay(85);
  }
  delay(85);
  allhigh();
  delay(170);
  alllow();
  delay(340);
}
void endshigh() {
  digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
}

void endslow() {
  digitalWrite(13, LOW);
  digitalWrite(5, LOW);
}

void useintro2() {
  for (int j = 13; j > 9; j--) {
    endshigh();
    digitalWrite(j - 1, HIGH);
    delay(170);
    endslow();
    digitalWrite(j - 1, LOW);
    delay(170);
    endshigh();
    digitalWrite(j - 3, HIGH);
    delay(170);
    endslow();
    digitalWrite(j - 3, LOW);
    delay(170);
  }

  for (int j = 5; j < 9; j++) {
    endshigh();
    digitalWrite(j + 1, HIGH);
    delay(170);
    endslow();
    digitalWrite(j + 1, LOW);
    delay(170);
    endshigh();
    digitalWrite(j + 3, HIGH);
    delay(170);
    endslow();
    digitalWrite(j + 3, LOW);
    delay(170);
  }
  for (int i = 0; i < 4; i++) {
    endshigh();
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(170);
    endslow();
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(170);
  }
  for (int i = 0; i < 4; i++) {
    endshigh();
    digitalWrite(12, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(170);
    endslow();
    digitalWrite(12, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(170);
  }
  for (int i = 0; i < 2; i++) {
    backandforth();
  }
}
void useverse1() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(170);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    delay(170);
  }
  for (int i = 0; i < 8; i++) {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(170);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(170);
  }
  for (int i = 0; i < 8; i++) {
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    delay(170);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    delay(170);
  }
  for (int i = 0; i < 5; i++) {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(170);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(170);
  }
  delay(170);
  delay(170);
  delay(85);
  for (int i = 0; i < 2; i++) {
    allhigh();
    delay(85);
    alllow();
    delay(85);
  }
}
void useverse2() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    delay(170);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    delay(170);
  }
  for (int i = 0; i < 8; i++) {
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    delay(170);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(170);
  }
  for (int i = 0; i < 8; i++) {
    digitalWrite(11, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(5, HIGH);
    delay(170);
    digitalWrite(11, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    digitalWrite(6, LOW);
    digitalWrite(13, LOW);
    digitalWrite(5, LOW);
    delay(170);
  }
  for (int i = 0; i < 6; i++) {
    allhigh();
    delay(170);
    alllow();
    delay(170);
  }
  backandforth2();
}

void usebridge() {
  delay(170);
  for (int i = 0; i < 2; i++) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      delay(170);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      delay(55);
    }
    for (int i = 0; i < 3; i++) {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      delay(170);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(55);
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      delay(170);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      delay(55);
    }
    for (int i = 0; i < 3; i++) {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(170);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      delay(55);
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      delay(170);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      delay(55);
    }
    for (int i = 0; i < 3; i++) {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      delay(170);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(55);
    }
  }
  digitalWrite(9,HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      delay(200);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      delay(340);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      delay(200);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(340);
for (int i= 0; i<2; i++)
{
digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      delay(200);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      delay(200);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      delay(200);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(200);
}
  for (int i=0; i<5; i++)
  {
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    delay(200);
  } 
  for (int i=0; i<7; i++)
  {
allhigh();
  delay(30);
  alllow();
  delay(30); 
  } 
   
}
void sparkfirst31()
{
  digitalWrite(13,HIGH);
  delay(80);
  digitalWrite(13,LOW);
  delay(80);
  digitalWrite(12,HIGH);
  delay(80);
  digitalWrite(12,LOW);
  delay(80);
  digitalWrite(11,HIGH);
  delay(80);
  digitalWrite(11,LOW);
  delay(80);
}

void sparkfirst32()
{
  digitalWrite(5,HIGH);
  delay(80);
  digitalWrite(5,LOW);
  delay(80);
  digitalWrite(6,HIGH);
  delay(80);
  digitalWrite(6,LOW);
  delay(80);
  digitalWrite(7,HIGH);
  delay(80);
  digitalWrite(7,LOW);
  delay(80);
}

void sparkintro1()
{
  for (int i=5; i<11; i++)
  {
    digitalWrite(i,HIGH);
    for (int j=0; j<2; j++)
    {
  sparkfirst31();
    }
    digitalWrite(i,LOW);
  }
  delay(80);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  for (int j=0; j<2; j++)
    {
  sparkfirst31();
    }
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  for (int j=0; j<2; j++)
    {digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  sparkfirst31();
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
    }
}

void sparkintro2()
{
  for (int i=13; i>7; i--)
  {
    digitalWrite(i,HIGH);
    for (int j=0; j<2; j++)
    {
  sparkfirst32();
    }
    digitalWrite(i,LOW);
  }
  delay(80);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  for (int j=0; j<2; j++)
    {
  sparkfirst32();
    }
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  for (int j=0; j<2; j++)
    {
      digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  sparkfirst32();
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
    }
}

void sparkfirstmelody()
{
  delay(240);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(200);
  
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(80);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(80);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(80);

  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(80);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(80);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  alllow();
  
  for (int i=0; i<2; i++)
  {
  sparkfirst31();
  sparkfirst32();
  }

  delay(300);
}

void sparksecondmelody()
{
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(200);
  
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(80);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(80);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(80);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(200);

  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(60);

  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(480);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(200);

  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(60);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(60);

  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(400);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(60);

  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(60);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(200);
  delay(500);
}

void sparkthirdmelody()
{
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(60);
  allhigh();
  delay(80);
  alllow();
  delay(200);

  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(80);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(80);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(80);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(200);

  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(80);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(80);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  alllow();
}

void sparkbase()
{
  delay(500);
  digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(320);
  alllow();
  delay(120);
}
void lrmelodyhigh(int i)
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
void lrmelodylow(int i)
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

void lrmelodyhigh2(int i)
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
void lrmelodylow2(int i)
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

void lrtrombone() {
  
    for (int i = 13; i !=9 ; i--) {
      if (i != 10) {
        digitalWrite(i, HIGH);
        lrmelodyhigh(i);
        delay(530);
        digitalWrite(i, LOW);
        lrmelodylow(i);
        delay(280);
        digitalWrite(i, HIGH);
        lrmelodyhigh(i);
        delay(280);
        digitalWrite(i, LOW);
        lrmelodylow(i);
        delay(100);
        digitalWrite(i - 1, HIGH);
        lrmelodyhigh(i);
        delay(280);
        digitalWrite(i - 1, LOW);
        lrmelodylow(i);
        delay(60);
        digitalWrite(i - 1, HIGH);
        lrmelodyhigh(i);
        delay(370);
        digitalWrite(i - 1, LOW);
        lrmelodylow(i);
        delay(290);
        
        
      } 
      else {
        lrmelodyhigh(i);
        digitalWrite(i, HIGH);
        delay(530);
        digitalWrite(i, LOW);
        lrmelodylow(i);
        delay(280);
        lrmelodyhigh(i);
        digitalWrite(i, HIGH);
        delay(265);
        digitalWrite(i, LOW);
        lrmelodylow(i);
        delay(100);
        lrmelodyhigh(i);
        digitalWrite(13, HIGH);
        delay(280);
        digitalWrite(13, LOW);
        delay(60);
        lrmelodyhigh(i);
        digitalWrite(13, HIGH);
        delay(370);
        digitalWrite(13, LOW);
        lrmelodylow(i);
        delay(290);
      }
    }
  
}
void lrtrombone2()
{
  for (int i = 13; i !=9 ; i--) {
      if (i != 10) {
        lrmelodyhigh2(i);
        delay(530);
        lrmelodylow2(i);
        delay(280);
        lrmelodyhigh2(i);
        delay(280);
        lrmelodylow2(i);
        delay(100);
        lrmelodyhigh2(i);
        delay(280);
        lrmelodylow2(i);
        delay(60);
        lrmelodyhigh2(i);
        delay(370);
        lrmelodylow2(i);
        delay(280);
        
        
      } 
      else {
        lrmelodyhigh2(i);
        delay(530);
        lrmelodylow2(i);
        delay(280);
        lrmelodyhigh2(i);
        delay(265);
        lrmelodylow2(i);
        delay(100);
        lrmelodyhigh2(i);
        delay(280);
        delay(60);
        lrmelodyhigh2(i);
        delay(370);
        lrmelodylow2(i);
        delay(280);
      }
    }
}
void lrprechorus()
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
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);

  if (digitalRead(1)==LOW && (digitalRead(4)==HIGH))
  {
    while ((digitalRead(2)==HIGH) && (digitalRead(3)==HIGH) && (digitalRead(4)==HIGH))
    {
    rnmfirst();
    rnmsecond();
    }
  }
  else if (digitalRead(2)==LOW)
  {
    while ((digitalRead(1)==HIGH) && (digitalRead(3)==HIGH) && (digitalRead(4)==HIGH))
    {
    zenseintro();
    zenseverse1();
    }
  }
  else if (digitalRead(3)==LOW)
  {
    while ((digitalRead(1)==HIGH) && (digitalRead(2)==HIGH) && (digitalRead(4)==HIGH))
    {
    useintro1();
  useintro2();
  delay(170);
  delay(170);
  useverse1();
  delay(170);
  useverse2();
  usebridge();
    }
  }
  else if (digitalRead(4)==LOW  && (digitalRead(1)==HIGH))
  {
    while ((digitalRead(1)==HIGH) && (digitalRead(2)==HIGH) && (digitalRead(3)==HIGH))
    {
    for (int i = 0; i<8; i++)
  {
    sparkfirst31();
  }
  sparkintro1();
  alllow();
  sparkintro2();
  for (int i=0; i<2; i++)
  {
  sparkfirstmelody();
  sparksecondmelody();
  sparkfirstmelody();
  sparkthirdmelody();
  sparkbase();
  }
  sparkintro1();
  alllow();
  sparkintro2();
  for (int i=0; i<2; i++)
  {
  sparkfirstmelody();
  sparksecondmelody();
  sparkfirstmelody();
  sparkthirdmelody();
  sparkbase();
  }
    }
  }

  else if ((digitalRead(4)==LOW) && (digitalRead(1)==LOW))
  {
    while ((digitalRead(2)==HIGH) && (digitalRead(3)==HIGH))
    {
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
    lrtrombone();
    lrtrombone2();
    lrprechorus();
  }
    }
    
}

