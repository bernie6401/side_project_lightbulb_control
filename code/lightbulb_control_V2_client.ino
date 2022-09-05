#include <ESP8266WiFi.h>
 
//
const char* ssid = "TR-3F";
const char* password = "640110030";
 
WiFiClient client;
 
void setup()
{
  Serial.begin(115200);
 
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println(".");
  }
 
  Serial.println("WiFi connected");
 
  if (client.connect("iot.hoyo.idv.tw", 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    client.println("GET / HTTP/1.0");
    client.println();
 
    String line = client.readStringUntil('\n');
    Serial.println(line);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
