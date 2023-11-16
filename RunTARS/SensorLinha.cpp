#include "SensorLinha.h"


void SensorLinha::recolherMedidasSensorLinha(){
    
    medidaSensorEsq = robo.lerSensorLinhaEsq();
    medidaSensorDir = robo.lerSensorLinhaDir();
    
    
}
