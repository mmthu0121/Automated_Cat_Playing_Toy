
//-----------------------Ultrasonic Functions--------------------------------

void ultrasonic_check() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  delay(1);
}

// void LED_Cat_Present_Test() {
//   if (pirState > 45) {
//     digitalWrite(led,HIGH);
//     delay(300);
//     digitalWrite(led, LOW);
//     delay(300);
//     Present = 0;
//     delay(1);
//   }
//
//   else {
//     digitalWrite(led,LOW);
//     Present = 1;
//     delay(1);
//   }
// }

//------------------------------Motion Sensor----------------------------------

void MotionTest(){
  val = digitalRead(inputPin);  // read input value
  ultrasonic_check();

  if (val == HIGH) {            // check if the input is HIGH
    if (pirState == LOW) {
      pirState = HIGH;
    }
    Present = 1;
  } else {
    if (pirState == HIGH){
      pirState = LOW;
    }
    digitalWrite(led,HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
  }
}


//-----------------------------Stepper Functions-------------------------------
// void runStepperBase (float length, char direct){
//
//   int steps = 3600*length/314;        //adjust the formula with actual hardware. 31.4 is mm and calculated from the diameter of 5mm using c = 2*pi*radius
//
//   if ( direct == 'C' ){
//     baseStepper.step(steps);
//   }else if ( direct == 'A' ){
//     baseStepper.step(-steps);
//   }
//   delay(1);
// }
//
// void runStepperArm (int motorSpeed){
//
//   armStepper.setSpeed(motorSpeed);
//   armStepper.step(50000);
//   delay(1);
// }
