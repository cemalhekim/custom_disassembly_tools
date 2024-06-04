#include <Servo.h>

// Define the servo pin
const int servoPin = 9;

// Create a servo object
Servo myServo;

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
  
  // Attach the servo to its pin
  myServo.attach(servoPin);
  
  // Move the servo to the home position (0 degrees)
  myServo.write(0);
  
  // Wait for the servo to reach the home position
  delay(1000);
  
  // Inform the user about the input format
  Serial.println("Enter servo position (0-180 degrees):");
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming data as a string
    String input = Serial.readStringUntil('\n');
    
    // Convert the string to an integer
    int angle = input.toInt();
    
    // Ensure the angle is within the valid range
    if (angle >= 0 && angle <= 180) {
      // Move the servo to the desired position
      myServo.write(angle);
      
      // Inform the user about the servo's position
      Serial.print("Servo moved to: ");
      Serial.print(angle);
      Serial.println(" degrees");
    } else {
      // Inform the user about the invalid input
      Serial.println("Invalid input! Please enter a value between 0 and 180.");
    }
  }
}
