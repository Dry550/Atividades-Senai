#include <Arduino.h>
#include <WiFi.h>
#include "internet.h"
#include "temporizador.h"


//* ---------- CONFIGURACAO DO WIFI ------------

const unsigned long tempoEsperaConexao = 20000;
const unsigned long tempoEsperaReconexao = 10000;

void conectaWiFi()
{
  Serial.printf("Conectando ao WiFi: %d", "SALA09");

  WiFi.begin("SALA09", "info@134");

  unsigned long tempoInicialWiFi = millis();

  while (WiFi.status() != WL_CONNECTED && millis() - tempoInicialWiFi < tempoEsperaConexao)
  {
    Serial.print(".");
    delay(500);
  }

  if (WiFi.status() == WL_CONNECTED)
  {
    Serial.println("\n WiFi conectado com sucesso! ");
    Serial.print("Endereco IP: ");
    Serial.println(WiFi.localIP());
  }

  else
  {
    Serial.println("\n Falha ao conectar no WiFi. Verifique o nome da rede e a senha");
  }
}

void checkWiFi()
{
  unsigned long tempoAtual = millis();
  static unsigned long tempoUltimaConexao = 0;

  if (tempoAtual - tempoUltimaConexao > tempoEsperaReconexao)
  {

    if (WiFi.status() != WL_CONNECTED)
    {
      Serial.println("\n Conexao perdida! Tentando reconectar...");
      conectaWiFi();
    }
    tempoUltimaConexao = tempoAtual;
  }
}