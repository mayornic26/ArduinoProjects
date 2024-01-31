  int potPosition;

 void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

  void loop() {
      potPosition = analogRead(0);
  Serial.println(potPosition);
  digitalWrite(13, HIGH);
  delay(potPosition);
  digitalWrite(13, LOW);
  delay(potPosition);
}
