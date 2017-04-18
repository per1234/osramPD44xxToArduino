//here directions from osram PD44xx pins to arduino mega gio pins and also set arduino pinmode

// clock and not clock wires goes pared
int CE0 = 12;//blue wire
int CE1 = 13;//red wire 

//data bus pins are yellow
int D0 = 0; // ***is marked with yellow tube
int D1 = 1;
int D2 = 2;
int D3 = 3;
int D4 = 4;
int D5 = 5;
int D6 = 6;
int D7 = 7;

//read and write pins
int readPin = 20; //yellow wire
int writePin = 21; //green wire

//adress input pins green
int Adr0 = 14;
int Adr1 = 15;
int Adr2 = 16; // ***is marked with yellow tube

//set all pint to LCD as output
void setAllOut(){
  pinMode(CE0, OUTPUT);
  pinMode(CE1, OUTPUT);
  
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);

  pinMode(readPin, OUTPUT);
  pinMode(writePin, OUTPUT);

  pinMode(Adr0, OUTPUT);
  pinMode(Adr1, OUTPUT);
  pinMode(Adr2, OUTPUT);
  
}

//function to shorten digitalWrite to save space and be more readable
void w(int pin, bool mode){
  digitalWrite(pin, mode);
}

//function prepares the clock pins and write and read pins
void setCLK(){
  
  w(CE0, LOW);w(CE1, HIGH);//sets the clock
  w(readPin, HIGH);w(writePin, LOW);//sets write and read pins
  
}


//function to manually input adress
void setAdress(bool adr2, bool adr1, bool adr0){
  
  w(Adr2, adr2);w(Adr1, adr1);w(Adr0, adr0);
  
}

//function to manually input data
void setData(bool d7, bool d6, bool d5, bool d4, bool d3, bool d2, bool d1, bool d0){

  w(D7, d7);w(D6, d6);w(D5, d5);w(D4, d4);w(D3, d3);w(D2, d2);w(D1, d1);w(D0, d0);
  
}



// these functions allow to set data to specific digit
void setDigit1(bool d7, bool d6, bool d5, bool d4, bool d3, bool d2, bool d1, bool d0){
  setCLK();
  setAdress(HIGH, HIGH, HIGH);
  setData(d7, d6, d5, d4, d3, d2, d1, d0);
}
void setDigit2(bool d7, bool d6, bool d5, bool d4, bool d3, bool d2, bool d1, bool d0){
  setCLK();
  setAdress(HIGH, HIGH, LOW);
  setData(d7, d6, d5, d4, d3, d2, d1, d0);
}
void setDigit3(bool d7, bool d6, bool d5, bool d4, bool d3, bool d2, bool d1, bool d0){
  setCLK();
  setAdress(HIGH, LOW, HIGH);
  setData(d7, d6, d5, d4, d3, d2, d1, d0);
}
void setDigit4(bool d7, bool d6, bool d5, bool d4, bool d3, bool d2, bool d1, bool d0){
  setCLK();
  setAdress(HIGH, LOW, LOW);
  setData(d7, d6, d5, d4, d3, d2, d1, d0);
}

