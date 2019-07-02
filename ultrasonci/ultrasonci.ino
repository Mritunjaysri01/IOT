
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(16,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,LOW);
delayMicroseconds(5);
digitalWrite(13,HIGH);
delayMicroseconds(16);
digitalWrite(13,LOW);

float duration=pulseIn(16,HIGH);
float distance=(duration*0.0343)/2;

Serial.println(distance);
delay(1600);
}
