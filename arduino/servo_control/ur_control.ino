#include <Servo.h>

const int gripperPin = 9; // Pin connected to the servo control
const int digitalInput1 = 8; // D8 connected to M8 Digital Output 1
const int digitalInput2 = 7; // D7 connected to M8 Digital Output 2

Servo gripperServo; // Create a servo object

void setup() {

  gripperServo.attach(gripperPin); // Attach the servo to the specified pin
  pinMode(digitalInput1, INPUT);
  pinMode(digitalInput2, INPUT);

}

void loop() {

  int input1State = digitalRead(digitalInput1);
  int input2State = digitalRead(digitalInput2);

  // Control the gripper based on the input signals
  if (input1State == HIGH) {
    // Set the gripper to 90 degrees
    gripperServo.write(90);

  } else if (input2State == HIGH) {
    // Set the gripper to 180 degrees
    gripperServo.write(180);

  }
  
}
