/*
Autor:Adryelle Souza
Nome do arquivo:Potenciometro
Data: 14/03/2025
Descrição: Exercicios 
*/

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //EXERCICIO 1
  
  int volume = analogRead(A0);//READ == LER
  //Serial.println(volume);//print == mostrar
  
  int resultado = map(volume, 0, 1023, 0, 100);
  Serial.println(resultado);
  
  
  //EXERCICIO 2
  
 int temperatura = 0;
  /*if(resultado >= 0)
  {
  Serial.println("MUITO FRIO");
  }
  if(resultado >=204,6)
  {
  Serial.println("FRIO")*/
    
  if(temperatura > 30){
    Serial.println("Partiu praia");
    
  }else if(temperatura <= 30 && temperatura > 24 ){
    Serial.println("Ta gostosinho");
  
  }else if(temperatura <= 24 && temperatura > 18){
    Serial.println("Ta ok");
    
  }else{
    Serial.println("Ta friozinho");
    
  }
 
    
    
    
    
    
    
    
    
    
    
    
}