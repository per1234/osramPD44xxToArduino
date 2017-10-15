#include "pinoutOsram.h"

void setup() {
  setAllOut();
  setBrightnessFull();
}

void loop() {

  for (int i = 0; i < 9999; i++) {

    int num3 = i / 1000;
    //Serial.print(num3);
    int num2 = (i - num3 * 1000) / 100;
    //Serial.print(num2);
    int num1 = (i - num3 * 1000 - num2 * 100) / 10;
    //Serial.print(num1);
    int num0 = (i - num3 * 1000 - num2 * 100 - num1 * 10);
    //Serial.println(num0);

    convert(0, num0 + 48);
    convert(1, num1 + 48);
    convert(2, num2 + 48);
    convert(3, num3 + 48);
    delay(200);

  }
}

void convert(int index, int num) {

  bool a0 = (num & (1 << 0));
  bool a1 = (num & (1 << 1));
  bool a2 = (num & (1 << 2));
  bool a3 = (num & (1 << 3));
  bool a4 = (num & (1 << 4));
  bool a5 = (num & (1 << 5));
  

  Serial.print(a5); Serial.print(a4); Serial.print(a3); Serial.print(a2); Serial.print(a1); Serial.println(a0);


  if (index == 0) {
    setDigit4(0, 0, a5, a4, a3, a2, a1, a0);
  } else if (index == 1) {
    setDigit3(0, 0, a5, a4, a3, a2, a1, a0);
  } else if (index == 2) {
    setDigit2(0, 0, a5, a4, a3, a2, a1, a0);
  } else if (index == 3) {
    setDigit1(0, 0, a5, a4, a3, a2, a1, a0);
  }



}

void clearDisplay() {
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
void setAllBlank() {
  setDigit1(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
  setDigit2(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
  setDigit3(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
  setDigit4(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
}
