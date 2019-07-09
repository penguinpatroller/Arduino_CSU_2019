/*
 * Tutorial 1: Reading Temperature
 * 
 * Read the temperature in celcius over serial.
 *
 *
 * To see this sketch in action open up the serial
 * monitor. Clamp your fingers over the LM35
 * sensor. The temperature will rise and then fall
 * as you remove your fingers.
 *
 * The circuit:
 * - LM35 to 5v, GND, and Vo to analog 0
 *
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// the output pin of the LM35 temperature sensor
int lm35Pin = A0;

void setup()
{
    // set up serial at 9600 baud   
    Serial.begin(9600);
    pinMode(lm35Pin, INPUT);
}

void loop()
{ 
    int analogValue;
    float temperature;

    // read our temperature sensor
    analogValue = analogRead(lm35Pin);

    // convert the 10bit analog value to celcius
    temperature = float(analogValue) / 1023;

    //LM35 Equation
    temperature = temperature * 500;

    //360Z Equation
    //temperature = (temperature * 100) - 50;

    //Convert temperature to farenheight
    float temperature_f = (temperature * 1.8) + 32;

    // print the temperature over serial
    lcd.clear();
    lcd.print("Temp:");
    lcd.print(temperature_f);
    lcd.print("F");
    
    
    // wait 1s before reading the temperature again
    delay(1000);
}
