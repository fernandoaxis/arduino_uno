const int LM35 = A0;
float temperatura;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int leitura = analogRead(LM35);
  temperatura = (leitura * 5.0 / 1024.0) / 0.01;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  delay(1000);

}
