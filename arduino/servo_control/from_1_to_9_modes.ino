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
  Serial.println("Enter a number (1-9) to move the servo to a predefined position:");
  Serial.println("1: 0 degrees");
  Serial.println("2: 15 degrees");
  Serial.println("3: 30 degrees");
  Serial.println("4: 45 degrees");
  Serial.println("5: 60 degrees");
  Serial.println("6: 90 degrees");
  Serial.println("7: 120 degrees");
  Serial.println("8: 150 degrees");
  Serial.println("9: 180 degrees");
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming data as a single character
    char input = Serial.read();
    
    // Determine the target angle based on the input
    int angle = -1; // Initialize to an invalid angle
    switch (input) {
      case '1':
        angle = 0;
        break;
      case '2':
        angle = 15;
        break;
      case '3':
        angle = 30;
        break;
      case '4':
        angle = 45;
        break;
      case '5':
        angle = 60;
        break;
      case '6':
        angle = 90;
        break;
      case '7':
        angle = 120;
        break;
      case '8':
        angle = 150;
        break;
      case '9':
        angle = 180;
        break;
      default:
        Serial.println("Invalid input! Please enter a number between 1 and 9.");
        break;
    }
    
    // If a valid angle was determined, move the servo
    if (angle != -1) {
      myServo.write(angle);
      Serial.print("Servo moved to: ");
      Serial.print(angle);
      Serial.println(" degrees");
    }
  }
}
