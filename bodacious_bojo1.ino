// array allows us not to repeat code and easyly change the code
int ledPins[] = {7, 4, 8};
int ledCount = sizeof(ledPins) / sizeof(ledPins[0]);

void setup()
{
// this loop allows the setup() to be clean, not multiple line for multiple pins
  for(int i = 0; i < ledCount; i++) {
  	pinMode(port[i], OUTPUT);
  }
}


void loop()
{
// Loop through each LED pin and turn them on one by one
  for(int i = 0; i < 3; i++){
    digitalWrite(port[i], HIGH);
    delay(3000); // this delay() is for how long the led will be on
    digitalWrite(port[i], LOW);
    delay(1000);// this delay() is for the time gap between the next command
  } 
}