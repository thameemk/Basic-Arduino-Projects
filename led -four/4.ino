void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
 
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(100);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(100);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  delay(100);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  delay(100);
  
}
