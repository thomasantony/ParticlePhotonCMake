#include "Particle.h"

int LED = D1;                         // LED is connected to D1

void setup() {
    // Serial.begin(9600);
    pinMode(LED, OUTPUT);               // sets pin as output
    WiFi.connect();
    waitUntil(WiFi.ready);
}

void loop() {
  digitalWrite(LED, HIGH);          // sets the LED on
  delay(2000);                       // waits for 200mS
  digitalWrite(LED, LOW);           // sets the LED off
  delay(1000);                       // waits for 200mS
  Serial.println("ASSS!!!")
}
