int sensePin =0;
int ledPin = 9;
void setup()
{
 analogReference(DEFAULT);
  
  pinMode(ledPin,OUTPUT);
    
}

void loop()
{
 int val = analogRead(sensepin);
  val = constrain(val,750,900);
  
  int ledlevel =  map(val,750,900,255,0);
  
 analogWrite(ledPin,ledlevel);
}
