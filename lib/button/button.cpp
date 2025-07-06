#include "button.h"

const uint8_t LED_PIN = 2;
const uint32_t BUTTON_PIN = 4;

void sketch_setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLDOWN);
}

int buttonState = 0;

void sketch_loop() {
  buttonState = digitalRead(BUTTON_PIN);

  if(buttonState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}