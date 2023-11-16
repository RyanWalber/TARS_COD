#include "EstrategiaTA.h"

void Estrategia::SeguirLinha(){

  sensoresLinha.recolherMedidasSensorLinha();

  if(sensoresLinha.frente()){
    motores.ParaFRENTE();

  }
  else if(sensoresLinha.direita()){
    motores.ParaDIREITA();
    delay(200);
  }
  else if(sensoresLinha.esquerda()){
    motores.ParaESQUERDA();
    delay(200);
  }
}
