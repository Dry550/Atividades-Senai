/*
Autor:Adryelle Souza
Nome do arquivo:LCD
Data: 13/03/2025
Descrição: Explicacao
*/

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

  
void setup()
{
 lcd.init();
 lcd.backlight();//luz de fundo 
 delay(1000);
 lcd.noBacklight();
 pinMode(2, INPUT);
 lcd.home();//lcd.setCursor(0,0);
 lcd.print("OLA MUNDO!");
 lcd.setCursor(0,1);
 lcd.print("SENAI");
 delay(3000);
 lcd.clear();
}

void loop()
{
   lcd.setCursor(6,1);
  lcd.print(millis()/1000);
}