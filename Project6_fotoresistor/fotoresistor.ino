// CONSTANT VARIABLES
const int sensorPin = 0;
const int ledPin = 9;

// STANDART VARIABLES
int lightLevel;
int calibratedlightLevel;
int maxThreshold = 0; 
int minThreshold = 1023; 

void setup() { 
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);

}

void loop() {
  lightLevel = analogRead(sensorPin);
  Serial.print(lightLevel);

  calibratedlightLevel = map(lightLevel, 0, 1023, 0, 255);
  Serial.print("\t"); 
  Serial.print(calibratedlightLevel);
  
  analogWrite(ledPin, calibratedlightLevel);

}

void autoRange(){
  if (lightLevel < minThreshold){
    minThreshold = lightLevel;
  }
  
  if (lightLevel > maxThreshold){
    maxThreshold = lightLevel;

    lightLevel = map(lightLevel, minThreshold, maxThreshold, 0, 255);
    lightLevel = constrain(lightLevel, 0, 255);
  }
}

