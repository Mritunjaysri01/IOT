void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
delay(10);

digitalWrite(6,HIGH);
digitalWrite(5,LOW);
delay(10);
}
