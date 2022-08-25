#include <Arduino.h>
#include <Servo.h>

Servo serv0;

void setup() {
  serv0.attach(8);
}

void loop() {
  /*
  serv0.write(90);
  delay(1000);
  serv0.write(0);
  delay(1000);
  serv0.write(180);
  delay(1000);
  serv0.write(0);
  delay(1000);*/
  int i;

  for(i=0;i<=5;i++){
    serv0.write(0);
    delay(250);
    serv0.write(170);
    delay(500);
    serv0.write(150);
    delay(500);
    serv0.write(170);
    delay(500);
    serv0.write(140);
    delay(500);
    serv0.write(170);
    delay(500);
    serv0.write(0);
    delay(500);
  }
}