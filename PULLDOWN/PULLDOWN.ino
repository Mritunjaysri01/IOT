void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data1=digitalRead(2);
  int data2=digitalRead(3);
if(data1==HIGH && data2==LOW)
{
  digitalWrite(13,HIGH);

}

else if(data2==HIGH && data1==LOW)
{
  digitalWrite(12,HIGH);
  }
  else
  {
digitalWrite(12,LOW);
digitalWrite(13,LOW);
}
}
