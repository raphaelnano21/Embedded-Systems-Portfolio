
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
void first31()
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

void first32()
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

void intro1()
{
  for (int i=5; i<11; i++)
  {
    digitalWrite(i,HIGH);
    for (int j=0; j<2; j++)
    {
  first31();
    }
    digitalWrite(i,LOW);
  }
  delay(80);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  for (int j=0; j<2; j++)
    {
  first31();
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
  first31();
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
    }
}

void intro2()
{
  for (int i=13; i>7; i--)
  {
    digitalWrite(i,HIGH);
    for (int j=0; j<2; j++)
    {
  first32();
    }
    digitalWrite(i,LOW);
  }
  delay(80);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  for (int j=0; j<2; j++)
    {
  first32();
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
  first32();
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
    }
}

void firstmelody()
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
  first31();
  first32();
  }

  delay(300);
}

void secondmelody()
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

void thirdmelody()
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

void base()
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
void loop() { 
  for (int i = 0; i<8; i++)
  {
    first31();
  }
  intro1();
  alllow();
  intro2();
  for (int i=0; i<2; i++)
  {
  firstmelody();
  secondmelody();
  firstmelody();
  thirdmelody();
  base();
  }
  intro1();
  alllow();
  intro2();
  for (int i=0; i<2; i++)
  {
  firstmelody();
  secondmelody();
  firstmelody();
  thirdmelody();
  base();
  }
}