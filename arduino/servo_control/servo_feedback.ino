#include <Servo.h>

// Define the servo pin
const int servoPin = 9;

Servo myservo; // create servo object to control a servo

void setup() {
  
Serial.begin(9600);
  
myservo.attach(servoPin); // attaches the servo on pin 9 to the servo object
  
myservo.attach(6);
  
}
void loop() {
int potpin = A2;
int val;
int potpin2 = A1;
int val2;
val = analogRead(potpin); // reads the value of the potentiometer (value between 0 and 1023)
val2 = analogRead(potpin2);
val = map(val, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)
val2 = map(val2 , 0 ,1023 , 0 , 180 );
myservo.write(val); // sets the servo position according to the scaled value
myservo.write(val2);
delay(15); // waits for the servo to get there
float degree = val + (0/108);
float degree2 = val2 + (0/108);
Serial.println(degree , degree2);
Serial.print(" current servo position in degrees = " );
}
