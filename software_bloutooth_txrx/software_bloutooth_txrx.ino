#include<SoftwareSerial.h>
SoftwareSerial myserial(2,3); //RX & TX
char data=0;
#define C1A 13  //right side
#define C1B 7
#define C2A 8  //left side
#define C2B 5
void setup(){
    myserial.begin(9600);
    Serial.begin(9600);
    pinMode(4,OUTPUT);
    pinMode(C1A,OUTPUT);
    pinMode(C1B,OUTPUT); 
    pinMode(C2A,OUTPUT); 
    pinMode(C2B,OUTPUT); 
}
void loop(){
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
    else if (data=='s')
      Stop();
  }
         
}
void forward(){
  Serial.print("forward");
  digitalWrite(C1A, HIGH);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, HIGH);
  digitalWrite(C2B, LOW);
  
}
void backward(){
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, HIGH);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, HIGH);
}
void right(){
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, HIGH);
  digitalWrite(C2A, HIGH);
  digitalWrite(C2B, LOW);
}
void left(){
  digitalWrite(C1A, HIGH);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, HIGH);
}
void Stop(){
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, LOW);
}

