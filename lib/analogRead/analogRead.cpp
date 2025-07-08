#include "analogRead.h"

const uint8_t POT_PIN = A0;
const uint32_t DELAY_100 = 100;
const uint16_t VOUT = 3322;

void sketch_setup() {
  Serial.begin(115200);
  pinMode(POT_PIN, INPUT);
}

uint16_t adcVal = 0;
uint32_t adcMvVal = 0;
uint32_t adcMvCalculatedVal = 0;

void sketch_loop() {
  adcVal = analogRead(POT_PIN);
  Serial.printf("// Adc value : %d //", adcVal);
  
  adcMvVal = analogReadMilliVolts(POT_PIN);
  Serial.printf("// Adc value (mv) : %d //", adcMvVal);

  adcMvCalculatedVal = (adcVal*VOUT) / 4095;
  Serial.printf("// Adc value (calc) : %d // \r", adcMvCalculatedVal);

  delay(DELAY_100);
}