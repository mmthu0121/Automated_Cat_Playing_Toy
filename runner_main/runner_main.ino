//-----------------------Main Loop-------------------------------------

#include "variables.h"


void loop() {

  ultrasonic_check();
  LED_Cat_Present_Test();

  if (Present == 1){
    runStepperBase(100,C);      //100mm, clockwise
    Rotate = 1;
    Present = 0;
    delay(1);
  }

  if (Present == 2){
    Rotate = 0;
    runStepperBase(100,A);
    Present = 0;
    delay(1);
  }

  if (Rotate == 1){
    while (distance < 150){
      runStepperArm(10);
      ultrasonic_check();
      delay(1);
    }
    Present = 2;
    delay(1);
  }


}
