#include <Arduino.h>
#include "LEDManager.h"

void LEDManager::LEDManager(int pin, int interval) {
  this->pin = pin;
  this->interval = interval;
}

void LEDManager::setup() {

  pinMode(pin, OUTPUT);

  lastChangeOfState = millis();
  digitalWrite(pin, HIGH);
}

void LEDManager::loop() {
  int currentTime = millis();
  if (currentTime - this->lastChangeOfState > this->interval) {
    this->lastChangeOfState = currentTime;
    bool currentState = digitalRead(this->pin);
    digitalWrite(this->pin, !currentState);
  }
}