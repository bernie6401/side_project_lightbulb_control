#include <ESP8266WiFi.h>
#include "ESPAsyncWebServer.h"


const char* ssid = "TR-3F";
const char* password = "640110030";

AsyncWebServer server(80);

void setup()
{
  Serial.begin(115200);
  delay(10);

  // prepare GPIO2
  pinMode(2, OUTPUT);
  digitalWrite(2, 0);

  //  WiFi.mode(WIFI_STA);
  WiFi.softAP(ssid, password);
//  while (WiFi.status() != WL_CONNECTED)
//  {
//    delay(500);
//    Serial.println(".");
//  }

  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
//  Serial.println("WiFi connected");
  server.begin();
  Serial.println("Server started");
//  Serial.println(WiFi.localIP()); //print this server allocated network IP
}

void loop()
{

//  //waiting until connected to your Net AP
//  WiFiClient client = server.available();
//  if (!client)  {return;}
//
//  //still waiting until the message from the server passed
//  Serial.println("new client");
//  while (!client.available()) {delay(1);}
//
//  //receive passing message and store as req
//  String req = client.readStringUntil('\r');
//  Serial.println(req);
//  client.flush();
//
//
//  int val;
//  if (req.indexOf("/LED=ON") != -1)
//    val = 1;
//  else if (req.indexOf("/LED=OFF") != -1)
//    val = 0;
//  else
//  {
//    Serial.println("invalid request");
//    client.stop();
//    return;
//  }
//
//  // Set GPIO2 according to the request
//  digitalWrite(2, val);
//  client.flush();
//
//  // Prepare the response
//  //String s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>\r\nGPIO is now ";
//  client.println("HTTP/1.1 200 OK");
//  client.println("Content-Type: text/html");
//  client.println(""); //  do not forget this one
//  client.println("<!DOCTYPE HTML>");
//  client.println("<html>");
//  client.print("Led pin is now: ");
//  if(val == HIGH) {client.print("On");}
//  else {client.print("Off");}
//  client.println("<br><br>");
//  client.println("<a href=\"/LED=ON\"\"><button>Turn On </button></a>");
//  client.println("<a href=\"/LED=OFF\"\"><button>Turn Off </button></a><br />");  
//  client.println("</html>");
//
//  
//  // Send the response to the client
//  //client.print(s);
//  delay(1);
//  Serial.println("Client disonnected");
//
//  // The client will actually be disconnected 
//  // when the function returns and 'client' object is detroyed
}
