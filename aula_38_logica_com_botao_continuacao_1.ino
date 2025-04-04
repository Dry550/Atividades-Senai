/*
Autor:Adryelle Souza
Nome do arquivo:Botao
Data: 17/03/2025
Descrição:  
*/

#include <LiquidCrystal_I2C.h>

#define pinbotao 0
#define pinbotao 1 
#define pinbotao 2
#define pinbotao 3
#define pinbotao 4

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
 Serial.begin(9600); 

 lcd.init();
 lcd.backlight();
}

void loop()
{
 int estadobotao = analogRead (A0);
 
  
  if(estadobotao == 0);
  {
   lcd.setCursor(0,0);
   lcd.print("Botao 1 pressionado");
  }
  
  
  if(estadobotao == 145)
  {
   lcd.setCursor(0,0);
   lcd.print("Botao 2 pressionado");
  }
  
  
  if(estadobotao == 329)
  {
    lcd.setCursor(0,0);
    lcd.print("Botao 3 pressionado");
  }
  
  
  if(estadobotao == 505) 
  {
    lcd.setCursor(0,0);
    lcd.print("Botao 4 pressionado");
  }
  
  
  if(estadobotao == 741)
  {
    lcd.setCursor(0,0);
    lcd.print("Botao 5 pressionado");
  }
  
  if(estadobotao == 1023)
  {
    
  }
}