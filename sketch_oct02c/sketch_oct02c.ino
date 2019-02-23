#define C1A 13
#define C1B 11 
#define C2A 8
#define C2B 7
void setup(){
  pinMode(C1A,OUTPUT);
  pinMode(C1B,OUTPUT); 
  pinMode(C2A,OUTPUT); 
  pinMode(C2B,OUTPUT);
}
void loop(){
  forward();
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


void backward(){
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, HIGH);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, HIGH);
}
