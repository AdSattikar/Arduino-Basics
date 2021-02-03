/*
 Debounce

 Each time the input pin goes from LOW to HIGH (e.g. because of a push-button
 press), the output pin is toggled from LOW to HIGH or HIGH to LOW.  There's
 a minimum delay between toggles to debounce the circuit (i.e. to ignore
 noise).

 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached from pin 2 to +5V
 * 10K resistor attached from pin 2 to ground

 * Note: On most Arduino boards, there is already an LED on the board
 connected to pin 13, so you don't need any extra components for this example.

 */

int switchPin = 2;
int ledpin = 13;
bool lastButton = LOW;
bool currentButton = LOW;
bool ledOn = false;

  
void setup()
{
  pinMode(switchPin,INPUT);
  pinMode(ledpin,OUTPUT);
}
bool debounce(bool last)
{
  boolean current = digitalRead(switchPin);
  if (last!= current)
  {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}
          
void loop()
{
  currentButton = debounce(lastButton);
  if(lastButton == LOW && currentButton == HIGH)
  {
    ledOn = !ledOn;
    
  }
  
  lastButton = currentButton;
  
  digitalWrite(ledpin,ledOn);
}