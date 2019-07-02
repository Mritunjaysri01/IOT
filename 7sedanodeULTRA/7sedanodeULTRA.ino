void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(0,OUTPUT);
pinMode(1,INPUT);
  for(int i=2;i<=9;i++)
   {
    pinMode(i,OUTPUT);
   }

}
void disp(int);
void disp(int a)
{
  switch(a)
  {
    case 0: 
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,0);
    digitalWrite(8,1);
    digitalWrite(9,1);
    break;
    case 1:
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    break;
    case 2:
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,1);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,1);
    digitalWrite(8,0);
    digitalWrite(9,1);
    break;
    case 3:
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,0);
    digitalWrite(9,1);
    break;
    case 4:
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,1);
    break;
    case 5:
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,1);
    break;
    case 6:
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,1);
    break;
    case 7:
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    break;
    case 8:
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,1);
    break;
    case 9:
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,1);
    break;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
 
  digitalWrite(0,LOW);
delayMicroseconds(5);
digitalWrite(0,HIGH);
delayMicroseconds(10);
digitalWrite(0,LOW);

float duration=pulseIn(1,HIGH);

int distance=(duration*0.0343)/2;
//disp(distance);
Serial.println(distance);
delay(1000);
}
