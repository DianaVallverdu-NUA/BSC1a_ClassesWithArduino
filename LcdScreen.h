#include "Arduino.h"
#include "DFRobot_RGBLCD1602.h"

class LcdScreen {

public:

  void setup(int currentTime);

  void loop(int currentTime);

private:
  DFRobot_RGBLCD1602 lcd = DFRobot_RGBLCD1602(/*RGBAddr*/ 0x60, /*lcdCols*/ 16, /*lcdRows*/ 2);  //16 characters and 2 lines of show

  const int colorR = 255;
  const int colorG = 0;
  const int colorB = 0;

  // state
  const int secondsPrintInterval = 100;
  int lastSecondsPrintedAt;
};