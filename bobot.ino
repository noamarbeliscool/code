#include "roberto.h"
#include "clicli.h"

roberto mymotor(10, 11, 12); //in1, in2, enA
clicli mycli(mymotor);  

void setup() {
  mymotor.begin();
}

void loop() {
  mycli.run();
  
}
