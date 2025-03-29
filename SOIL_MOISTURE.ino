// C++ code
//SOIL MOISTURE.

int r = 7, b = 6, g = 5;

void setup()
{
  Serial.begin(9600); 
  pinMode(r, OUTPUT);
   pinMode(b, OUTPUT);
   pinMode(g, OUTPUT);
}

void loop()
{
  int moisture;
  
  moisture = analogRead(A0);
  Serial.println(moisture);
  
  if(moisture >= 0 && moisture <= 300)
  {
    red();
  }
  if(moisture > 300 && moisture <= 600)
  {
    blue();
  }
  if(moisture > 600)
  {
    green();
  }
  
}

void red()
{
  digitalWrite(r, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
}
void blue()
{
  digitalWrite(b, HIGH);
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
}

void green()
{
  digitalWrite(g, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(r, LOW);
}
