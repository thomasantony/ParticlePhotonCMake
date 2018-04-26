#include <stm32f2xx.h>

SYSTEM_MODE(MANUAL);
// This will be either configuration pipeline, or production pipeline.
std::unique_ptr<Pipeline> pipeline;

void setup() {
    WiFi.connect();
    waitUntil(WiFi.ready);
}

void loop() {
    
}
