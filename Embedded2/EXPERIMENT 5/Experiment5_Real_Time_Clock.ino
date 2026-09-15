#include <SevSeg.h>
#include <LiquidCrystal_I2C.h>

SevSeg sevseg;
LiquidCrystal_I2C lcd(0x27, 20, 4);


unsigned long startms = millis();
unsigned long currentms;
int dispnum = 0;
int timenum = 0;
int numarray[720];
int time;
int a = 0;
int wantedNum = 100;
int wantedI;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("REAL-TIME");
  lcd.setCursor(5, 1);
  lcd.print("CLOCK");
  delay(5000);

  pinMode(2, INPUT);
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);

  byte numDigits = 4;
  byte digitPins[] = { 13, 12, 11, 10 };
  byte segmentPins[] = { 9, 8, 7, 6, 5, 4, 3, 2 };
  bool resistorOnSegments = false;
  byte hardwareConfig = COMMON_CATHODE;
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorOnSegments, 0, 1, 0);
  sevseg.setBrightness(90);
}

void numarrgen() {
  int hrs;
  int minutes;
  for (int i = 1; i < 13; i++) {
    hrs = i;
    for (int k = 0; k < 60; k++) {
      minutes = k;
      numarray[timenum] = ((hrs * 100) + minutes);
      timenum++;
    }
  }
}

int adjust(int i) {
  int k = i;

  while (digitalRead(2) == LOW) {
    sevseg.setNumber(k);
    sevseg.refreshDisplay();
    currentms = millis();
    startms = millis();
    if (digitalRead(A2) == LOW) {
      unsigned x = (k / 10U) % 10;
      unsigned y = (k / 1U) % 10;
      if ((x == 5) && (y == 9)) {
        k = k - 59;
      } else {
        k = k + 1;
      }

      while (currentms - startms < 300) {
        currentms = millis();
        sevseg.setNumber(k);
        sevseg.refreshDisplay();
      }
    } else if (digitalRead(A0) == LOW) {
      if (k >= 1200) {
        k = k - 1100;
      } else {
        k = k + 100;
      }

      while (currentms - startms < 300) {
        currentms = millis();
        sevseg.setNumber(k);
        sevseg.refreshDisplay();
      }
    }

    else if (digitalRead(A3) == LOW) {
      unsigned x = (k / 10U) % 10;
      unsigned y = (k / 1U) % 10;
      if ((x == 0) && (y == 0)) {
        k = k + 59;
      } else {
        k = k - 1;
      }

      while (currentms - startms < 300) {
        currentms = millis();
        sevseg.setNumber(k);
        sevseg.refreshDisplay();
      }
    } else if (digitalRead(A1) == LOW) {
      if (k < 200) {
        k = k + 1100;
      } else {
        k = k - 100;
      }

      while (currentms - startms < 300) {
        currentms = millis();
        sevseg.setNumber(k);
        sevseg.refreshDisplay();
      }
    }
  }
  return k;
}
void msdelay(int delNum) {
  currentms = millis();
  startms = millis();
  while (currentms - startms < delNum) {
    currentms = millis();
    sevseg.refreshDisplay();
  }
}
void loop() {
  lcd.clear();
  numarrgen();
  lcd.setCursor(0, 1);
  lcd.print("REAL-TIME CLOCK");
  int i = 0;
  int sec = 0;
  while (i < 721) {
    sec++;
    if (sec == 60)
    {
      sec = 0;
      i++;
    }
    dispnum = numarray[i];
    sevseg.setNumber(dispnum);
    sevseg.refreshDisplay();
    wantedNum = dispnum;
    while (digitalRead(2) == LOW) {
      wantedNum = adjust(dispnum);
      for (int j = 0; j < 721; j++) {
        if (wantedNum == numarray[j]) {
          i = j;
          break;
        }
      }
    }
    if (sec < 10) {
      lcd.setCursor(6, 0);
      lcd.print("0");
      lcd.print(sec);
    } else {
      lcd.setCursor(6, 0);
      lcd.print(sec);
    }
    msdelay(1000);
    }
}
