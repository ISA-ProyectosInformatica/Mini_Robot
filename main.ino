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

void setup(){
    Serial.print("servs[0]");
    serv1.attach(2);
    serv2.attach(3);
    serv3.attach(4);
    serv4.attach(5);
    serv0.attach(6);
}

void loop(){
    serv0.write(60);
    serv1.write(60);
    serv2.write(60);
    serv3.write(60);
    serv4.write(60);
    delay(1500);
    serv0.write(0);
    serv1.write(0);
    serv2.write(0);
    serv3.write(0);
    serv4.write(0);
    delay(1000000);
    /*serv0.write(90);
    serv1.write(90);
    serv2.write(90);
    serv3.write(90);
    serv4.write(90);
    delay(1500);*/
}

void saludar(Servo serv){
    int i;

    serv.write(STANDBY);

    for(i=0; i<2; i++){
        delay(500);
        serv.write(175);
        delay(500);
        serv.write(135);
    }

    serv.write(STANDBY);
}
