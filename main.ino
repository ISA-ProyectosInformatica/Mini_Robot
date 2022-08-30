#include <Servo.h>
#include <Otto.h>

#define STANDBY 15

Servo serv0;
Servo serv1;
Servo serv2;
Servo serv3;
Servo serv4;

Servo servs[5];

void saludar(Servo);
void home_custom();

void setup(){
    for(int i =2; i<=6; i++)
        servs[i].attach(i);
    pinMode(8, INPUT_PULLUP);
}

void loop(){
    int state;
    state = digitalRead(8);

    if(state == LOW)
        move_90(servs);
        delay(1000);
        home_custom(servs);
    /*serv0.write(0);
    serv1.write(0);
    serv2.write(0);
    serv3.write(0);
    serv4.write(0);
    delay(1500);*/
}

void home_custom(Servo[]){
    for(int i=0; i<=5; i++)
        servs[i].write(0);
    delay(1000);

    for(int i=0; i<=5; i++)
        servs[i].write(0);
}

void move_90(Servo[]){
    for (int i=0; i<=5; i++)
        servs[i].write(90);
}