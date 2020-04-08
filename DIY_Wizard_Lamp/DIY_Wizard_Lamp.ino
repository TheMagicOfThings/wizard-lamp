#include <Adafruit_NeoPixel.h>

// Arduino pin connected to the NeoPixels?
#define PIN            7

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      5

// Setup the NeoPixel library with the number of pixels, pin and type of pixel
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int sensorPin = 8;         // Arduino pin connected to the Hall effect sensor

int currentState = LOW;      // the current currentState of the output pin
int sensorReading;           // the current reading from the input pin
int previousSate = HIGH;    // the previousSate reading from the input pin

// Variables used for debouncing
long time = 0;         // the last time the output pin was toggled
long debounce = 200;   // delay between readings

//Set the pixel colour
// pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
int r = 0, g = 255, b = 255;

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT_PULLUP);

  //Initialise the NeoPixel
  pixels.begin(); // This initializes the NeoPixel library.
  
}

void loop()
{

  sensorReading = digitalRead(sensorPin); //Get a reading from the sensor

  // if the input changed from HIGH to LOW and we've waited long enough
  // for debouncing, toggle the output pin and record the current time
  if (sensorReading == LOW && previousSate == HIGH && millis() - time > debounce) {
    if (currentState == HIGH)
      currentState = LOW;
    else
      currentState = HIGH;

    time = millis();    
  }

  previousSate = sensorReading;

if (currentState == HIGH) {
    
  //  Set the pixel colour
  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i,r,g,b);
  }
  pixels.show(); 
  }
  if (currentState == LOW) {
   
    for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0)); // Turn pixels off.
    pixels.show(); // Show the selected colour on the pixel
  }
  }
}
