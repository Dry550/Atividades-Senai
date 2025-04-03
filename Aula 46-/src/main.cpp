#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
 lcd.init();
 lcd.backlight();
 lcd.print("HELLO WORLD!!!"); 
}

void loop()
{
  bool estadoAtualBotao = digitalRead(pinBotao);
  static bool estadoAnteriorBotao == 0);
  static bool estadoLed = 0;
    
  if(estadoAtualBotao == 1 && estadoAnteriorBotao == 0)
  {
   estadoLed = !estadoLed;
    digitalWrite(pinLed, estadoLed);
    if(estadoLed == 1)
    {
     lcd.setCursor(0,0);
     lcd.print("LIGADO   ");
    }
    else
    {
      lcd.setCursor(0,0);
      lcd.print("DESLIGADO");
    }
 }
    
}
  


