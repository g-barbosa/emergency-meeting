#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>

const char* ssid = "sua rede wifi";
const char* password = "sua senha";
String serverName = "link da sala";

#define D0 16
#define D1 5
int buttonState = 0;

int wifiStatus;
WiFiServer server(80);

void setup() {
  Serial.begin(9600);
  pinMode(D0, OUTPUT);
  pinMode(D1, INPUT_PULLUP);
  delay(200);

  Serial.println();
  Serial.println();
  Serial.println("A ligar a rede");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connectado");
  server.begin();
}

void loop() {
  wifiStatus = WiFi.status();

  if(wifiStatus == WL_CONNECTED) {
   Serial.println(digitalRead(D1));

   if (digitalRead(D1) == 1 && buttonState == 0) {

    buttonState = 1;
    HTTPClient http;
    http.begin(serverName);
    int httpCode = http.GET();
    Serial.println(httpCode);
    http.end();
    delay(1000);

   }
   if (digitalRead(D1) == 0) {

     buttonState = 0;

   }
  }
  
  delay(10);
}