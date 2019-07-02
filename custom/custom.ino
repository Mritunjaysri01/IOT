#include<LiquidCrystal.h>
const int rs=13,en=12,d4=7,d5=6,d6=5,d7=4,d0=11,d1=10,d2=9,d3=8;
LiquidCrystal lcd(rs,en,d0,d1,d2,d3,d4,d5,d6,d7);
byte customChar[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};
void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
  lcd.createChar(0, customChar);
  lcd.home();
  lcd.print(customChar,byte);
 }

void loop() {
  // put your main code here, to run repeatedly:
 //lcd.clear();


}
