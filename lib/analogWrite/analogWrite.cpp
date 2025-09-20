#include "analogWrite.h"

const uint8_t PIN_PWM = 12;
const uint8_t POT_PIN = 36;


void sketch_setup() {
  Serial.begin(115200);

  pinMode(PIN_PWM, OUTPUT);
  pinMode(POT_PIN, INPUT);
}

float duty_cycle = 0.0;
uint16_t ADC_val = 0;
int pwm_command = 0;

void sketch_loop() {
  ADC_val = analogRead(POT_PIN);
  pwm_command = (ADC_val * 255) / 4095;
  duty_cycle = (float)pwm_command / 255.0 * 100.0;

  // dacWrite(PIN_PWM, pwm_command);
  analogWrite(PIN_PWM, pwm_command);

  Serial.printf("PWM command: %d / Duty cycle: %.2f %% / ADC val: %d \r", pwm_command, duty_cycle, ADC_val);
}