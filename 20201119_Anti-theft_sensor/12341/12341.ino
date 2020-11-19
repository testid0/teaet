char number = 0;
int score = 0;
char input=0;

void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  score = analogRead(A1);
  if(Serial.available()>0)//시리얼 모니터에서 입력받으면
  {
    char input = Serial.read();  
    if(input == '1')
    {
        number = '2';
    }
    if(input == '2')
    {
        number = '1';
    }
  }
  
  if(number == '2')
  {
    if(score >= 400)
    {
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      tone(6,700);
      delay(500);
      noTone(6);
      delay(500);
    }
    else if(score <= 800)
    {
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
    }
   else
   {
    Serial.println("도난방지꺼짐"); 
   }
  }


  
}
