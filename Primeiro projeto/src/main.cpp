#include <Arduino.h>

#define pinLed 2
#define pinButton 19

void setup()
{
    Serial.begin(9600);
    pinMode(pinLed, OUTPUT);
    pinMode(pinButton, INPUT_PULLUP);
}

void loop()
{
    bool estadoAtualButton = digitalRead(pinButton);
    static bool estadoAnteriorButton = 1;
    static int contagem = 0;

    static unsigned long tempoUltimaMudanca = 0;
    unsigned long tempoAtual = millis();
    static bool ultimaAcao = 1;
    const unsigned long tempoFiltro = 50;

    //! INICIA O TRATAMENTO DE RUIDO DO BOTAO

    //*DETECTA MUDANCA NO ESTADO DO BOTAO
    if (estadoAtualButton != estadoAnteriorButton)
    {
        tempoUltimaMudanca = tempoAtual; //* ATUALIZA O TEMPO DA ULTIMA MUDANCA
    }

    //*VERIFICA SE O NOVO ESTADO SE MANTEVE ESTAVEL POR TEMPO SUFICIENTE
    if(tempoAtual - )


        ultimaAcao = estadoAtualButton;
        if (!estadoAtualButton == 0)

        {
            contagem++;
            Serial.println(contagem);
        }

        else
        {
            //*botao solto
        }
    }
    estadoAnteriorButton = estadoAtualButton;
}
