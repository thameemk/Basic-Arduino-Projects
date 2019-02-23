void setup() {
  Serial.begin(9600);
  pinMode(13,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  if(digitalRead(13)==HIGH)
  {
 Serial.println("high");
 digitalWrite(8,HIGH);
  }
  else
  Serial.println("low");
  digitalWrite(8,LOW);
}
