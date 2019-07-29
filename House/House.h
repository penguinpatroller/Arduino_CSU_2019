#ifndef HOUSE_H
#define HOUSE_H

#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

class House
{
public:
  House();
  float get_temp() const;
  bool detect_motion() const;

  template <typename T>
  void print(const T &in);


private:
  DHT temp_sensor = DHT(DHTPIN, DHTTYPE);
  LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);
  int pir_pin;
};




#endif
