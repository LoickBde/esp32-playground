#include "blink.h"

void sketch_setup() {
  Serial.begin(115200);
}

void sketch_loop() {
  Serial.println("Blink from ESP32 !");
}