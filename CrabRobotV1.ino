#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;


int pos = 0;
int pos2 = 180;

void AllWrite(int custom1, int custom2){
  myservo1.write(custom1);
  myservo2.write(custom2);
  myservo3.write(custom1);
  myservo4.write(custom2);
}
void AllTurn(int TurnSpeed){
  for (pos = 0, pos2 = 180; pos <= 180, pos2 >=0; pos += 1, pos2 -=1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);
    myservo2.write(pos2);
    myservo3.write(pos2);
    myservo4.write(pos);
    delay(TurnSpeed);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180, pos2 = 0; pos >= 0, pos2 <= 180; pos -= 1, pos2 += 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);
    myservo2.write(pos2);
    myservo3.write(pos2);
    myservo4.write(pos);
    delay(TurnSpeed);                       // waits 15ms for the servo to reach the position
  }
}


void setup() {
  myservo1.attach(13);  
  myservo2.attach(12);
  myservo3.attach(11);
  myservo4.attach(10);

  
}

void loop() {
  //AllWrite(0, 0);
  //delay(500);
  //AllTurn(5);
  myservo1.write(180);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  delay(1000);
  myservo1.write(70);
  myservo2.write(110);
  delay(1000);
  

}
/*
void loop() {
  myservo1.write(pos);
  myservo2.write(pos2);
  myservo3.write(pos);
  myservo4.write(pos2);
  delay(5000);

  for (pos = 0, pos2 = 180; pos <= 180, pos2 >=0; pos += 1, pos2 -=1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);
    myservo2.write(pos2);
    myservo3.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180, pos2 = 0; pos >= 0, pos2 <= 180; pos -= 1, pos2 += 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);
    myservo2.write(pos2);
    myservo3.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
*/