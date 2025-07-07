#include "blink_millis.h"

const uint8_t LED_PIN = 2;
const uint32_t INTERVAL = 500;

void sketch_setup() {
  pinMode(LED_PIN, OUTPUT);
}

bool ledState = LOW;
unsigned long tempo = 0;

void sketch_loop() {
  if(millis() >= INTERVAL + tempo) {
    tempo = millis();
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
  }
}