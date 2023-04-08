#include "Motores.h"
#include "SensorT.h"

int piny =26;
int pinx = 25;

int elpinled = 33;  //pin del led touch
int lacap = 32; //pin del sensor touch

Motor Motor;

//Creación del objeto 1 para SensorT:
SensorT SensorT1(elpinled,lacap); 


void setup() {                        //VOID SETUP//
  Serial.begin(115200);
  Motor.begin();

}

void loop() {                        //VOID LOOP//

  SensorT1.sensar();
  SensorT1.pinalto();

  int valAntX = 0, axisx=0;
  int valAntY = 0, axisy=0;
  for(int i =0; i<6; i++){
    valAntX = valAntX + analogRead(pinx);
    valAntY = valAntY + analogRead(piny);
  }
    axisx = valAntX/6;
    axisy = valAntY/6;
  Serial.println("Valores en X: " + String(axisx) + " Valores en Y: " + String(axisy));
  Motor.moverlaberintoX(axisx);
  Motor.moverlaberintoY(axisy);
  delay(80);
}

