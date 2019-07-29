#include "rgb_led.h"

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#include "pins_arduino.h"
#endif

//This class describes code for the rgb_led
rgb_led::rgb_led(const int &r, const int &g, const int &b)
  : red_pin(r), green_pin(g), blue_pin(b)
  {
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b, OUTPUT);
  }

  //Used to set color of led
  void rgb_led::glow(const int &r, const int &g, const int &b) const
  {
    analogWrite(red_pin, r);
    analogWrite(green_pin, g);
    analogWrite(blue_pin, b);
  }

  //Used to turn off led
  void rgb_led::turn_off()const
  {
    glow(0,0,0);
  }
