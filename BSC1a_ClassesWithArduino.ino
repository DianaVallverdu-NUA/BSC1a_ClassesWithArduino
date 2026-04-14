#include "PiezoPlayer.h"
#include "Led.h"

PiezoPlayer player = PiezoPlayer(7);
Led redLed =  Led(8, 1000);
Led greenLed = Led(9, 500);

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
