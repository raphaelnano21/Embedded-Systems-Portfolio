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
void backandforth1() {
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
void intro1() {
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

void intro2() {
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
    backandforth1();
  }
}
void verse1() {
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
void verse2() {
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

void bridge() {
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


void loop() {
  intro1();
  intro2();
  delay(170);
  delay(170);
  verse1();
  delay(170);
  verse2();
  bridge();
}
