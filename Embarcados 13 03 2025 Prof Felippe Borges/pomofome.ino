bool ledLigado = false;

void setup() {
  pinMode(4, INPUT_PULLUP);
  pinMode(12, OUTPUT);
}

void loop() {
 if((ledLigado == false) && (digitalRead(4) == LOW))
 {
 	ledLigado = true;
   	delay(200);
 }
  else if((ledLigado == true) && (digitalRead(4) == LOW))
  {
  	ledLigado = false;
    delay(200);
  }
  if(ledLigado == true)
  {
  	digitalWrite(12, HIGH);
  }
  
  else
  {
  	digitalWrite(12, LOW);
  }
}