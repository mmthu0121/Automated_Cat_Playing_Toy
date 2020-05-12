// Pin and Variable Declaration


//----------------------------LED----------------------------------------------
#define led 11

//----------------------Ultrasonic Sensor--------------------------------------
#define trigPin 13
#define echoPin 12

long duration, distance;
int Present = 0;
int Rotate = 0;

//-----------------------Motion Sensor----------------------------------------

int inputPin = 2;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status

//---------------------------Stepper-------------------------------------------
#include <Wire.h>
#include <Adafruit_MotorShield.h>
// #include <Stepper.h>
Adafruit_MotorShield AFMS = Adafruit_MotorShield();

const int stepsPerRevolution = 200;

//Stepper at the base
Adafruit_StepperMotor *baseStepper = AFMS.getStepper(200, 2);

// Stepper baseStepper(stepsPerRevolution, 21,22,25,26);
int stepCount = 0;

//Stepper at the arm
Adafruit_StepperMotor *armStepper = AFMS.getStepper(200, 2);

// Stepper armStepper(stepsPerRevolution, 23,24,29,30);
