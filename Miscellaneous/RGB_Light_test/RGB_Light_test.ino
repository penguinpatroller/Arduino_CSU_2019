const int red_pin = 2;
const int green_pin = 3;
const int blue_pin = 4;

#include <String.h>

void setup() {
  // put your setup code here, to run once:
  
}

class rgb_light
{
  public:
    rgb_light(int r, int g, int b):
      red(r), green(g), blue(b)
      {
        pinMode(r, OUTPUT);
        pinMode(g, OUTPUT);
        pinMode(b, OUTPUT);
      }

    //Turn on LED to given string color
     void glow(const String &in) const
     {
      if(in == "blue")
      {
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 255);
      }
      else if( in == "red")
      {
        analogWrite(red, 255);
        analogWrite(green, 0);
        analogWrite(blue, 0);
      }
      else if(in == "green")
      {
        analogWrite(red, 0);
        analogWrite(green, 255);
        analogWrite(blue, 0);
      }     
     }

    //Turn on LED to given rgb value
     void glow(const int &r,const int &g, const int &b) const
     {
      analogWrite(red, r);
      analogWrite(green, g);
      analogWrite(blue, blue);
     }

    void off() const
    {
      analogWrite(red, 0);
      analogWrite(green, 0);
      analogWrite(blue, 0);
    }
     
  private:
    //Each of these RGB's hold
    //pins for the red, green, and blue
    //components of the RGB module
    const int red;
    const int green;
    const int blue;
};

void loop() {
  // put your main code here, to run repeatedly:
  rgb_light led_main(2, 3, 4);

  led_main.glow("red");
  delay(500);
  led_main.glow("blue");
  delay(500);
  led_main.glow("green");
  delay(500);

  led_main.glow(100, 100, 100);
  delay(1000);
}
