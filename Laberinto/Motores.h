#include<Arduino.h>
#include <Servo.h>

#define pinMotorX 14
#define pinMotorY 12
#define equilibrioX 80
#define equilibrioY 88

class Motor{
  public:
  void moverlaberintoX(int valor);
  void moverlaberintoY(int valor);
  void begin();
  
  private:
  
};

