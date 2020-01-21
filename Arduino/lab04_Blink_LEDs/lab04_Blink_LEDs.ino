/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int led2 = 12; 
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);     
}
 
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);    // turn the red LEDs on (HIGH is the voltage level)               
  digitalWrite(led4, HIGH);
  delay(500);                 // wait for half a second
  
  digitalWrite(led, LOW);    // turn the red LEDs off by making the voltage LOW
  digitalWrite(led4, LOW);
  delay(500);                 // wait for half a second

  digitalWrite(led2, HIGH);   // turn the yellow LEDs on 
  digitalWrite(led5, HIGH);
  delay(500);                 // wait for half a second

  digitalWrite(led2, LOW);    // turn the yellow LEDs off
  digitalWrite(led5, LOW);
  delay(500);                 // wait for half a second


  digitalWrite(led3, HIGH);   // turn the green LEDs on 
  digitalWrite(led6, HIGH);
  delay(500);                 // wait for half a second

  digitalWrite(led3, LOW);    // turn the green LEDs off
  digitalWrite(led6, LOW);
  delay(500);                 // wait for half a second


  // turn all LEDs on respectively by distance 100 milliseconds
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led6, HIGH);
  delay(100);

  // turn all LEDs off respectively by distance 100 milliseconds
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);
  digitalWrite(led4, LOW);
  delay(100);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led6, LOW);
  delay(100);

  // turn all LEDs on at the same time
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  delay(1000);               // wait for a second

  // turn all LEDs off at the same time
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  delay(1000);               // wait for a second
  
  
}
