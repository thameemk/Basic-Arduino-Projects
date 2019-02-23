#include<SoftwareSerial.h>
SoftwareSerial myserial(2,3); //RX & TX
String voice;
#define C1A 13  //right side
#define C1B 7
#define C2A 8  //left side
#define C2B 7
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
  while (myserial.available()){
    delay(10);
    char c= myserial.read();
    if (c=='#')
    {
      break;
    }
    voice += c;
  }
  if (voice.length()>0)
  {
    //voice=myserial.readString();
    Serial.println(voice);
    if (voice=="*forward")
      forward();
    else if (voice=="*backward") 
      backward();
    else if (voice=="*right")
      right();
    else if (voice=="*left")
      left();
            
  }voice="";
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


