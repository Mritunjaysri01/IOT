#include<ESP8266WiFi.h>
#define ssid "Ajofreewifi"
#define pass "password"

void setup() {
Serial.begin(115200);
Serial.println("connecting to");
 Serial.print(ssid);
 WiFi.begin(ssid,pass);
 while(WiFi.status()!=WL_CONNECTED)
 {
  delay(500);
  Serial.print(".");
 }
 Serial.print("WiFi Connected");
 Serial.println(WiFi.localIP());
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
