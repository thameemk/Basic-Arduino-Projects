#include<Wire.h>
#include<LiquidCrystal_I2C.h>
//set thelcdaddress to 0x3F for a 16 chars and  two line dispay 
LiquidCrystal_I2C lcd(0x3F,16,2);
void setup(){
  //initilize the lcd
  lcd.begin();
  //turn on backlight
  lcd.backlight();
  lcd.clear();
}
void loop(){
  //print message
  lcd.setCursor(0,0);
  lcd.print("HARI");
  lcd.setCursor(0,1);
  lcd.print("SREE");
}

