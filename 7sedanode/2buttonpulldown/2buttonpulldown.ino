void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(3,INPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data1=digitalRead(3);
 // int data2=digitalRead(3);
if(data1==HIGH)
{
  int i=13;
  for(i;i>10;i--)
   { 
    digitalWrite(i,HIGH);
    
   }
}

}


