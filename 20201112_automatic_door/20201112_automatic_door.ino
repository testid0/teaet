#include <Servo.h>

Servo servo;
int echoPin = 4;
int trigPin = 5;
float Time,distance;

void setup() {
  servo.attach(3);
  pinMode(trigPin ,OUTPUT);
  pinMode(echoPin ,INPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);

  Time = pulseIn(echoPin,HIGH);

  distance = ((float)(390*Time) / 10000) / 2;
              //      390-초음파 속도 
  Serial.print(distance);
  Serial.println("Cm");

  if(distance > 30)
  {
    servo.write(180);
    Serial.println("문이 닫혔습니다");
    delay(500);
  }
  if(distance <= 31)
  {
    servo.write(0);
    Serial.println("문이 열렸습니다");
    delay(500);
  }
}
