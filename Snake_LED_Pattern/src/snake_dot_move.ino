/*
  Snake Pattern LED - Moving Dot Variation
  
  Description:
  This is an alternative pattern where a single "dot" (LED) moves 
  across the line and then bounces back.
  
  Pins Used: 2, 3, 4, 5, 6, 7
*/

int leds[] = {2, 3, 4, 5, 6, 7};
int n = 6;

void setup() {
  for (int i = 0; i < n; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Move forward
  for (int i = 0; i < n; i++) {
    digitalWrite(leds[i], HIGH);
    delay(150);
    digitalWrite(leds[i], LOW); // Turn off immediately to create a moving dot effect
  }

  // Move backward (optional, or just loop forward)
  for (int i = n - 2; i > 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(150);
    digitalWrite(leds[i], LOW);
  }
}
