#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int Val = 2018; 
char buf[2];

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();  // <--> noBacklight();
  
  lcd.setCursor(0,0); 
  lcd.print("Happy New Year");
  
  lcd.setCursor(0,1);
  lcd.print("in ");
  
  lcd.setCursor(3,1);
  lcd.print(itoa(Val,buf,10));
}

void loop()
{
}

