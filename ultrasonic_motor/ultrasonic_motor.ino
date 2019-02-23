#define C1A 13
#define C1B 11 
#define C2A 8
#define C2B 7
const int trigPIN=10;
const int echoPIN=5;
long duration;
int distance;

void setup(){
  pinMode(C1A,OUTPUT);
  pinMode(C1B,OUTPUT); 
  pinMode(C2A,OUTPUT); 
  pinMode(C2B,OUTPUT);
  pinMode(trigPIN,OUTPUT);
  pinMode(echoPIN,INPUT);
  
}
void loop(){
  ultra();
  if(distance >=7)
    forward();
   else if(distance <=7)
    Stop();  
}
void forward(){
  digitalWrite(C1A, HIGH);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, HIGH);
  digitalWrite(C2B, LOW);
}
void Stop(){
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, LOW);
  
}
void ultra(){
  digitalWrite(trigPIN,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPIN,LOW);
  duration=pulseIn(echoPIN, HIGH);
  distance=duration*.034/2;
}
void backward(){
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, HIGH);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, HIGH);
}

