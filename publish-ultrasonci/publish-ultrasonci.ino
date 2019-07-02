

#include <ESP8266WiFi.h>
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"

/************************* WiFi Access Point *********************************/

#define WLAN_SSID       "(A)ditya"
#define WLAN_PASS       "lolololb"

/************************* Adafruit.io Setup *********************************/

#define AIO_SERVER      "io.adafruit.com"
#define AIO_SERVERPORT  1883                   // use 8883 for SSL
#define AIO_USERNAME    "abhi031099"
#define AIO_KEY         "583746e763304b0cba5ec2a52f5ac722"

/************ Global State (you don't need to change this!) ******************/

// Create an ESP8266 WiFiClient class to connect to the MQTT server.
WiFiClient client;
// or... use WiFiFlientSecure for SSL
//WiFiClientSecure client;

// Setup the MQTT client class by passing in the WiFi client and MQTT server and login details.
Adafruit_MQTT_Client mqtt(&client, AIO_SERVER, AIO_SERVERPORT, AIO_USERNAME, AIO_KEY);

/****************************** Feeds ***************************************/

// Setup a feed called 'photocell' for publishing.
// Notice MQTT paths for AIO follow the form: <username>/feeds/<feedname>
Adafruit_MQTT_Publish hmr = Adafruit_MQTT_Publish(&mqtt, AIO_USERNAME "/feeds/hmr");

// Setup a feed called 'onoff' for subscribing to changes.


// Bug workaround for Arduino 1.6.6, it seems to need a function declaration
// for some reason (only affects ESP8266, likely an arduino-builder bug).
void MQTT_connect();

void setup() {

  Serial.begin(115200);
  pinMode(13,OUTPUT);
pinMode(16,INPUT);
  delay(10);

  Serial.println(F("Adafruit MQTT demo"));

  // Connect to WiFi access point.
  Serial.println(); Serial.println();
  Serial.print("Connecting to ");
  Serial.println(WLAN_SSID);

  WiFi.begin(WLAN_SSID, WLAN_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.println("WiFi connected");
  Serial.println("IP address: "); Serial.println(WiFi.localIP());

  // Setup MQTT subscription for onoff feed.
}


void loop() {
  digitalWrite(13,LOW);
delayMicroseconds(5);
digitalWrite(13,HIGH);
delayMicroseconds(10);
digitalWrite(13,LOW);

float duration=pulseIn(16,HIGH);
float distance=(duration*0.0343)/2;
  
  
  MQTT_connect();
 Serial.print(distance);

  Serial.print("...");
 if(distance<=20&&distance>=0)
{
 hmr.publish("duur hatt bhai (0-20)");
  

}
else if(distance>20&&distance<=70)
{
 hmr.publish("chep hai kya(20-70)");
     


}
else if(distance>70&&distance<=150)
{
 hmr.publish("haan itna duur theek hai (70-150)");
  
}
else 
{
hmr.publish("kaha gaya bhai (INFINITY)");
   
  
  // this is our 'wait for incoming subscription packets' busy subloop
  // try to spend your time here
  
}
delay(5000);

}
void MQTT_connect() {
  int8_t ret;

  // Stop if already connected.
  if (mqtt.connected()) {
    return;
  }

  Serial.print("Connecting to MQTT... ");

  uint8_t retries = 3;
  while ((ret = mqtt.connect()) != 0) { // connect will return 0 for connected
       Serial.println(mqtt.connectErrorString(ret));
       Serial.println("Retrying MQTT connection in 5 seconds...");
       mqtt.disconnect();
       delay(5000);  // wait 5 seconds
       retries--;
       if (retries == 0) {
         // basically die and wait for WDT to reset me
         while (1);
       }
  }
  Serial.println("MQTT Connected!");
}
