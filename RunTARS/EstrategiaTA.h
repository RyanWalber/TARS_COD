#ifndef ESTRATEGIATA_H
#define ESTRATEGIATA_H

#include <robo_hardware2.h>
#include "Motores.h"
#include "SensorLinha.h"


class Estrategia {
  public:

    void executar();

    void SeguirLinha();

  private:

    void LigarMotores();

    

    
    Motores motores;
    SensorLinha sensoresLinha;
    
};

#endif
