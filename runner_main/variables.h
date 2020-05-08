// Pin and Variable Declaration
#include <Stepper.h>

//----------------------------LED----------------------------------------------
#define led 11

//----------------------Ultrasonic Sensor--------------------------------------
#define trigPin 13
#define echoPin 12

long duration, distance;
int Present = 0;
int Rotate = 0;

//---------------------------Stepper-------------------------------------------

const int stepsPerRevolution = 200;

//Stepper at the base
Stepper baseStepper(stepsPerRevolution, 21,22,25,26);
int stepCount = 0;

//Stepper at the arm
Stepper armStepper(stepsPerRevolution, 23,24,29,30);
