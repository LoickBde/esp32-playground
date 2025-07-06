#include "blink.h"

const uint8_t LED_PIN = 2;
const uint32_t DELAY_500 = 500;

void sketch_setup() {
  pinMode(LED_PIN, OUTPUT);
}

void sketch_loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(DELAY_500);
  digitalWrite(LED_PIN, LOW);
  delay(DELAY_500);
}