// C++ code
//
int led = 11

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{

  for (int brilho = 0; brilho <= 255; brilho++){
    analogWrite(led, brilho);
    delay(20);
  }
  for (int brilho = 255; brilho >= 0; brilho--){
    analogWrite(led, brilho);
    delay(20);
  }
}