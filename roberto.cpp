


#include "roberto.h"
#include "Arduino.h"

roberto::roberto(int in1, int in2, int enA) {
  _in1 = in1;
  _in2 = in2;
  _enA = enA;
}

void roberto::begin(){
  Serial.begin(115200);
  pinMode(_in1, OUTPUT);
  pinMode(_in2, OUTPUT);
  pinMode(_enA, OUTPUT);
}

void roberto::testwithgal(int num){
  Serial.println(num);
}
void roberto::move(int speed){
  Serial.println("move method was called!");
  digitalWrite(_in1, HIGH);
  digitalWrite(_in2, LOW);
  analogWrite(_enA, speed);

}
void roberto::neo(int r, int g, int b){
    Serial.println("neo method was called!");
    

}

