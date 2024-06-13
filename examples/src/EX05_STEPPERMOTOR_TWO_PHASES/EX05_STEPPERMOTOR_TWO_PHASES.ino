/*
  STEPPER MOTOR TWO PHASES

  Control a two phases step motor using A4988 driver board the "DELAY_TIME"
  variable allow change the motor speed, the minimum value of this variable 
  should be 1ms.

  modified 13 Jun 2014
  by Alvaro Achury

  This example code is in the public domain.
  
*/

const int DIR = 5;  // 
const int STEP = 4; // Int constant to define delay time
const int DELAY_TIME = 1000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(DIR, HIGH);   
  digitalWrite(STEP, LOW);
  delayMicroseconds(DELAY_TIME);                       
  digitalWrite(STEP, HIGH);
  delayMicroseconds(DELAY_TIME);                       
}
