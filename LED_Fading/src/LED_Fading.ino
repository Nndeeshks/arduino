// Assignment 2: LED Fading
// 
// This sketch fades an LED connected to a PWM pin (Pin 9) in a breathing pattern.

const int ledPin = 9;  // The pin that the LED is attached to

void setup() {
  // Initialize the ledPin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Fade in from min to max in increments of 5 points:
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    // Sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // Wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // Fade out from max to min in increments of 5 points:
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    // Sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // Wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}
