#include <PS4Controller.h>

void setup() {
  Serial.begin(115200);
  PS4.begin();
  Serial.println("Ready.");
}

void loop() {  
  if (PS4.isConnected()) {
    Serial.printf("Finger1: %d %3d %3d   -   Finger2: %d %3d %3d\n", PS4.Finger1Touching(), PS4.Finger1X(), PS4.Finger1Y(), PS4.Finger2Touching(), PS4.Finger2X(), PS4.Finger2Y());
  }
}