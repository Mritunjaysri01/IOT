#include<SoftwareSerial.h>
SoftwareSerial bt(2,3);
void setup() {
  // put your setup code here, to run once:
bt.begin(9600);
Serial.begin(9600);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
//pehli mototr
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
//pinMode(10,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
 char data;
if (bt.available()>0)
{
  data=bt.read();
  Serial.println(data);

  switch(data)
  {
  case '1':
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  break;
  case '2':
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  break;
  case '3':
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  break;
  case '4':
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  break;
  default :
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  }



}
}




