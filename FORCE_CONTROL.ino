// C++ code
//FORCE CONTROL

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
  int force;
  
  force = analogRead(A0);
  Serial.println(force);
  
  if(force >= 0 && force <= 150)
  {
    green();
  }
  if(force > 150 && force <= 300)
  {
    blue();
  }
  if(force > 300)
  {
    red();
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
