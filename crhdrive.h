#ifndef crhdrive_h
# define crhdrive_h

# include "Arduino.h"

class crhdrive 
{
  public:
    crhdrive(const int trigPin = 3,//Trig - grey Jumper
    const int echoPin = 9,//Echo - white Jumper
    int leftmotorforward = 5, // left motor in pin 5
    int rightmotorforward = 10,
    int leftmotorbackward = 6,
    int rightmotorbackward =11); // right motor in pin 10
      
    void forward();
    void backward();
    void turnright();
    void turnleft();

  private:
  
};
#endif

