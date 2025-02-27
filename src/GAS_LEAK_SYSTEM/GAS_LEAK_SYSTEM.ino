int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int buzzer = 5;


void setup() {
  pinMode (LED1, OUTPUT); 
  pinMode (LED2, OUTPUT); 
  pinMode (LED3, OUTPUT);
  pinMode (buzzer, OUTPUT);
}

void loop() {

  int sensorValue = analogRead(A5);
  
  if (sensorValue > 300) {
    tone(buzzer, 500);
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED3, LOW);
    delay(100);
  }
  else {
    noTone(buzzer);
  }

  delay(500);

}
