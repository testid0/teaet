void setup() 
{
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  if(digitalRead(8) == 1)
  {
    digitalWrite(9,HIGH);
  }
  if(digitalRead(8) == 0)
  {
    digitalWrite(9,LOW);
  }
}
