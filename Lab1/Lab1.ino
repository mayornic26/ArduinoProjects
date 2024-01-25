//Nico Mayoral
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  //red
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  //green
  digitalWrite(12, HIGH);
  delay(5000);
  digitalWrite(12, LOW);
  //yellow
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(11, LOW);
}
