#include "LcdScreen.h"

void LcdScreen::setup(int currentTime) {
  /**
     *  @brief initialize the LCD and master IIC
     */
  lcd.init();

  lcd.setRGB(colorR, colorG, colorB);

  // Print a message to the LCD.
  lcd.print("hello, world!");

  lastSecondsPrintedAt = currentTime;
}

void LcdScreen::loop(int currentTime) {
  if (currentTime - lastSecondsPrintedAt > secondsPrintInterval) {
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    /**
     *  @brief set cursor position
     *  @param col columns optional range 0-15
     *  @param row rows optional range 0-1，0 is the first row, 1 is the second row
     */
    lcd.setCursor(0, 1);
    // print the number of seconds since reset:
    lcd.print(currentTime / 1000);

    lastSecondsPrintedAt = currentTime;
  }
}