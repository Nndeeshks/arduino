// Arduino UART Receiver
// Receives A to turn LED ON, B to turn LED OFF

int ledPin = 7;
char data;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Start UART communication at 9600 bps
}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.read(); // Read the incoming character

    if (data == 'A') {
      digitalWrite(ledPin, HIGH); // Turn ON LED
    } else if (data == 'B') {
      digitalWrite(ledPin, LOW); // Turn OFF LED
    }
  }
}
