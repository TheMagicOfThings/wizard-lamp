/**************************************************************************
 * Magic Wand Activated Wizard Lamp
 * 
 * Written by The Magic Of Things
 *************************************************************************/


#include <Adafruit_NeoPixel.h>

// Arduino pin connected to the LED strip
#define stripPin            3

// How many LEDs are attached to the Arduino
#define numberOfPixels      5

// Setup the NeoPixel library with the number of pixels, pin and type of pixel
Adafruit_NeoPixel strip = Adafruit_NeoPixel(numberOfPixels, stripPin, NEO_GRB + NEO_KHZ800);

int sensorPin = 8;             // Arduino pin connected to the Hall effect sensor
int currentState = HIGH;        // the current state of the output pin
int sensorReading;             // reading from the sensor pin
int previousSate = LOW;       // the previousSate reading from the input pin

// Variables used for debouncing
long time = 0;         // the last time the output pin was toggled
long debounce = 100;   // delay between readings

//Set the pixel colour
// strip.Color takes RGB values, from 0,0,0 up to 255,255,255
int r = 180, g = 255, b = 255;

void setup()
{
  //Initialise the sensor pin as an input with a pullup resistor
  pinMode(sensorPin, INPUT_PULLUP);
  //Initialise the led strip
  strip.begin(); 
}


//Main program loop
void loop(){

//Turn the light ON 
if (currentState == HIGH) {
  singleColor();
}

//Turn the light OFF
  if (currentState == LOW) {
    turnOff();
  }

  // Function that checks a wand tap and it will toggle the lamp on/off with every tap
  checkState(); 
}

//Single colour animation
void singleColor(){
  for(int i=0; i<numberOfPixels; i++) {
    strip.setPixelColor(i,r,g,b);
  }
  strip.show(); 
  }


//Function to turnoff the led strip
void turnOff(){
  for(int i=0;i<numberOfPixels;i++){
    strip.setPixelColor(i, strip.Color(0,0,0)); // Turn pixels off.
    strip.show(); // Show the selected colour on the pixel
  }
}

// Function that checks a wand tap and it will toggle the lamp on/off with every tap
void checkState(){
  sensorReading = digitalRead(sensorPin); //Get a reading from the sensor

  // if the input changed between HIGH and LOW and we've waited long enough
  // for debouncing, toggle the output pin and record the current time
  if (sensorReading == LOW && previousSate == HIGH && millis() - time > debounce) {
    if (currentState == HIGH)
      currentState = LOW;
    else
      currentState = HIGH;

    time = millis();    
}

  previousSate = sensorReading;
  }
