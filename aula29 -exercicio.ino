/*
Nome do arquivo:Exercicos
Autor:Adryelle De Souza
Data:27/02/2025
Descrição:
*/
int temperatura = 30;
int bateria = 20;

void setup()
{
#define pinLedVermelhoA 13
  
 Serial.begin(9600);
 
/*EXERCICIO 1
pinMode(pinLedVermelhoA , OUTPUT);
 
 int temperatura = 29;
 
 if(temperatura >= 30){
digitalWrite(pinLedVermelhoA , HIGH);
 */
  
  
 
/*EXERCICIO 2
pinMode(pinLedVermelhoA , OUTPUT);
 int bateria = 19;
 
 if(bateria <=20){
digitalWrite(pinLedVermelhoA , HIGH);
 */
  
  
  
/*EXERCICIO 3
pinMode(pinLedVermelhoA , OUTPUT);
 int resultado = 0;
 int numero = 0;
 resultado = numero % 2;
  if(resultado == 0){
 digitalWrite(pinLedVermelhoA , HIGH);
 */
  
  
  
/*EXERCICIO 4
  int numeroPositivo = 6;
  if(numeroPositivo > 0){
    Serial.println("Numero positivo");
  } else if(numeroPositivo < 0){
    Serial.println("Numero negativo");
 
  */
  
  
/*EXERCICIO 5
  int salario = 999;
  int resultado = 0;
  
  if (salario < 1000){ 
    resultado = salario * 10 / 100;}
  Serial.println("NOME:JOANA");
  Serial.println("CARGO:GERENTE");
  Serial.println("O ACRESCIMO EH ");
  Serial.println(resultado); 
 */

  
  
//EXERCICIO 6
  int salario = 499;
  int resultado = 0;
  
  if (salario < 500){
    resultado = salario * 30 / 100;
  Serial.println("O ACRESCIMO EH ");
  Serial.println(resultado);
  
  }



//EXERCICIO 7
  int valor1 = 0;
  int valor2 = 0;

  if (valor1 > valor2){
Serial.println("valor2 eh maior que valor1");
  }
  else if(valor2 > valor1){
  Serial.println("valor1 eh maior que valor1");
  }  
    
    
//EXERCICIO 8
  int nota1 = 5;
  int nota2 = 8;
  int nota3 = 7;
  int nota4 = 5;
  float media = 0;
    
   media = ( (nota1 + nota2 + nota3 + nota4) / 4.0);
    if(media >= 7){
    Serial.println("APROVADO");
      
    }else if(media < 7){
     Serial.println("REPROVADO");
    }
   
}

  
    




   
  


void loop()
{
  
}