#include <Servo.h>
#include <Otto.h>

#define STANDBY 15

Servo servs[6];

void home_custom();

void setup(){
    for(int i=2; i<=6; i++)
        servs[i].attach(i);
    pinMode(8, INPUT_PULLUP);
}

void loop(){

    if(digitalRead(8)== LOW){
        home_custom(servs);
    }
}

void home_custom(Servo[]){
    int i;

    for(i=0;i<=6; i++)
        servs[i].write(180);
    delay(1000);

    for(i=0; i<=6; i++)
        servs[i].write(0);
    delay(1000);

    for(i=0; i<=6; i++)
        servs[i].write(90);

    delay(1000);
}

void move_90(Servo[]){
    for (int i=0; i<=6; i++)
        servs[i].write(90);
}
