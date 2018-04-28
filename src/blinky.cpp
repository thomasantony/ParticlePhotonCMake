#include "application.h"
//
SYSTEM_MODE(AUTOMATIC);
//
int LED = D0;                         // LED is connected to D1
#pragma message("ASSSS!")

void setup() {
    Serial.begin(115200);
    pinMode(LED, OUTPUT);               // sets pin as output
    // pinMode(D1, OUTPUT);          // sets the LED on
    // digitalWrite(D1, HIGH);          // sets the LED on
    // WiFi.connect();
    // waitUntil(WiFi.ready);
    // digitalWrite(D1, LOW);          // sets the LED on
}

void loop() {
  if (Particle.connected() == false) {
    Particle.connect();
  }
  digitalWrite(LED, HIGH);          // sets the LED on
  delay(2000);                       // waits for 200mS
  digitalWrite(LED, LOW);           // sets the LED off
  delay(1000);                       // waits for 200mS
  Serial.println("ASSS!!!");
  // delay(1000);
}
