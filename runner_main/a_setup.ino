
void setup() {

  //Serial
  Serial.begin (9600);

  //LED
  pinMode(led, OUTPUT);

  //ultrasonic sensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  //motion sensor
  pinMode(inputPin, INPUT);     // declare sensor as input

  //motor
   AFMS.begin();
   baseStepper->setSpeed(10);
   armStepper->setSpeed(10);

}
