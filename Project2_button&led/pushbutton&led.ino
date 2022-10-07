// Constant variables that will not change
const int buttonPin = 2; // pushbutton pin
const int ledPin = 13; // led pin

// Normal variables that will change
int buttonState = 0; // Pushbutton status (0 = off)

void setup() {
  // Initialize LED pin to OUTPUT
  pinMode(ledPin, OUTPUT);

  // Initialize Pushbutton as INPUT
  pinMode(buttonPin, INPUT);

}

void loop() {
  // Read pushbutton status
  buttonState = digitalRead(buttonPin);

  // Check if the Pushbutton was pressed
  // If pressed, the buttonState variable changes to HIGH

  if (buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
  } else {
    // turn off the LED
    digitalWrite(ledPin, LOW);

  }


}
