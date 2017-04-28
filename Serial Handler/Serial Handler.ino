
int serialvalue; // value for serial input
int started = 0; // flag for whether we've received serial yet

void setup() 
  { 
    Serial.begin(9600); // open the arduino serial port
  } 


void loop() 
{ 
  if(Serial.available()) // check to see if there's serial data in the buffer
  {
    Serial.print("serial received");
    serialvalue = Serial.read(); // read a byte of serial data
    started = 1; // set the started flag to on
  }
  if(started) { // loop once serial data has been received
    pinMode(P1_0, OUTPUT);
    digitalWrite(P1_0, HIGH);
    delay(100); // pause
  }

  pinMode(P4_7, OUTPUT);
  digitalWrite(P4_7, HIGH);
  delay(1000); // pause
  digitalWrite(P4_7, LOW);
  delay(1000); // pause


  Serial.print(5);
}
 
