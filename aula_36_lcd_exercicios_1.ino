/*
Autor:Adryelle Souza
Nome do arquivo:LCD
Data: 13/03/2025
Descrição: Exercicio
*/

#include <LiquidCrystal_I2C.h>
#define pinLed 13
#define pinBotao 2
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
 pinMode(pinLed, OUTPUT);
 pinMode(pinBotao, INPUT);
 lcd.init();
 lcd.backlight();
  
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
  estadoAnteriorBotao = estadoAtualBotao;
    
}