int i=0;
void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(i<256)
  {analogWrite(11,i);
  delay(500);
  i+=30;
}
if(i==270)
{
  i=0;
}}
