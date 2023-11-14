
#ifndef MOTORES_H
#define MOTORES_H

#include <robo_hardware2.h>

class Motores {
       private:
  
    #define  AGILIDADE_FRENTE 90
    
    #define  AGILIDADE_TRAS -70
  
  public:
  
    inline void ParaFRENTE(){robo.acionarMotores(AGILIDADE_FRENTE, AGILIDADE_FRENTE);}
    
    inline void ParaTRAS(){robo.acionarMotores(AGILIDADE_TRAS, AGILIDADE_TRAS);};
    
    inline void ParaESQUERDA(){robo.acionarMotores(AGILIDADE_TRAS, AGILIDADE_FRENTE);}
    
    inline void ParaDIREITA(){robo.acionarMotores(AGILIDADE_FRENTE, AGILIDADE_TRAS);}
    
    inline void PARAR(){robo.acionarMotores(0, 0);}

   
};

#endif
