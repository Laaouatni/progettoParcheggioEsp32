#include <Arduino.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <WiFi.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  int result = myFunction(10, 3);
  Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}