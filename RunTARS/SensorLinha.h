#ifndef SENSORLINHA_H
#define SENSORLINHA_H
#include <robo_hardware2.h>

class SensorLinha{
  
  private:
  
    #define DIVISOR_BRANCO_PRETO 70

    float valorSensorLinhaMaisDir;
    float valorSensorLinhaDir;
    float valorSensorLinhaEsq;
    float valorSensorLinhaMaisEsq;
    
   public:
        inline bool pppp() {return (valorSensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir<DIVISOR_BRANCO_PRETO);}
        inline bool pppb() {return (valorSensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool ppbb() {return (valorSensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool pbbb() {return (valorSensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool bppp() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir<DIVISOR_BRANCO_PRETO);}
        inline bool bppb() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool bpbb() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq<DIVISOR_BRANCO_PRETO && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool bbpp() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir<DIVISOR_BRANCO_PRETO);}
        inline bool bbpb() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaDir<DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool bbbp() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir<DIVISOR_BRANCO_PRETO);}
        inline bool bbbb() {return (valorSensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaEsq>DIVISOR_BRANCO_PRETO && valorSensorLinhaDir>DIVISOR_BRANCO_PRETO && valorSensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}

        inline bool   frente(){return (bbbb() || bppb() || pppp());}
        inline bool  direita(){return (pppb() || ppbb() || pbbb() || bpbb());}
        inline bool esquerda(){return (bppp() || bbpp() || bbpb() || bbbp());}
        
        inline bool  desalinhou_direita(){return (bppp() || bbpp() || bbpb() || bbbp());}
        inline bool desalinhou_esquerda(){return (pppb() || ppbb() || pbbb() || bpbb() );}
        
      void recolherValoresSensorLinha();
};
  
#endif
