  int botao = 4;
  int ledAzul = 12;
  int ledVermelho = 13;

void setup() {

  pinMode(botao, INPUT_PULLUP);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
}

void loop() {
  if (digitalRead(4) == LOW)
  {
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledAzul, LOW);
    delay(2000);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAzul, HIGH);
    delay(2000);
  }
}