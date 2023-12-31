/******************************************************************************
ISL29125_basics.ino
Simple example for using the ISL29125 RGB sensor library.
Jordan McConnell @ SparkFun Electronics
11 Apr 2014
https://github.com/sparkfun/SparkFun_ISL29125_Breakout_Arduino_Library

This example declares an SFE_ISL29125 object called RGB_sensor. The 
object/sensor is initialized with a basic configuration so that it continuously
samples the light intensity of red, green and blue spectrums. These values are
read from the sensor every 2 seconds and printed to the Serial monitor.

Developed/Tested with:
Arduino Uno
Arduino IDE 1.0.5

Requires:
SparkFun_ISL29125_Arduino_Library

This code is beerware.
Distributed as-is; no warranty is given. 
******************************************************************************/

#include <Wire.h>
#include "SparkFunISL29125.h"

// Declare sensor object
SFE_ISL29125 RGB_sensor;

int red = RGB_sensor.readRed();
int green = RGB_sensor.readGreen();
int blue = RGB_sensor.readBlue();
int testVar = 200;

void setup()
{
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize the ISL29125 with simple configuration so it starts sampling
  if (RGB_sensor.init())
  {
    Serial.println("Sensor Initialization Successful\n\r");
  }
}

// Read sensor values for each color and print them to serial monitor
void loop()
{
  // Read sensor values (16 bit integers)
  
  red = RGB_sensor.readRed();
  green = RGB_sensor.readGreen();
  blue = RGB_sensor.readBlue();
  
  // Print out readings, change HEX to DEC if you prefer decimal output

  Serial.print(testVar);

  Serial.print("Red: "); Serial.print(red); 
  Serial.print("Green: "); Serial.print(green);
  Serial.print("Blue: "); Serial.print(blue);
  Serial.println();
  
  
  Serial.println("Cycle");
  delay(500);
}