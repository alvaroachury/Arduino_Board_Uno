/*
  STEPPER MOTOR FOUR PHASES 28BYJ_48

  Control a four phases stepper motor using ULN2003 driver board the "DELAY_TIME"
  variable allow change the motor speed, the minimum value of this variable 
  should be 1ms.

  modified 13 Jun 2014
  by Alvaro Achury

  This example code is in the public domain.
  
*/

const int IN_1 = 4;  // 
const int IN_2 = 5;  // 
const int IN_3 = 6;  // 
const int IN_4 = 7; 
const int DELAY_TIME = 10; // Int constant to define delay time

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin input board control pins as an output.
  pinMode(IN_1, OUTPUT);
  pinMode(IN_2, OUTPUT);
  pinMode(IN_3, OUTPUT);
  pinMode(IN_4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // one phases sequence
  digitalWrite(IN_1, HIGH);   
  digitalWrite(IN_2, LOW);   
  digitalWrite(IN_3, LOW);   
  digitalWrite(IN_4, LOW);
  delay(DELAY_TIME);
  digitalWrite(IN_1, LOW);   
  digitalWrite(IN_2, HIGH);   
  digitalWrite(IN_3, LOW);   
  digitalWrite(IN_4, LOW);
  delay(DELAY_TIME);
  digitalWrite(IN_1, LOW);   
  digitalWrite(IN_2, LOW);   
  digitalWrite(IN_3, HIGH);   
  digitalWrite(IN_4, LOW);
  delay(DELAY_TIME);
  digitalWrite(IN_1, LOW);   
  digitalWrite(IN_2, LOW);   
  digitalWrite(IN_3, LOW);   
  digitalWrite(IN_4, HIGH);
  delay(DELAY_TIME);

  // two phases sequence
  // digitalWrite(IN_1, HIGH);   
  // digitalWrite(IN_2, HIGH);   
  // digitalWrite(IN_3, LOW);   
  // digitalWrite(IN_4, LOW);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, LOW);   
  // digitalWrite(IN_2, HIGH);   
  // digitalWrite(IN_3, HIGH);   
  // digitalWrite(IN_4, LOW);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, LOW);   
  // digitalWrite(IN_2, LOW);   
  // digitalWrite(IN_3, HIGH);   
  // digitalWrite(IN_4, HIGH);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, HIGH);   
  // digitalWrite(IN_2, LOW);   
  // digitalWrite(IN_3, LOW);   
  // digitalWrite(IN_4, HIGH);
  // delay(DELAY_TIME);

  // half step sequence
  // digitalWrite(IN_1, HIGH);   
  // digitalWrite(IN_2, LOW);   
  // digitalWrite(IN_3, LOW);   
  // digitalWrite(IN_4, LOW);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, HIGH);   
  // digitalWrite(IN_2, HIGH);   
  // digitalWrite(IN_3, LOW);   
  // digitalWrite(IN_4, LOW);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, LOW);   
  // digitalWrite(IN_2, HIGH);   
  // digitalWrite(IN_3, LOW);   
  // digitalWrite(IN_4, LOW);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, LOW);   
  // digitalWrite(IN_2, HIGH);   
  // digitalWrite(IN_3, HIGH);   
  // digitalWrite(IN_4, LOW);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, LOW);   
  // digitalWrite(IN_2, LOW);   
  // digitalWrite(IN_3, HIGH);   
  // digitalWrite(IN_4, LOW);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, LOW);   
  // digitalWrite(IN_2, LOW);   
  // digitalWrite(IN_3, HIGH);   
  // digitalWrite(IN_4, HIGH);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, LOW);   
  // digitalWrite(IN_2, LOW);   
  // digitalWrite(IN_3, LOW);   
  // digitalWrite(IN_4, HIGH);
  // delay(DELAY_TIME);
  // digitalWrite(IN_1, HIGH);   
  // digitalWrite(IN_2, LOW);   
  // digitalWrite(IN_3, LOW);   
  // digitalWrite(IN_4, HIGH);
  // delay(DELAY_TIME);
}
