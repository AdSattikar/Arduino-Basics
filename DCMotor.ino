void setup()
{
 pinMode(motorPin,OUTPUT);
}

void loop()
{
 //Accelerate Motor from 0 to 255
  for (int i=0;i<=255;i++)
  {
    analogWrite(motorPin,i);
    delay(10);
  }
 // Hold at top speed
  delay(1000);
 //Decrease speed from 255 to 0
 for(int j=255;j>=0;j--)
 {
   analogWrite(motorPin,j);
    delay(10);
 }
 // Hold at 0
}