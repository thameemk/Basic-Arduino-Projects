#define C1A 13
#define C1B 11 
#define C2A 8
#define C2B 7
int IN1=2;
int IN2=4;
void setup() {
  Serial.begin(9600);
  pinMode(IN1,INPUT);
  pinMode(IN2,INPUT);
  pinMode(C1A,OUTPUT);
  pinMode(C1B,OUTPUT); 
  pinMode(C2A,OUTPUT); 
  pinMode(C2B,OUTPUT);
}
void loop() 
{ if(digitalRead(IN1)==LOW && digitalRead(IN2)==LOW){
    forward();
    Serial.println("forward"); 
  }
  else if(digitalRead(IN1)==LOW && digitalRead(IN2)==HIGH){
    right();
    Serial.println("right"); 
  }
  else if(digitalRead(IN1)==HIGH && digitalRead(IN2)==LOW){
    left();
    Serial.println("left");
  }
  else 
  {
  Stop();
  Serial.println("stop");
}
}
void forward()
{
digitalWrite(C1A, HIGH);
digitalWrite(C1B, LOW);
digitalWrite(C2A, HIGH);
digitalWrite(C2B, LOW);

}
void Stop()
{
digitalWrite(C1A, LOW);
digitalWrite(C1B, LOW);
digitalWrite(C2A, LOW);
digitalWrite(C2B, LOW);

}
void right()
{
digitalWrite(C1A, LOW);
digitalWrite(C1B, HIGH);
digitalWrite(C2A, HIGH);
digitalWrite(C2B, LOW);

}
void left()
{
digitalWrite(C1A, HIGH);
digitalWrite(C1B, LOW);
digitalWrite(C2A, LOW);
digitalWrite(C2B, HIGH);

}

