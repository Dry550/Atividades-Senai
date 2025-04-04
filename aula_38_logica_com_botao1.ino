/*
Autor:Adryelle Souza
Nome do arquivo:Botao
Data: 17/03/2025
Descrição:  
*/

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 int valor = analogRead (A0);
  Serial.println(valor);
  
  
}