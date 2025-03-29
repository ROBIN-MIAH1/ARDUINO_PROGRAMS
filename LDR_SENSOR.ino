// C++ code
// LDR Sensor

int light = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(light, OUTPUT);
  
}

void loop()
{

  int r;
  r = analogRead(A0);
  Serial.println(r);
  
  if(r < 400)
  {
    digitalWrite(light, HIGH);
    delay(1000);

  }
  else{
    digitalWrite(light, LOW);
    delay(1000);
   
  }
}