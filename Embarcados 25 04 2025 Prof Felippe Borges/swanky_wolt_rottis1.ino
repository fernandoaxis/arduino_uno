// C++ code
//

int led = 12;
int tempoDisparo = 600;
int sensorValue = 0;
int sensor = A0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

  
}

void loop()
  
{
  sensorValue = analogRead(sensor);
  float porcentagem = map(sensorValue,0,1023,0,100);
  
  if (sensorValue < tempoDisparo) {
      digitalWrite(led, HIGH);
  }
  else {
      digitalWrite(led,LOW);
  }
  
  Serial.print ("Leitura atual do sensor: ");
  Serial.print(porcentagem);  
  Serial.println(" %");
  
}