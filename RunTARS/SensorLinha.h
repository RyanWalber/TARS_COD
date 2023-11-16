#ifndef SENSORLINHA_H
#define SENSORLINHA_H
#include <robo_hardware2.h>

class SensorLinha{
  
  private:
  
    #define DIVISOR_BRANCO_PRETO 95
    
    float medidaSensorDir;
    float medidaSensorEsq;
   
    
   public:
   
        inline bool bb() {return (medidaSensorDir > DIVISOR_BRANCO_PRETO && medidaSensorEsq > DIVISOR_BRANCO_PRETO);}
        
        inline bool bp() {return (medidaSensorDir > DIVISOR_BRANCO_PRETO && medidaSensorEsq < DIVISOR_BRANCO_PRETO);}
        
        inline bool pb() {return (medidaSensorDir < DIVISOR_BRANCO_PRETO && medidaSensorEsq > DIVISOR_BRANCO_PRETO);}

        inline bool pp() {return (medidaSensorDir < DIVISOR_BRANCO_PRETO && medidaSensorEsq < DIVISOR_BRANCO_PRETO);}

        

        inline bool frente(){return(bb() || pp());}

        inline bool direita(){return(bp());}

        inline bool esquerda(){return(pb());}
        
        
      void recolherMedidasSensorLinha();
};
  
#endif
