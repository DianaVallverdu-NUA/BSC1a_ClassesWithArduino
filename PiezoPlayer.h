#include "pitches.h"

class PiezoPlayer {

public:
  // setup & loop should be called in the setup & loop sections of the main .ino file
  void setup();
  void loop();

private:

  // basic properties
  int pin = 7;

  // meoldy & durations
  int melody[10] = { NOTE_E4, NOTE_G4, NOTE_A4, NOTE_B5, NOTE_C5, NOTE_B5, NOTE_A4, NOTE_FS4, NOTE_D4 };
  int durations[10] = { 500, 1000, 500, 750, 250, 500, 1000, 500, 750 };

  // state storage
  int currentNote = 0;
  int lastChangeOfNote;
};