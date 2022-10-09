// Declaration of variables
int sensorPin = A0; // Potentiometer input pin
int ledPin = 13; // LED pin
int sensorValue = 0; // variable to store the value of the potentiometer

void setup() {
  // Declaration LED pin as output
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // Read the value of the potentiometer
  sensorValue = analogRead(sensorPin);
  // turn on the LED
  digitalWrite(ledPin, HIGH);
  // Stops the program according to the value read on the potentiometer
  delay(sensorValue);
  // turn off the LED
  digitalWrite(ledPin, LOW);
  // Stops the program according to the value read on the potentiometer
  delay(sensorValue);

}
