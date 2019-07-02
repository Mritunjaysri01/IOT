void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(10,OUTPUT);
pinMode(3,INPUT);
pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int data1=digitalRead(2);
int data2=digitalRead(3);
if(data1==HIGH && data2==LOW)
{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  
}
else if(data2==HIGH && data1==LOW)
{ 
  digitalWrite(12,HIGH);
 digitalWrite(13,LOW);
 
}
else {
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);

}


}
