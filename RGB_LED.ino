// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
	Red();
  	Green();
  	Blue();
  	Pink();
  	Yellow();
  	
}
void Pink()
{
 digitalWrite(13, HIGH);
 digitalWrite(12, HIGH);
 delay(1000);
 digitalWrite(13, LOW);
 digitalWrite(12, LOW);

}

void Yellow()
{
  
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
 
}

void Red()
{
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
}
void Green()
{
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
}
void Blue()
{
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
}