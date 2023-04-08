#include "Print.h"
#include"Motores.h"

/*Motor::Motor()
{
¿que sucede? ¿por que me dice que estoy redefiniendo el constructor
}**/
  Servo servoX, servoY;//creo los objetos servo
  int gradosy = equilibrioY;
  int gradosx = equilibrioX;
  

void Motor::moverlaberintoY(int valor){
  if(valor > 2900){ 
    gradosy ++;
    if(gradosy > (equilibrioY + 20)) gradosy=(equilibrioY + 20);
    }
  else if(valor < 800){ 
    gradosy --;
    if(gradosy < (equilibrioY - 20)) gradosy=(equilibrioY - 20);
    }
  else {
    if(gradosy<equilibrioY){
      for(gradosy; gradosy==equilibrioY; gradosy++){
        Serial.println(gradosy);
        servoY.write(gradosy);
      
      }
    }
    else{
      for(gradosy; gradosy==equilibrioY; gradosy--){
        Serial.println(gradosy);
        servoY.write(gradosy);
      }
    }
  }
  servoY.write(gradosy); Serial.println("grados y: " + String(gradosy));
}
void Motor::moverlaberintoX(int valor){

   if(valor > 2800){ 
    gradosx ++;
    if(gradosx > (equilibrioX+20)) gradosx=(equilibrioX+20);
    }
  else if(valor < 900){ 
    gradosx --;
    if(gradosx < (equilibrioX-20)) gradosx=(equilibrioX-20);
    }
  else {
    if(gradosx<equilibrioX){
      for(gradosx; gradosx==equilibrioX; gradosx++){
        Serial.println(gradosx);
        servoY.write(gradosx);
      }
    }
    else{
      for(gradosx; gradosx==equilibrioX; gradosx--){
        Serial.println(gradosx);
        servoY.write(gradosx);
      }
    }
  }

  servoX.write(gradosx); Serial.println("grados x: " + String(gradosx));

}

void Motor::begin(){
  servoX.attach(pinMotorX);
  servoY.attach(pinMotorY);
  delay(100);
  servoX.write(90);
  servoY.write(90);
}

