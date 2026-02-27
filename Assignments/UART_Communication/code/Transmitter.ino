// Arduino UART Transmitter
// Sends A when button pressed, B when released

int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600); // Start UART communication at 9600 bps
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    Serial.println('A'); // Send 'A' when button is pressed
  } else {
    Serial.println('B'); // Send 'B' when button is released
  }

  delay(200); // Small delay for stability
}
