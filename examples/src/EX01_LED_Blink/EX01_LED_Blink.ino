/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

const int RED_LED=7;  // RED LED assigned to the 7 pin
const int YELLOW_LED=6;  // 
const int GREEN_LED=5;  // 
const int DELAY_ON_RED_LED=1000; // Int constant to define delay time
const int DELAY_ON_YELLOW_LED=300; // Int constant to define delay time
const int DELAY_TIME = DELAY_ON_RED_LED-DELAY_ON_YELLOW_LED;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(RED_LED, OUTPUT);
  Serial.begin(9600);
  Serial.println();
  Serial.println("Start sequence");
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RED_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("Red LED ON");
  delay(DELAY_TIME);                       // wait for a second
  digitalWrite(YELLOW_LED, HIGH);
  Serial.println("Yellow LED ON");
  delay(DELAY_ON_YELLOW_LED);                       // wait for a second
  digitalWrite(RED_LED, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(YELLOW_LED, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(GREEN_LED, HIGH);
  Serial.println("Green LED ON");
  delay(DELAY_TIME);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  Serial.println("Yellow LED ON");
  delay(DELAY_ON_YELLOW_LED);
  digitalWrite(YELLOW_LED, LOW);
}
