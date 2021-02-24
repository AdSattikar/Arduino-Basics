/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a
  range from 0 to 255  and uses the result to set
  the pulsewidth modulation (PWM) of an output
  pin.  Also prints the results to the serial
  monitor.

  The circuit:
  * potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the
    analog pin. side pins of the potentiometer go
    to +5V and ground
  * LED connected from digital pin 9 to ground

*/
int sensePin =0;
int ledPin =9;

void setup()
{
  analogReference(DEFAULT);
  pinMode(ledPin,OUTPUT);
    
}

void loop()
{
  // read the analog in value:
  int val = analogRead(sensePin);
  val = constrain(val,750,900);
  // map it to the range of the analog out:
  int ledLevel = map(val, 750, 900, 255, 0);
  // change the analog out value:
  analogWrite(ledPin, ledLevel);
 
  delay(2); // Wait for 2 millisecond(s)
}