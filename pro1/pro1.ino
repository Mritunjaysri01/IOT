#include<LiquidCrystal.h>
//void time(int);

const int rs=9,en=8,d4=13,d5=12,d6=11,d7=10;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int count=0;
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(5,INPUT);
pinMode(4,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
int data1=digitalRead(5);
int data2=digitalRead(4);
if(data1==HIGH)
{
  
  count++;
  
  
}
else if(data2==HIGH)
{
  count--;
 
}

lcd.print(count);

delay(200);
  
//time();
}
//void time()
//{
  //int m=digitalRead(5);
  //while(m==HIGH)
  //{
    
    //lcd.scrollDisplayLeft();
    //delay(150);
//  }


