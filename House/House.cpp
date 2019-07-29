#include "House.h"

House::House()
{
  //Initialize sensors

  //Initialize temperature sensor
  temp_sensor.begin();

  //Initialize the LCD screen
  lcd.begin(16,2);
  // Turn on the blacklight
  lcd.backlight();

  //Initialize pir_pin
  pir_pin = 12;
}

float House::get_temp() const
{
  float temp = temp_sensor.readTemperature(true);
  return temp;
}

bool House::detect_motion() const
{
  int pir_val = digitalRead(pir_pin);
  return pir_val;
}

template <typename T>
void House::print(const T &in)
{
  lcd.print(in);
}
