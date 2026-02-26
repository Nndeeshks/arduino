/*
  Snake Pattern LED - Fill and Unfill
  
  Description:
  This code turns on LEDs one by one in sequence (filling the snake),
  and then turns them off one by one in reverse sequence (unfilling).
  
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
  // Fill the snake (Turn on LEDs one by one)
  for (int i = 0; i < n; i++) {
    digitalWrite(leds[i], HIGH);
    delay(150);
  }

  // Unfill the snake (Turn off LEDs in reverse)
  for (int i = n - 1; i >= 0; i--) {
    digitalWrite(leds[i], LOW);
    delay(150);
  }
}
