#include <LiquidCrystal.h>
int data; 
String temp = " ";

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  // lcd.print("michelle obama");
  Serial.begin(9600);
  Serial.println("Ready");
}

void loop() {
  if (Serial.available()){
    Serial.println("available");
    
    data = Serial.read();
    if (data){
      temp = String(data);
      Serial.println(temp);
      }
      
    //Serial.println(data);
    //temp = String(data);
    //Serial.print(temp);
    //lcd.print(temp);
  }
  else{
    Serial.println("not available");
    }
    
    delay(1000);
  }
    
  
