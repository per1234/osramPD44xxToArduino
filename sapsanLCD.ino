#include "pinoutOsram.h"

void setup() {

  setAllOut();
  setBrightnessFull();
  
}

void loop() {

  //setAllBlank();
  
  int sensorValue = analogRead(A0);

  sensorValue = map(sensorValue, 0, 1024, 0, 10);

  switch(sensorValue){

    case 0: set0toAll(); break;
    case 1: set1toAll(); break;
    case 2: set2toAll(); break;
    case 3: set3toAll(); break;
    case 4: set4toAll(); break;
    case 5: set5toAll(); break;
    case 6: set6toAll(); break;
    case 7: set7toAll(); break;
    case 8: set8toAll(); break;
    case 9: set9toAll(); break;
    case 10: set10toAll(); break;
    
  }

  delay (500);

}

void clearDisplay(){
  setCLK();
  setAdress(LOW, LOW, LOW);
  setData(HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW);
}

void setBrightnessFull() {
  setCLK();
  setAdress(LOW, LOW, LOW);
  setData(LOW, LOW, LOW, LOW, LOW, LOW, HIGH, HIGH);
}

void setBrightness25 () {
  setCLK();
  setAdress(LOW, LOW, LOW);
  setData(LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH);
}

void setAllBlank(){
  setDigit1(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
  setDigit2(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
  setDigit3(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
  setDigit4(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
}

void set0toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
}
void set1toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, 0, LOW, LOW, 1);
}
void set2toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, 0, LOW, 1, 0);
}
void set3toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, 0, 0, 1, 1);
}
void set4toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, 0, 1, 0, 0);
}
void set5toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, 0, 1, 0, 1);
}
void set6toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, 0, 1, 1, 0);
}
void set7toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, 0, 1, 1, 1);
}
void set8toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, 1, 0, 0, 0);
}
void set9toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit4(LOW, 0, 1, 1, 1, 0, 0, 1);
}
void set10toAll(){
  setDigit1(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit2(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
  setDigit3(LOW, 0, 1, 1, 0, LOW, LOW, 1);
  setDigit4(LOW, 0, 1, 1, LOW, LOW, LOW, LOW);
}


void setSto0 () {
  setDigit1(LOW, HIGH, LOW, HIGH, LOW, LOW, HIGH, HIGH);
}

void setTto0 () {
  setDigit1(LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, LOW);
}
















