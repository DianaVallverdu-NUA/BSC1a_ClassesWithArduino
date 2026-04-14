class LEDManager {
public:
  // constructor
  LedManager(int pin, int interval);

  // setup & loop should be called in the setup & loop sections of the main .ino file
  void setup();
  void loop();

private:
  // generic properties
  int pin;
  int interval;

  // state storage
  int lastChangeOfState;
};