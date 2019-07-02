void setup() {
  // put your setup code here, to run once:
int i=12;
for(i;i>7;i--)
{
  pinMode(i,OUTPUT);
}

}

void loop() {
  // put your main code here, to run repeatedly:
int i=12;
for(i;i>7;i--)
{ 
digitalWrite(i,HIGH);
delay(200);
digitalWrite(i,LOW);
}
}
