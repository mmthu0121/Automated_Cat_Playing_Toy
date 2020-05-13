###Process

<p>
•	Initially, the motion sensor at the bottom of the project will wait for the motion of the car nearby. Until the sensor finds any cat motion, the LED on the project will blink continuously.
•	When the cat gets near to the project, the motion sensor will provide TRUE state input to the Arduino and the ultrasonic sensor will calibrate the height of the cat.
•	When the data is received from the ultrasonic sensor, the base stepper motor will move the arm to the position of 20cm higher than the cat.
•	When the arm reach to the desired destination, the arm with the toy will rotate for one full cycle and at the same time, the sensors will check if the cat is still present.
•	This is done by two sensors, ultrasonic sensor and the motion sensor. If either the ultrasonic sensor gives us data of the distance smaller than the normal calibrated height from the floor or the motion sensor gives us the data input of cat motion, the stepper motor at the arm will continue to rotate.
•	When the sensors figured out that the cat is no longer present, the state will be converted to non-Present and the stepper at the base will return the arm to the initial position.

</p>
  
