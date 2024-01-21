#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,9,8,7);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.println("Hello, Raspberry!");

  lcd.setCursor(2,1);
  lcd.println("selamat datang");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1); // this speeds up the simulation
}
