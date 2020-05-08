//-----------------------Main Loop-------------------------------------

#include "variables.h"


void loop() {

  ultrasonic_check();
  LED_Cat_Present_Test();

  if (Present == 1){
    runStepperBase(100,C);      //100mm, clockwise
    Rotate = 1;
    Present = 0;
  }

  if (Present == 2){
    Rotate = 0;
    runStepperBase(-100,C);
    Present = 0;
  }

  if (Rotate == 1){
    while (distance < 30){
      runStepperArm(10);
      ultrasonic_check();
    }
    Present = 2;
  }


}