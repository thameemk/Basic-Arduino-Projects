int IN1=13;
void setup() {
  Serial.begin(9600);
  pinMode(IN1,INPUT);
}

void loop() {

 Serial.println(digitalRead(13));

}
