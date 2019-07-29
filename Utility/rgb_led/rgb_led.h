#ifndef RGB_LED_LIB
#define RGB_LED_LIB

class rgb_led
{
  public:
    rgb_led(const int &r, const int &g, const int &b);
    void glow(const int &r, const int &g, const int &b) const;
    void turn_off() const;

  private:
    const int red_pin;
    const int green_pin;
    const int blue_pin;
};

#endif
