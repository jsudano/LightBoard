#include "key_message_mappings.h"
char serialVal;

void setup() 
{ 
  Serial.begin(9600); // open the arduino serial port

  // Configure pins to output to relay board
  pinMode(P4_7, OUTPUT); // Red LED
  digitalWrite(P4_7, LOW);
  pinMode(P1_0, OUTPUT); // Green LED
  digitalWrite(P1_0, LOW);
  pinMode(P1_2, OUTPUT); // Relay 1
  digitalWrite(P1_2, LOW);
  pinMode(P1_3, OUTPUT); // Relay 2
  digitalWrite(P1_3, LOW);
  pinMode(P1_4, OUTPUT); // Relay 3
  digitalWrite(P1_4, LOW);
  pinMode(P1_5, OUTPUT); // Relay 4
  digitalWrite(P1_5, LOW);
  pinMode(P1_6, OUTPUT); // Relay 5
  digitalWrite(P1_6, LOW);
  pinMode(P2_4, OUTPUT); // Relay 6
  digitalWrite(P2_4, LOW);
} 


void loop() { 
  if(Serial.available()){ 
    // Read in a byte sent from Max MSP
    // Cases correspond to on/off messages mapped to MIDI keys in Max
    serialVal = Serial.read(); 
    switch(serialVal) {
      case 101: {
        digitalWrite(P4_7, HIGH);
        digitalWrite(P1_2, HIGH);
      }
      break;
      
      case 102: {
        digitalWrite(P4_7, LOW);
        digitalWrite(P1_2, LOW);
      }
      break;
      
      case 103: {
        digitalWrite(P4_7, HIGH);
        digitalWrite(P1_3, HIGH);
      }
      break;
      
      case 104: {
        digitalWrite(P4_7, LOW);
        digitalWrite(P1_3, LOW);
      }
      break;

      case 105: {
        digitalWrite(P4_7, HIGH);
        digitalWrite(P1_4, HIGH);
      }
      break;
      
      case 106: {
        digitalWrite(P4_7, LOW);
        digitalWrite(P1_4, LOW);
      }
      break;

      case 107: {
        digitalWrite(P4_7, HIGH);
        digitalWrite(P1_5, HIGH);
      }
      break;
      
      case 108: {
        digitalWrite(P4_7, LOW);
        digitalWrite(P1_5, LOW);
      }
      break;

      case 109: {
        digitalWrite(P4_7, HIGH);
        digitalWrite(P1_6, HIGH);
      }
      break;
      
      case 110: {
        digitalWrite(P4_7, LOW);
        digitalWrite(P1_6, LOW);
      }
      break;

      case 111: {
        digitalWrite(P4_7, HIGH);
        digitalWrite(P2_4, HIGH);
      }
      break;
      
      case 112: {
        digitalWrite(P4_7, LOW);
        digitalWrite(P2_4, LOW);
      }
      break;
      
      default:
      break;
    }
  }
    
}


