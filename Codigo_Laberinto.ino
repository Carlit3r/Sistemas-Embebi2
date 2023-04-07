#include "Motores.h"
#include "joystick.h"
#include "SensorT.h"

int elpinled = 33;  //pin del led touch
int lacap = 32; //pin del sensor touch

Motor Motor;
Joystick joystick;
SensorT SensorT1(elpinled,lacap); 


void setup() {
  Serial.begin(115200);
  Motor.begin();
  joystick.attach();//puedo entrgarle que pines, si no, lo hara por defer¿cto
}

void loop() {

  SensorT1.sensar();
  SensorT1.pinalto();
  
  Motor.moverlaberintoX(joystick.lecturaX());
  Motor.moverlaberintoY(joystick.lecturaY());
  delay(80);
}

