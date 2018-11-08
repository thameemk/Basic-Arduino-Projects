#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);
const int trigPIN=10;
const int echoPIN=8;
long duration;
int distance;
void setup(){
  pinMode(trigPIN,OUTPUT);
  pinMode(echoPIN,INPUT);
  Serial.begin(115200);
  //initilize the lcd
  lcd.begin();
  //turn on backlight
  lcd.backlight();
  lcd.clear();
 
}

void loop(){
  digitalWrite(trigPIN,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPIN,LOW);
  duration=pulseIn(echoPIN, HIGH);
  distance=duration*.034/2;
  lcd.setCursor(0,0);
  lcd.print("distance is :");
  lcd.print(distance);
  
}

