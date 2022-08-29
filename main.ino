#include <Servo.h>
#include <Otto.h>

#define STANDBY 15

Servo serv0;

void saludar(Servo);

void setup(){
    serv0.attach(6);
}

void loop(){
    saludar(serv0);
}

void saludar(Servo serv){
    int i;

    serv.write(STANDBY);

    for(i=0; i<2; i++){
        delay(1000);
        serv.write(175);
        delay(1000);
        serv.write(135);
    }

    serv.write(STANDBY);
}
