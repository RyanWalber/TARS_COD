#ifndef ESTRATEGIATA_H
#define ESTRATEGIATA_H

#include <robo_hardware2.h>
#include "Motores.h"
#include "SensorLinha.h"


class Estrategia {
  public:

    void executar();

  private:

    void LigarMotores();

    void seguirlinha();

    

    SensorLinha sensoresLinha;
    
};

#endif
