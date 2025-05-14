int IN1 = 3;
int IN2 = 5;
int EN = 6;

void setup()
{
 	pinMode(IN1, OUTPUT);
	pinMode(IN2, OUTPUT);
 
}

void loop()
{
	digitalWrite(IN1, HIGH);
	digitalWrite(IN2, LOW);
	analogWrite(EN, 255);
}