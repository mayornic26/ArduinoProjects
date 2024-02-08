const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin = 13;


int buttonState1= 0;
int buttonState2 = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
 
}

void loop()
{
  buttonState1 = digitalRead(buttonPin1);
  buttonState2= digitalRead(buttonPin2);
                            
    if (buttonState1 == LOW && buttonState2 == HIGH ||  buttonState1 == HIGH && buttonState2 == LOW) {
      digitalWrite(ledPin, LOW);
    }else if (buttonState1 == LOW && buttonState2 == LOW){
      digitalWrite(ledPin, HIGH);
    } else  {
      digitalWrite(ledPin, HIGH);
      delay(1000);
      digitalWrite(ledPin, LOW);
      delay(1000);
    }
}
