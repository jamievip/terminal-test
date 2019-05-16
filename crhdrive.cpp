#include "Arduino.h"
#include "crhdrive.h"


crhdrive:: crhdrive(const int trigPin = 3,//Trig - grey Jumper
    const int echoPin = 9,//Echo - white Jumper
    int leftmotorforward = 5, // left motor in pin 5
    int rightmotorforward = 10,
    int leftmotorbackward = 6,
    int rightmotorbackward = 11) // right motor in pin 10
   {

  pinMode(trigPin, OUTPUT);//defines the different pins as input vs. output
  pinMode(echoPin, INPUT); // white jumper = output
  pinMode(leftmotorforward, OUTPUT);
  pinMode(rightmotorforward, OUTPUT);
  pinMode(leftmotorbackward, OUTPUT);
  pinMode(rightmotorbackward, OUTPUT);
   
   }

  void crhdrive::forward(){
    
      analogWrite(5, 90);
      analogWrite(6, 0);
      analogWrite(10, 90);
      analogWrite(11, 0);
      delay(500);
 
  }

  void crhdrive::backward(){
    
      analogWrite(5, 0);
      analogWrite(6, 90);
      analogWrite(10, 0);
      analogWrite(11, 90);
      delay(500);
 
  }

  void crhdrive::turnright(){

      analogWrite(5, 90);
      analogWrite(6, 0);
      analogWrite(10, 20);
      analogWrite(11, 0);
      delay(500);
      
  }

  void crhdrive::turnleft(){

      analogWrite(5, 20);
      analogWrite(6, 0);
      analogWrite(10, 90);
      analogWrite(11, 0);
      delay(500);
 
  }
