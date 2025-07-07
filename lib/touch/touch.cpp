#include "touch.h"

void sketch_setup() {
  Serial.begin(115200);
}

int i = 0;

void sketch_loop() {
  i = touchRead(T9);

  Serial.printf("Touch pin value = %d \r", i);
  delay(100);
}