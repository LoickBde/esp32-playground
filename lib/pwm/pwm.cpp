#include "pwm.h"

const uint8_t PIN_PWM = 12;
const uint8_t PWM_CHANNEL = 0;

const uint32_t frequency = 1000;
const uint8_t resolution = 8;


void sketch_setup() {
  Serial.begin(115200);

  pinMode(PIN_PWM, OUTPUT);

  ledcSetup(PWM_CHANNEL, frequency, resolution);
  ledcAttachPin(PIN_PWM, PWM_CHANNEL);
}

uint32_t pwm_command = 1;


void sketch_loop() {
  for (pwm_command = 0; pwm_command <= 255; pwm_command++) {
    ledcWrite(PWM_CHANNEL, pwm_command);
    delay(10);
    Serial.printf("PWM command: %d / Duty cycle: %.2f %% \r", pwm_command, (float)pwm_command / 255.0 * 100.0);
  }
}