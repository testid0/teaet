int score = 0;

void setup() 
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);

}
void loop() {
  score = analogRead(A1);
  Serial.println(score);
  if(score >= 400)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    tone(6,700);
    delay(500);
    noTone(6);
    delay(500);
    Serial.println("도난발생");
  }
  else if(score <= 800)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }


}
