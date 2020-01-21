import grafica.*;

import processing.serial.*;

int lf = 10;    // Linefeed in ASCII
float num = 0;
Serial myPort;

// at the top of the program:
float xPos = 0; // horizontal position of the graph
float yPos = 0; // vertical position of the graph

void setup () {
  size(600, 200);        // window size
 
  // Open whatever port is the one you're using.
  String portName = Serial.list()[7]; //change the 0 to a 1 or 2 etc. to match your port
  myPort = new Serial(this, portName, 9600);
  println(portName);
  
  // color of the background
  background(#081640);
  
}

void serialEvent (Serial myPort) {
  // get the byte:
  
  // float inByte = myPort.read();
  // print it:
  //}
  /*while (myPort.available() > 0) {
    myString = myPort.readStringUntil(lf);
    if (myString != null) {
  print(myString);  // Prints String
  num=float(myString);  // Converts and prints float
  println(num);
  */
  
  
  //yPos = height; // change yPos based on the last byte you read from the serial port
}

void draw () {
  
  while (myPort.available() > 0){
    String myString = myPort.readStringUntil(lf);
    if (myString != null){
      println("Distance: ", myString);
      num=float(myString);  // Converts and prints float
      //println(num);
    }
  }
   // draw the line in a pretty color:
  stroke(#A8D9A7);
  line(xPos, height, xPos, height - num);
  
  // at the edge of the screen, go back to the beginning:
  if (xPos >= width) {
    xPos = 0;
    // clear the screen by resetting the background:
    background(#081640);
  } else {
    // increment the horizontal position for the next reading:
    xPos++;
  }
}
