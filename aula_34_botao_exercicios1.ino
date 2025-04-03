/*
Autor:Adryelle Souza
Nome do arquivo:Botao
Data: 12/03/2025
Descrição: Exercicios 
*/

#define pinLedVermelho 10


void setup()
{
  pinMode(pinBotao, INPUT);
  pinMode(pinLedVermelho, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  bool estadoAtualBotao = digitalRead(pinBotao);
  static bool estadoLed = 0;
  
  if(estadoAtualBotao = 1 && estadoAnteriorBotao == 0);
  {
   estadoLed = !estadoLed;
   digitalWrite(pinLed, estadoLed);
  }
  
  estadoAnteriorBotao = estadoAtualBotao;
}