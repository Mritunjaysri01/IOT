int j=1;
void setup() {
  // put your setup code here, to run once
  pinMode(13,OUTPUT);
  pinMode(1,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int data=digitalRead(1);
  //for(j=1;j>1;)
    
  if(data==HIGH && j%2==0) 
  { 
    
    digitalWrite(13,HIGH);
  }
  else if (data==HIGH && j%2!=0)
  {
    digitalWrite(13,LOW);
  }
if (data==HIGH)


{
  j++;
}

}
