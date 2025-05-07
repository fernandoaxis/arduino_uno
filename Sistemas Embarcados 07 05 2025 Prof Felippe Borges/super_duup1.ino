// C++ code
//
int led = 11;
int ldr = A0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int valor = analogRead(ldr); 
  Serial.println(valor);
  
  valor = map(valor,0,255,0,974);
  
  analogWrite(led, valor);

}