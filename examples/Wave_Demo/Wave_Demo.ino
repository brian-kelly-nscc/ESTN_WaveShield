#include <ESTN_WaveShield.h>

ESTN_WaveShield wave;

void setup() {
  wave.begin();
}

void loop() {
  wave.outputSine();
  wave.outputTriangle();
  wave.outputSquare();
}
