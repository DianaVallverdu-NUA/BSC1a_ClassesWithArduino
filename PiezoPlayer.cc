#include <Arduino.h>
#include "PiezoPlayer.h"

PiezoPlayer::PiezoPlayer(int pin){
  this-> pin = pin;
}

// start playing first note & store first timer
void PiezoPlayer::setup() {
  lastChangeOfNote = millis();
  tone(pin, melody[currentNote], durations[currentNote]);
}

// check if next node should be played
// yes -> play it & update current note info
// no -> do nothing
void PiezoPlayer::loop() {
  int currentTime = millis();

  if (currentTime - lastChangeOfNote >= durations[currentNote]) {
    currentNote++;
    lastChangeOfNote = currentTime;
    if (currentNote >= sizeof(melody) / sizeof(melody[0])) {
      currentNote = 0;
    }
    tone(pin, melody[currentNote], durations[currentNote]);
  }
}