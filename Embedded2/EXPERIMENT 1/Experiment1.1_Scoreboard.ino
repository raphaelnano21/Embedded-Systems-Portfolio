#include "SevSeg.h"

SevSeg sevseg;


unsigned long startms = millis();
unsigned long currentms;
int teamNum = 1;
int k = 0;

void setup() {
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);

  byte numDigits = 4;
  byte digitPins[] = { 13, 12, 11, 10 };
  byte segmentPins[] = { 9, 8, 7, 6, 5, 4, 3, 2 };
  bool resistorOnSegments = false;
  byte hardwareConfig = COMMON_CATHODE;
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins,
               resistorOnSegments, 0, 1, 0);
  sevseg.setBrightness(90);
  sevseg.setNumber(0);
}

void team1() {
  unsigned x = (k / 1000U) % 10;
  unsigned y = (k / 100U) % 10;
  if (digitalRead(A3) == 1) {
    if (digitalRead(A0) == 0) {
      if ((x == 9) && (y == 9)) {
        return;
      } else {
        k = k + 100;

        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else if (digitalRead(A1) == 0) {
      if ((x == 9) && (y == 9)) {
        return;
      } else {
        k = k + 200;

        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else if (digitalRead(A2) == 0) {
      if ((x == 9) && (y == 9)) {
        return;
      } else {
        k = k + 300;

        sevseg.setNumber(k);
      }
      msdelay();
      return;
    }
  } else {

    if (digitalRead(A0) == 0) {
      if ((x == 0) && (y == 0)) {
        return;
      } else {
        k = k - 100;
        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else if (digitalRead(A1) == 0) {
      if ((x == 0) && (y == 0)) {
        return;
      } else {
        k = k - 200;
        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else if (digitalRead(A2) == 0) {
      if ((x == 0) && (y == 0)) {
        return;
      } else {
        k = k - 300;

        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else {
      return;
    }
  }
}

void team2() {
  unsigned a = (k / 10U) % 10;
  unsigned b = (k / 1U) % 10;
  if (digitalRead(A3) == 1) {
    if (digitalRead(A0) == 0) {
      if ((a == 9) && (b == 9)) {
        return;
      } else {
        k = k + 1;

        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else if (digitalRead(A1) == 0) {
      if ((a == 9) && (b == 9)) {
        return;
      } else {
        k = k + 2;

        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else if (digitalRead(A2) == 0) {
      if ((a == 9) && (b == 9)) {
        return;
      } else {
        k = k + 3;

        sevseg.setNumber(k);
      }
      msdelay();
      return;
    }
  } else {

    if (digitalRead(A0) == 0) {
      if ((a == 0) && (b == 0)) {
        return;
      } else {
        k = k - 1;
        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else if (digitalRead(A1) == 0) {
      if ((a == 0) && (b == 0)) {
        return;
      } else {
        k = k - 2;
        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else if (digitalRead(A2) == 0) {
      if ((a == 0) && (b == 0)) {
        return;
      } else {
        k = k - 3;

        sevseg.setNumber(k);
      }
      msdelay();
      return;
    } else {
      return;
    }
  }
}


void adjust(int teamNum) {
  if (teamNum == 1) {
    team1();
  } else if (teamNum == 2) {
    team2();
  }
}

void msdelay() {
  startms = millis();
  currentms = millis();
  while (currentms - startms < 200) {
    currentms = millis();
    sevseg.refreshDisplay();
  }
}

void loop() {
  sevseg.refreshDisplay();
  if (digitalRead(A4) == 0) {
    if (teamNum == 1) {
      teamNum++;
      msdelay();
    } else if (teamNum == 2) {
      teamNum--;
      msdelay();
    }
  }

  adjust(teamNum);
}
