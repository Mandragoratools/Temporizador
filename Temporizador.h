
#ifndef Temporizador_h
#define Temporizador_h
#include "Arduino.h"

class Temporizador
 {
   public: Temporizador();
   void encender();
   
 
   bool temporizar1(int diat, int horat, int minutot, int segundot);
   bool temporizar2(int diat, int horat, int minutot, int segundot);
   bool temporizar3(int diat, int horat, int minutot, int segundot);
   bool temporizar4(int diat, int horat, int minutot, int segundot);
   bool temporizar5(int diat, int horat, int minutot, int segundot);
 };

#endif