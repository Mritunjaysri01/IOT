#include<DHT.h>
#define dht_pin 5
#define dht_type DHT11
DHT dht(dht_pin,dht_type);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
dht.begin();
pinMode(dht_pin,INPUT);
pinMode(6,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int q=digitalRead(6);
  if(q==HIGH)
  {
    float data1=dht.readTemperature();
    float data2=dht.readHumidity();
    Serial.print("temp:");
    Serial.print(data1);
    Serial.print("\thumidity:");
    Serial.print(data2);
     Serial.println();
    
  }
  delay(1000);

}
