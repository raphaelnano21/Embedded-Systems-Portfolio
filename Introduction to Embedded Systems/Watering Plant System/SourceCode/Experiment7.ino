#include <LiquidCrystal_I2C.h>
#include <Servo.h>

const int steps = 300;
LiquidCrystal_I2C lcd(0x27, 20, 4);
Servo servo;
const int sensor = A3;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(4, 0);
  lcd.print("WATERING");
  lcd.setCursor(2, 1);
  lcd.print("PLANT SYSTEM");
  delay(5000);
  servo.attach(12);
  servo.write(160);
  lcd.clear();
}

float readMoist() {
  float moist_percent;
  int sens_val;
  sens_val = analogRead(sensor);
  moist_percent = (100 - ((sens_val / 1023.00) * 100));
  Serial.println(moist_percent);
  return moist_percent;
}

void closeHose() {
  servo.write(160);
  delay(10);
}

void openHose() {
  servo.write(100);
  delay(10);
}

void loop() {
  lcd.backlight();
  delay(5000);
  float readVal = readMoist();
  if ((readVal > 20) && (readVal < 40)) {
    lcd.setCursor(0, 0);
    lcd.print("Moisture Content: ");
    lcd.setCursor(5, 1);
    lcd.print(readVal);
    delay(5000);
    lcd.clear();
    lcd.setCursor(5, 1);
    lcd.print("Too Dry");
    openHose();
    delay(3000);
    closeHose();
    delay(100);
  } else if ((readVal > 40) && (readVal < 50)) {
    lcd.setCursor(0, 0);
    lcd.print("Moisture Content");
    lcd.setCursor(5, 1);
    lcd.print(readVal);
    delay(2000);
    lcd.setCursor(2, 1);
    lcd.print("Below Normal");
    openHose();
    delay(3000);
    closeHose();
    delay(100);
  } else if ((readVal > 50) && (readVal < 60)) {
    lcd.setCursor(0, 0);
    lcd.print("Moisture Content");
    lcd.setCursor(5, 1);
    lcd.print(readVal);
    delay(5000);
    lcd.setCursor(5, 1);
    lcd.print("Normal");
    delay(2000);
  } else if ((readVal > 60) && (readVal < 70)) {
    lcd.setCursor(0, 0);
    lcd.print("Moisture Content");
    lcd.setCursor(5, 1);
    lcd.print(readVal);
    delay(5000);
    lcd.setCursor(4, 1);
    lcd.print("Drowning!");
    delay(5000);
  }
  lcd.clear();
}
