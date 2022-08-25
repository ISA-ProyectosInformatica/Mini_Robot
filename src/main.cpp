//Al trabajar en platformIO hace falta la libreria de arduino.
#include <Arduino.h>
//Libreria de servos de arduino.
#include <Servo.h>

//Declaramos un objeto Servo llamado serv0.
Servo serv0;
//"Inicio" del programa.
void setup() {
  serv0.attach(8);
}

//El programa en si, ejecuta indefinidamente.
void loop() {
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