import grafica.*;

import processing.serial.*;

Serial myPort;  // Create object from Serial class
String val;     // Data received from the serial port
//String inBuffer;
String[] token;
int x,y;

// Graph 
GPlot plot1;

void setup()
{
  // List all the available serial ports
  // printArray(Serial.list());
  
  // I know that the first port in the serial list on my mac
  // is Serial.list()[0].
  // On Windows machines, this generally opens COM1.
  // Open whatever port is the one you're using.
  String portName = Serial.list()[7]; //change the 0 to a 1 or 2 etc. to match your port
  myPort = new Serial(this, portName, 9600);
  
  // Set Up Plot 
  plot1 = new GPlot(this);
  plot1.setPos(0,0);
  plot1.setDim(600,600);
  //plot1.getTitle().setText("Title");
  //plot1.getXAxis().getAxisLabel().setText("XLabel");
  //plot1.getYAxis().getAxisLabel().setText("YLabel");
  plot1.setPointColor(color(0,0,0,255));
  plot1.setPointSize(2);
}

void draw()
{
  background(0);
  
  if ( myPort.available() > 0) 
  {  // If data is available,
  val = myPort.readStringUntil('\n');         // read it and store it in val
  println(val);
  
  // Did we actually read anything in?
    if (val != null)
    { // We did
      // Split that string into tokens
      token = splitTokens(val);
      // Convert those strings to integers
      x = Integer.parseInt(token[0]);
      y = Integer.parseInt(token[0]);
      // Print the point to terminal
      print(x);
      print("\t");
      println(y);
      // Add the new point to the graph
      plot1.addPoint(x, y);

} 
  
  println(val); //print it out in the console
  // Draw Plot
  plot1.beginDraw();
  plot1.drawBackground();
  plot1.drawBox();
  plot1.drawXAxis();
  plot1.drawYAxis();
  plot1.drawTitle();
  plot1.drawGridLines(GPlot.BOTH);
  plot1.drawPoints();
  plot1.endDraw();
}

}
