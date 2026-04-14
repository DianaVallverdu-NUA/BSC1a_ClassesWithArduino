#include "PiezoPlayer.h"
#include "LEDManager.h"

PiezoPlayer player = PiezoPlayer(7);
LEDManager redLed =  LEDManager(8, 1000);
LEDManager greenLed = LEDManager(9, 500);

void setup() {

  int currentTime = millis();

  player.setup(currentTime);
  redLed.setup(currentTime);
  greenLed.setup(currentTime);
}

void loop() {

  int currentTime = millis();

  player.loop(currentTime);
  redLed.loop(currentTime);
  greenLed.loop(currentTime);
}
