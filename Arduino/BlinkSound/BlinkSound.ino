/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 10;
int led2 = 9; 
int led3 = 8;

int speakerPin = 12;
int photocellPin = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);     
}
 
// the loop routine runs over and over again forever:
void loop() {
  int reading = analogRead(photocellPin);
  int pitch = 100 + reading / 4;
  tone(speakerPin, pitch);
 
  
  digitalWrite(led, HIGH);    // turn the red LEDs on (HIGH is the voltage level)               
  delay(500);                 // wait for half a second
  
  digitalWrite(led, LOW);    // turn the red LEDs off by making the voltage LOW
  delay(500);                 // wait for half a second

  digitalWrite(led2, HIGH);   // turn the yellow LEDs on 
  delay(500);                 // wait for half a second

  digitalWrite(led2, LOW);    // turn the yellow LEDs off
  delay(500);                 // wait for half a second


  digitalWrite(led3, HIGH);   // turn the green LEDs on 
  delay(500);                 // wait for half a second

  digitalWrite(led3, LOW);    // turn the green LEDs off
  delay(500);                 // wait for half a second

  
  
}
