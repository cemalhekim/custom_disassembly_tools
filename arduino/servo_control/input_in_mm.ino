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
  
  // Inform the user about the input options
  Serial.println("Enter the distance between the gripper fingers (14-37 mm):");
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming data as a string
    String input = Serial.readStringUntil('\n');
    
    // Convert the string to a float
    float distance = input.toFloat();
    
    // Ensure the distance is within the valid range
    if (distance >= 14 && distance <= 37) {
      // Convert distance to degrees
      int angle = (distance - 14) * 180 / 23;
      
      // Move the servo to the corresponding position
      myServo.write(angle);
      
      // Inform the user about the servo's position
      Serial.print("Servo moved to: ");
      Serial.print(angle);
      Serial.print(" degrees for a distance of ");
      Serial.print(distance);
      Serial.println(" mm between the gripper fingers");
    } else {
      // Inform the user about the invalid input
      Serial.println("Invalid input! Please enter a value between 14 and 37 mm.");
    }
  }
}
