#include "pitches.h"

int piezoPin = 7;

int melody[] = { NOTE_E4, NOTE_G4, NOTE_A4, NOTE_B5, NOTE_C5, NOTE_B5, NOTE_A4, NOTE_FS4, NOTE_D4 };
int durations[] = { 500, 1000, 500, 750, 250, 500, 1000, 500, 750 };

int currentNote = 0;
int lastChangeOfNote;

void setup() {
  lastChangeOfNote = millis();
  tone(piezoPin, melody[currentNote], durations[currentNote]);
}

void loop() {

  int currentTime = millis();

  if (currentTime - lastChangeOfNote >= durations[currentNote]) {
    currentNote++;
    lastChangeOfNote = currentTime;
    if (currentNote >= sizeof(melody) / sizeof(melody[0])) {
      currentNote = 0;
    }
    tone(piezoPin, melody[currentNote], durations[currentNote]);
  }
}
