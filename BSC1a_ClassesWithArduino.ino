#include "PiezoPlayer.h"
#include "LEDManager.h"

PiezoPlayer player = PiezoPlayer(7);
LEDManager redLed =  LEDManager(8, 1000);
LEDManager greenLed = LEDManager(9, 500);

void setup() {
  player.setup();
  redLed.setup();
  greenLed.setup();
}

void loop() {
  player.loop();
  redLed.loop();
  greenLed.loop();
}
