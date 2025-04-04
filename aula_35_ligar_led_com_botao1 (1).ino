/*
Autor:Adryelle Souza
Nome do arquivo:LCD
Data: 13/03/2025
Descrição: Exercicio 
*/

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();
  pinMode(2, INPUT);
}

void loop()
{
  bool leituraBotao = digitalRead(2);
  static bool leituraAnteriorBotao = 0;
  static int contagem = 0;
  static bool SomaSubtracao = 0; //0 - soma, 1 - subtrai
  
  if(leituraBotao == 1 && leituraAnteriorBotao == 0)
    
  {
  //SOMAR
  if(SomaSubtracao = 0)
  {
    contagem++;
    if(contagem == 5)SomaSubtracao = 1;
  }
  }
  }