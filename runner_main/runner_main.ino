//-----------------------Main Loop-------------------------------------

#include "variables.h"


void loop() {

  MotionTest();

  int length = distance - 200;
  int steps = 3600*length/314;

  if (pirState == HIGH){
    baseStepper->step(steps, FORWARD, DOUBLE);       //100mm, clockwise
    Rotate = 1;
    delay(1);
    if (Rotate == 1){
      while (distance < 1000 || pirState == HIGH){      //1000mm
        armStepper->step(200, FORWARD, MICROSTEP);      //rotate one full cycle
        MotionTest();
        delay(1);
      }
      Present = 0;
      delay(1);
    }

    if (Present == 0){
      Rotate = 0;
      baseStepper->step(steps, BACKWARD, DOUBLE);
      delay(1);
      Present = 1;
    }
  }


}
