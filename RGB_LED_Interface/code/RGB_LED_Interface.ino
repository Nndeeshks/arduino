char command;

// Pin definitions
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  // Set RGB pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Initialize Serial communication
  Serial.begin(9600);
  Serial.println("Enter R/r, G/g, B/b to glow LED, 0 to turn OFF");
}

void loop() {
  // Check if data is available on the Serial port
  if (Serial.available() > 0) {
    command = Serial.read();

    if (command == 'R' || command == 'r') {
      Serial.println("Red LED ON");
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);
    } else if (command == 'G' || command == 'g') {
      Serial.println("Green LED ON");
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, LOW);
    } else if (command == 'B' || command == 'b') {
      Serial.println("Blue LED ON");
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, HIGH);
    } else if (command == '0') {
      Serial.println("All LEDs OFF");
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);
    }
  }
}
