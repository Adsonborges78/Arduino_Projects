int led1 = 13;
int led2 = 12;
int led3 = 7;
int led4 = 2;

int intervalo = 70;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  delay(intervalo);
  digitalWrite(led1, LOW);
  delay(intervalo);

  digitalWrite(led2, HIGH);
  delay(intervalo);
  digitalWrite(led2, LOW);
  delay(intervalo);

  digitalWrite(led3, HIGH);
  delay(intervalo);
  digitalWrite(led3, LOW);
  delay(intervalo);

  digitalWrite(led4, HIGH);
  delay(intervalo);
  digitalWrite(led4, LOW);
  delay(intervalo);

}
