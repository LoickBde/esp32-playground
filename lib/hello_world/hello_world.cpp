#include "hello_world.h"

// put function declarations here:
int myFunction(int, int);

void sketch_setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(115200);
}

void sketch_loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello from ESP32 !");
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}