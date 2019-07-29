//This class describes code for the rgb_led
class rgb_led
{
  public:
    rgb_led(const int &r, const int &g, const int &b) 
    : red_pin(r), green_pin(g), blue_pin(b)
    {
      Serial.println("constructor");
      pinMode(r, OUTPUT);
      pinMode(g, OUTPUT);
      pinMode(b, OUTPUT);
    }
    
    void glow(const int &r, const int &g, const int &b) const
    {
      analogWrite(red_pin, r);
      analogWrite(green_pin, g);
      analogWrite(blue_pin, b);
    }

    void turn_off()const
    {
      glow(0,0,0);
    }

  private:
    const int red_pin;
    const int green_pin;
    const int blue_pin;

};
