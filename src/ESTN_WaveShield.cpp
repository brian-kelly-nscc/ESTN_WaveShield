#include "ESTN_WaveShield.h"

ESTN_WaveShield::ESTN_WaveShield(uint8_t pwmOut)
  : _pwmOut(pwmOut) {}

void ESTN_WaveShield::begin() {
  pinMode(_pwmOut, OUTPUT);
}

void ESTN_WaveShield::outputSine() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(_pwmOut, constrain(i, 30, 210));
    delayMicroseconds(78);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(_pwmOut, constrain(i, 30, 210));
    delayMicroseconds(78);
  }
}

void ESTN_WaveShield::outputTriangle() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(_pwmOut, i);
    delayMicroseconds(160);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(_pwmOut, i);
    delayMicroseconds(160);
  }
}

void ESTN_WaveShield::outputSquare() {
  analogWrite(_pwmOut, 255);
  delayMicroseconds(100);
  analogWrite(_pwmOut, 220);
  delay(39);

  analogWrite(_pwmOut, 0);
  delayMicroseconds(100);
  analogWrite(_pwmOut, 30);
  delay(39);
}
