#include <Arduino.h>
#include "Led.h"

Led::Led(int pin, int interval) {
  this->pin = pin;
  this->interval = interval;
}

void Led::setup(int currentTime) {

  pinMode(pin, OUTPUT);

  lastChangeOfState = currentTime;
  digitalWrite(pin, HIGH);
}

void Led::loop(int currentTime) {
  if (currentTime - this->lastChangeOfState > this->interval) {
    this->lastChangeOfState = currentTime;
    bool currentState = digitalRead(this->pin);
    digitalWrite(this->pin, !currentState);
  }
}