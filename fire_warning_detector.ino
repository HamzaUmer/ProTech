#include <ESP8266WiFi.h>
String apiKey = "NP146R1H3UY0N5B1";                                  
const char* ssid = "AndroidAP";                                  
const char* password = "niteteng";                             
const char* server = "api.thingspeak.com";
const int postingInterval = 20 * 1000; //post data every 20 seconds
const int channelID = 260730;
int sensorPin = A0;    
int enableTMP = 15;   //D8   
int enableMQ2 = 13;    //D7
int PinSignal = 5;
int temperature;  
int sensorThres =0.5;  
WiFiClient client;
void setup() {
 Serial.begin(9600);

pinMode(sensorPin, INPUT);
pinMode(enableTMP, OUTPUT);
pinMode(enableMQ2, INPUT);
pinMode(PinSignal, OUTPUT);

//--------------------------Wifi-------------------------

WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) {
delay(500);
}
Serial.println();
Serial.print("Connecting to ");
Serial.println(ssid);
Serial.print("..........");
Serial.println();
WiFi.begin(ssid, password);
Serial.print(".");

Serial.println("WiFi connected");
Serial.println();

}


void loop() {
//--------------------------TMP36 Sensor-------------------------

double reading = analogRead(sensorPin);

  double voltage= ((reading*3.3)/ 1024);
  double voltage2=voltage;
  temperature= (voltage2*100)-50;
  Serial.println ("Temperature:      ");
  Serial.println(temperature);
  

//--------------------------MQ2 Sensor-------------------------

int SensorReading = 1 - digitalRead(enableMQ2);
Serial.println(SensorReading);
delay(100);
if (temperature > 35 &&  SensorReading > sensorThres) {
   digitalWrite(PinSignal,HIGH);
}
else {
digitalWrite(PinSignal,LOW);    
}      




//--------------------------thingspeak-------------------------

if (client.connect(server,80)) { // "184.106.153.149" or api.thingspeak.com
String postStr = apiKey;
postStr +="&field1=";
postStr += String(temperature);

postStr +="&field2=";
postStr += String(SensorReading);

postStr += "\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n";

client.print("POST /update HTTP/1.1\n");
client.print("Host: api.thingspeak.com\n");
client.print("Connection: close\n");
client.print("X-THINGSPEAKAPIKEY: "+apiKey+"\n");
client.print("Content-Type: application/x-www-form-urlencoded\n");
client.print("Content-Length: ");
client.print(postStr.length());
client.print("\n\n\n\n\n\n\n\n");
client.print(postStr);
}
client.stop();
//delay(postingInterval);
}

