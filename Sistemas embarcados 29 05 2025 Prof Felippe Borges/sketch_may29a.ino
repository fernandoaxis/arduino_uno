int EN = 6;
int IN1 = 3;
int BOT1 = 9;
int BOT2 = 10;
int SENSOR = A0;

float temperatura = 0;
int valorSensor = 0;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(BOT1, INPUT_PULLUP);
  pinMode(BOT2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {  
  valorSensor = analogRead(SENSOR);
  temperatura = (valorSensor * 5.0 / 1023.0) / 0.01; 

  // CONTROLE DOS BOTÕES
  if (digitalRead(BOT1) == LOW) {
    digitalWrite(IN1, HIGH);
    analogWrite(EN, 255); 
  } else if (digitalRead(BOT2) == LOW) {
    digitalWrite(IN1, HIGH);
    analogWrite(EN, 0);    
  }


  // EXIBE VALORES NO MONITOR SERIAL
  Serial.print("Valor bruto: ");
  Serial.print(valorSensor);
  Serial.print(" | Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");

  delay(500); 
}
