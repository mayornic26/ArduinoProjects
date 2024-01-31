//Nico Mayoral
//1/31/23
//Uses Potentionmeter to change the speed in which the LED is flashing at
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
