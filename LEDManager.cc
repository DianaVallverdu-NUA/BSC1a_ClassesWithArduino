#include <Arduino.h>
#include "LEDManager.h"

LEDManager::LEDManager(int pin, int interval) {
  this->pin = pin;
  this->interval = interval;
}

void LEDManager::setup(int currentTime) {

  pinMode(pin, OUTPUT);

  lastChangeOfState = currentTime;
  digitalWrite(pin, HIGH);
}

void LEDManager::loop(int currentTime) {
  if (currentTime - this->lastChangeOfState > this->interval) {
    this->lastChangeOfState = currentTime;
    bool currentState = digitalRead(this->pin);
    digitalWrite(this->pin, !currentState);
  }
}