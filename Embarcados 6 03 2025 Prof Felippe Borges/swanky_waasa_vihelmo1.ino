void setup() {
  pinMode(4, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  if (digitalRead(4) == LOW)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(2000);
  }
}