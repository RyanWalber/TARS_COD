#include "EstrategiaTA.h"

void Estrategia:: seguirLinha(){

  sensoresLinha.recolherValoresSensorLinha();

  if(sensoresLinha.frente()){
    motores.paraFrent();
  }
  else if(sensoresLinha.direita()){
    motores.paraDireita();
    delay(100);
  }
  else if(sensoresLinha.esquerda()){
    motores.paraEsquerda();
    delay(100);
  }
  else if (sensoresLinha.pppp()){
    motores.paraFrent();
  }
}
