const int trigPIN=10;
const int echoPIN=8;
long duration;
int distance;
void setup(){
  pinMode(trigPIN,OUTPUT);
  pinMode(echoPIN,INPUT);
  Serial.begin(115200);
 
}

void loop(){
  digitalWrite(trigPIN,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPIN,LOW);
  duration=pulseIn(echoPIN, HIGH);
  distance=duration*.034/2;
  Serial.print("distance is :");
  Serial.println(distance);
  
}

