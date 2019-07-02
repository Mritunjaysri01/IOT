#define LDR_pin A0
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(11,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int data=analogRead(A0);
Serial.println(data);
delay(100);
}
