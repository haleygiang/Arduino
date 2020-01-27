#include <LiquidCrystal.h>
String data; 
String temp = " ";

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    // Convert data to string
    data = Serial.readStringUntil(' ');

    // Print data to LCD screen
    if (data){
      temp = String(data);
      lcd.print(temp);
      lcd.print(' ');
      }

  }
}
    
  
