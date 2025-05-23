#include <Arduino.h>
#include <PubSubClient.h>
#include <WiFi.h>
#include "internet.h"
#include "temporizador.h"

const char *mqtt_server = "test.mosquitto.org";
const int mqtt_port = 1883;
const char *mqtt_client_id = "dry_sza-134";
const char *mqtt_topic_sub = "senai134/mesa05/adry/espsub";
const char *mqtt_topic_pub = "senai134/mesa05/adry/esppub";

WiFiClient espClient;
PubSubClient client(espClient);
Temporizador tempo(1000);

void setup()
{
  Serial.begin(9600);
  conectaWiFi();
  tempo.iniciar();
}

void loop()
{
  checkWiFi();
  client.loop();

  if (tempo.estaPronto())
  {
    client.publish(mqtt_topic_pub, "Mensagem enviada!");
    Serial.print("Mensagem enviada!");
    Serial.println(tempo.estaPronto());
    tempo.reiniciar();
  }
}