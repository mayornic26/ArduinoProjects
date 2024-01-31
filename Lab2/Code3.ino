int redLED = 13;
int blueLED = 10;
int greenLED = 9;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  delay(1000);

  digitalWrite(blueLED, HIGH);
  delay(1000);
  digitalWrite(blueLED, LOW);
  delay(1000);

  digitalWrite(greenLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);
  delay(1000);
}
