// pins
// red - 11
// blue - 10
// buzzer - 9

void setup() 
  {
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
}

void loop() {

analogWrite(11,255);
analogWrite(10,0);
analogWrite(9,255);
delay(300);

analogWrite(11,0);
analogWrite(10,255);
analogWrite(9,50);
delay(300);
}
