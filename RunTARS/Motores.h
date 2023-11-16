
#ifndef MOTORES_H
#define MOTORES_H

#include <robo_hardware2.h>

class Motores {
       private:
  
    #define  AGILIDADE_FRENTE 63
    
    #define  AGILIDADE_TRAS -65
  
  public:
  
    inline void ParaFRENTE(){robo.acionarMotores(AGILIDADE_FRENTE, AGILIDADE_FRENTE);}
    
    inline void ParaTRAS(){robo.acionarMotores(AGILIDADE_TRAS, AGILIDADE_TRAS);};
    
    inline void ParaESQUERDA(){robo.acionarMotores(AGILIDADE_FRENTE, AGILIDADE_TRAS);}
    
    inline void ParaDIREITA(){robo.acionarMotores(AGILIDADE_TRAS, AGILIDADE_FRENTE);}
    
    inline void PARAR(){robo.acionarMotores(0, 0);}

   
};

#endif
