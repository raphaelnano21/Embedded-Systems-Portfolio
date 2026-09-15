#include <Keypad.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

const int PW_len = 7;

int signalPin = 12;
char userIn[PW_len];
char mainPW[PW_len] = "547421";
byte dataNum = 0;

char customKey;
char add;
const byte ROWS = 4;
const byte COLS = 4;
int i = 20;
char hexaKeys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

byte rowPins[ROWS] = { 9, 8, 7, 6 };
byte colPins[COLS] = { 10, 11, 12, 13 };

Keypad kp = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo servo;

void setup() {
  Serial.begin(9600);
  pinMode(signalPin, OUTPUT);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("REAL-TIME");
  lcd.setCursor(2, 1);
  lcd.print("VAULT SYSTEM");
  delay(3000);
  lcd.clear();

  servo.attach(3);
  servo.write(180);
}

void clearData() {
  while (dataNum != 0) {
    userIn[dataNum] = 0;
    dataNum--;
  }
  userIn[dataNum]=0;
  dataNum = 0;
  i = 20;
  return;
}

void msdelay(int delNum) {
  int startms = millis();
  int currentms = millis();
  int addFlag = 0;
  while (currentms - startms < delNum) {
    currentms = millis();
    add = kp.getKey();
    if ((add == '*') && (addFlag == 0)) {
      i = i + 11;
      addFlag = 1;
    }
  }
}

void loop() {
  lcd.setCursor(1, 0);
  lcd.print("Enter Password:");
  customKey = kp.getKey();
  if (customKey) {
    if (dataNum != PW_len) {
      userIn[dataNum] = customKey;
      lcd.setCursor(dataNum, 1);
      lcd.print(userIn[dataNum]);
      dataNum++;
    }
  }
  if (userIn[dataNum - 1] == '#') {
    lcd.clear();
    dataNum--;
    userIn[dataNum] = 0;
    if (!strcmp(userIn, mainPW)) {
      lcd.setCursor(4, 0);
      lcd.print("Unlocked!");
      servo.write(0);
      digitalWrite(signalPin, HIGH);
      while (i > 0) {
        lcd.setCursor(4, 0);
        lcd.print("Unlocked!");
        if (i < 10) {
          lcd.setCursor(4, 1);
          lcd.print("Timer: ");
          lcd.setCursor(11, 1);
          lcd.print("0");
          lcd.print(i);
          msdelay(1000);
          lcd.clear();
        } else {
          lcd.setCursor(4, 1);
          lcd.print("Timer: ");
          lcd.print(i);
          msdelay(1000);
          lcd.clear();
        }
        i--;
      }
      digitalWrite(signalPin, LOW);
      servo.write(180);
    } else {
      lcd.setCursor(3, 0);
      lcd.print("Incorrect!");
      delay(2000);
    }
    lcd.clear();
  clearData();
  }

}