#include <Servo.h>

// Create a servo object
Servo myServo;

void setup() {
  // Attach the servo on pin 9 to the servo object
  myServo.attach(9);
}

void loop() {
  // Move the servo to 0 degrees
  myServo.write(0);
  delay(1000); // Wait for 1 second

  // Move the servo to 90 degrees
  myServo.write(90);
  delay(1000); // Wait for 1 second

  // Move the servo to 180 degrees
  myServo.write(180);
  delay(1000); // Wait for 1 second

  // Move the servo back to 90 degrees
  myServo.write(90);
  delay(1000); // Wait for 1 second
}
