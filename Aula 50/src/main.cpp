#include <Arduino.h>
#define pinLed 2
#define pinBotao 0


void setup()
{
  delay(5000);
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);


  while (digitalRead(pinBotao) == 0)
  {
    digitalWrite(pinLed, HIGH);
    delay(500);
    digitalWrite(pinLed, LOW);
    delay(500);
  }
}

void loop()
{
}
