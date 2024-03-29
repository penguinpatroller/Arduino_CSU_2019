# Arduino_CSU_2019

Hello, we will be using this github page to share code and use as a reference. Hopefully, the instructions on this page should be clear in explaining how to use all the different software we will be using for this program. Let me know if you have any questions!

## How to use Library Manager
This page will reference going to the Library Manager multiple times. To get there, open the Arduino IDE, and go to **Tools > Manage Libraries...**. From here, you can search libraries in the address bar at the top of the pop up window.

![Picture of said process](https://github.com/penguinpatroller/Arduino_CSU_2019/blob/master/Miscellaneous/picture_for_github.png)

## Using LCD
To use the LCD (Liquid Crystal Display), we need to install a library. This is because our LCD uses I2C, to communicate with our Arduino. This library can be downloaded by searching **Liquid Crystal I2C** in the [Arduino's Library Manager](https://github.com/penguinpatroller/Arduino_CSU_2019#how-to-use-library-manager). The publishers name should be *Frank de Brabander*. After installing this library, add:

```
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
```

To your code at the top of the file. Then add this somewhere below, to initialize your lcd object:

`LiquidCrystal_I2C lcd(0x27, 16, 2);`

Then you can use your LCD by adding this to your void setup:

```
// initialize the LCD
lcd.begin();

// Turn on the blacklight and print a message.
lcd.backlight();
```

To print on the LCD screen, use:

  `lcd.print("your message here!")`


## Using Temperature Sensor
We will be using a *DHT-11* temperature sensor for this project. To use it, we will be using a library written by Adafruit, to easily read temperature and humidity values from the sensor. This library can be downloaded by searching **DHT Sensor Library** in the [Arduino's Library Manager](https://github.com/penguinpatroller/Arduino_CSU_2019#how-to-use-library-manager). We will also need another library written by Adafruit called Adafruit Unified Sensor Library. We can find this by searching **Adafruit Unified Sensor**. We then download it using the [Arduino's Library Manager](https://github.com/penguinpatroller/Arduino_CSU_2019#how-to-use-library-manager). The publishers name should be *Adafruit*. After installing this library, add:

`#include "DHT.h"`

Then add:

`#define DHTTYPE DHT11 `

Somewhere below. After this, you must initialize your dht sensor by adding:

`DHT dht(DHTPIN, DHTTYPE);`

In void setup, add the line:

`dht.begin();`

After this is done, you are ready to read from your *DHT-11* sensor. You can use the functions:
* dht.readHumidity();
* dht.readTemperature(); //Return temperature in Celsius as a float
* dht.readTemperature(true); //Return temperature in Fahrenheit as a float

These should be all the functions necessary for this project.
