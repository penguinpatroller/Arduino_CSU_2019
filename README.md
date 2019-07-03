# Arduino_CSU_2019

Hello, this is the first commit!

##How to use Library Manager##
This page will reference going to the Library Manager multiple times. To get there, open the Arduino IDE, and go to **Tools > Manage Libraries...**. From here, you can search libraries in the address bar at the top of the pop up window.

##Using LCD##
To use the LCD (Liquid Crystal Display), we need to install a library. This is because our LCD uses I2C, to communicate with our Arduino. This library can be downloaded by searching **Liquid Crystal I2C** in the Arduino's Library Manager. The publishers name should be *Frank de Brabander*. After installing this library, add:
`#include <Wire.h> #include <LiquidCrystal_I2C.h>`
To your code at the top of the file. Then add:
`LiquidCrystal_I2C lcd(0x27, 16, 2);`
Somewhere below. Then you can use your LCD by adding:
`  // initialize the LCD
  lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();`
  To your void setup. To print on the LCD screen, use:
  `lcd.print("your message here!")`

## Using Temperature Sensor ##
We will be using a *DHT-11* temperature sensor for this project. To use it, we will be using a library written by Adafruit, to easily read temperature and humidity values from the sensor. This library can be downloaded by searching **DHT Sensor Library** in the Arduino's Library Manager. The publishers name should be *Adafruit*. After installing this library, add:
`#include "DHT.h"`
Then add:
`#define DHTTYPE DHT11 `
Somewhere below. After this, you must initialize your dht sensor by adding:
`DHT dht(DHTPIN, DHTTYPE);`
In setup, add the line:
`dht.begin();`
After this is done, you are ready to read from your *DHT-11* sensor. you can use the functions:
-dht.readHumidity();
-dht.readTemperature(); //Celsius
-dht.readTemperature(true); //Farenheit

These should be all the functions necessary for this project!
