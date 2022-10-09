// Declaring the variables
int ledPin = 11;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  // Declaring pin 9 as output
  pinMode(ledPin, OUTPUT);


}

void loop() {
  // Indicates LED brightness on pin 9 using PWM
  analogWrite(ledPin, brightness);

  // Change brightness with each loop iteration
  brightness = brightness + fadeAmount;

  // Invert the fade
  if (brightness <= 0 || brightness >= 255){
    fadeAmount = -fadeAmount;
  }
  // Wait 30 milliseconds
  delay(30);

}
