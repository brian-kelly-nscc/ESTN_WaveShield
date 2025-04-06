#ifndef ESTN_WAVESHIELD_H
#define ESTN_WAVESHIELD_H

#include <Arduino.h>

class ESTN_WaveShield {
  public:
    ESTN_WaveShield(uint8_t pwmOut = 9);

    void begin();
    void outputSine();
    void outputSquare();
    void outputTriangle();

  private:
    uint8_t _pwmOut;
};

#endif
