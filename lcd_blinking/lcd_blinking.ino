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
  for(int i=0;i<=10;i++)
  {
    lcd.setCursor(0,0);
    lcd.print("anu");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("sree");
    delay(1000);
    lcd.clear();
  }
  
}

