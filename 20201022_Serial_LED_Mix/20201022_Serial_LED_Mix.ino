int led = 0; // int - 정수 

int RedLED = 9;
int GreenLED = 10;
int BlueLED = 11;

void setup() 
{
  Serial.begin(9600); //시리얼 모니터 On 
  pinMode(RedLED,OUTPUT);
  pinMode(GreenLED,OUTPUT);
  pinMode(BlueLED,OUTPUT);
}

void loop() 
{
  if(Serial.available()>0)//시리얼 모니터에서 입력받으면
  {
    char input = Serial.read();  
    if(input == 'ㅇ')
    {
      Serial.println("1을 입력했습니다");
    }
    
    else if(input == 'ㅈ')
    {
      Serial.println("2을 입력했습니다");
    }
    
    else if(input == '3')
    {
      Serial.println("1을 입력했습니다");
    }
  }
  
}
