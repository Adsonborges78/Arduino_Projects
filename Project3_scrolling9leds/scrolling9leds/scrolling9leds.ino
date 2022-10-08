// Declaration of variables
int pinLed[9] = {12,11,10,9,8,7,6,5,4};
int numberLed;

void setup() {
  // Set pins to OUTPUT
  
  int x;
  for (x = 0; x <= 8; x++){
    pinMode(pinLed[x], OUTPUT);
  }

}

void loop() {
  // Turn on the leds
  for (numberLed = 0; numberLed <=8; numberLed ++){
    digitalWrite(pinLed[numberLed], HIGH);
    delay(100);
  }
  // Turn off the leds
  for (numberLed = 8; numberLed >=0; numberLed --){
    digitalWrite(pinLed[numberLed], LOW);
    delay(100);
  }

}
