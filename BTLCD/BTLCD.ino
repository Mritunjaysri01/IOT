#include<SoftwareSerial.h>
#include<LiquidCrystal.h>
int s=0;
const int rs=13,en=12,d4=7,d5=6,d6=5,d7=4;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
SoftwareSerial bt(0,1);
void setup() {
  // put your setup code here, to run once:
bt.begin(9600);
lcd.begin(16,2);
Serial.begin(9600);
//pinMode(7,OUTPUT);
//pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 // lcd.clear();
  //lcd.write("haha");
 char data;
 int l;
if (bt.available()>0)
{

  data=bt.read();
  Serial.print(data);
  lcd.write(data);
  delay(1000);
  l=1;
}
else
{
  l=0;
}

if(s==1&&l==0)
{
  lcd.write(" ");
}
if(data=='@')
{
  lcd.clear();
}

  s=l;
}





