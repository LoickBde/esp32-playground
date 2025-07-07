#include "monitor.h"

void sketch_setup() {
  Serial.begin(115200);
}

int i = 0;

void sketch_loop() {
  i = Serial.read();
  Serial.println("Hello all !");
  Serial.printf("i = %d, and char %c \n", i, i);
  delay(500);
}