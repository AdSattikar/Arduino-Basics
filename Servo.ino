
#include <Servo.h>

Servo AdServo;
int servoPin = 9;
void setup()
{
  //Attach the servo object
	AdServo.attach(servoPin);
  
}

void loop()
{
  // sweep the servo from 0 to 180 degrees in steps
  // of 10 degrees
  for (int i = 0; i <= 180; i += 10)
  {
    // tell servo to go to position in variable 'pos'
    AdServo.write(i);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (int i = 180; i >= 0; i -= 1)
  {
    // tell servo to go to position in variable 'pos'
    AdServo.write(i);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
}