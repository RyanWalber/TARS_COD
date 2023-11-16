#include <robo_hardware2.h>
#include "EstrategiaTA.h"

Estrategia estrategia;

void setup() {
  robo.configurar(false);
  }

void loop() {
  estrategia.SeguirLinha();
 
}
