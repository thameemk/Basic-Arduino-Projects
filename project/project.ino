#include<SoftwareSerial.h>
SoftwareSerial myserial(2,3); //RX & TX
int sensorPin=A0;//select the inputpin for LDR
int sensorValue=0;
#define C1A 13
#define C1B 11 
#define C2A 8
#define C2B 7
String voice;
const int trigPIN=10;
const int echoPIN=5;
long duration;
int distance;
int IN1=6;
int IN2=4;
char data=0;
void setup(){
  myserial.begin(9600);
  pinMode(C1A,OUTPUT);
  pinMode(C1B,OUTPUT); 
  pinMode(C2A,OUTPUT); 
  pinMode(C2B,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(trigPIN,OUTPUT);
  pinMode(echoPIN,INPUT);
  Serial.begin(9600);
  pinMode(IN1,INPUT);
  pinMode(IN2,INPUT);
  
  
}
void loop(){
  
}
void ldr(){
  sensorValue = analogRead(sensorPin);
  if (sensorValue > 700)
    forward();
  else{
    Stop(); 
  }
}
void blouetooth(){
  if (myserial.available()>0){
    data=myserial.read();
    Serial.println(data);
    if (data=='f')
      forward();
    else if (data=='b')
      backward();
    else if (data=='r')
      right();
    else if (data=='l')
      left();
    else
      Stop();   
  }
}
void line(){
   if(digitalRead(IN1)==LOW && digitalRead(IN2)==LOW){
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
void ultra(){
  digitalWrite(trigPIN,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPIN,LOW);
  duration=pulseIn(echoPIN, HIGH);
  distance=duration*.034/2;
  if(distance >=5)
    forward();
   else if(distance<=5){
   delay(1000);
    right(); }
}
void forward(){
  digitalWrite(C1A, HIGH);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, HIGH);
  digitalWrite(C2B, LOW);
  delay(2000);
}
void Stop(){
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, LOW);
  
}

void backward(){
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, HIGH);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, HIGH);
  delay(2000);
}
void right()
{
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, HIGH);
  digitalWrite(C2A, HIGH);
  digitalWrite(C2B, LOW);
  delay(2000);
}
void left()
{
  digitalWrite(C1A, HIGH);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, HIGH);
  delay(2000);
}

