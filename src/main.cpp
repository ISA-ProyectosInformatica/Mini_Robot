//Al trabajar en platformIO hace falta la libreria de arduino.
#include <Arduino.h>

//Libreria de servos de arduino.
#include <Servo.h>

//Librearia desarrollada por nosotros con el objetivo
//de almacenar funciones de movimiento basicas
#include <BasicMovement.h>
#include <GlobalData.h>

//Libreria de Otto (nombre del proyecto del robot)
#include <Otto.h>

Servo serv0;
//"Inicio" del programa.
void setup() {
  serv0.attach(8);
}

//El programa en si, ejecuta indefinidamente.
void loop() {
  serv0.write(STANDBY);
  saludar(serv0);
}