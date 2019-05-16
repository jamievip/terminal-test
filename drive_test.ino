#include "crhdrive.h"

crhdrive LD(3, 9, 5, 10, 6, 11);

void setup() {}

void loop() {
  // put your main code here, to run repeatedly:
  
LD.forward();
delay(1000);
LD.backward();
delay(1000);
LD.turnright();
delay(1000);
LD.turnleft();
delay(1000);
    

}


