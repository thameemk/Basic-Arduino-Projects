int sensorPin=A0;//select the inputpin for LDR
int sensorValue=0;
void setup() {
Serial.begin(9600);
}
void loop(){
sensorValue = analogRead(sensorPin);
Serial.print("sensorValue");
Serial.println(sensorValue);
delay(250);
}

