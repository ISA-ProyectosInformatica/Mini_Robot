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
    
}