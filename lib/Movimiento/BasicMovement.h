#include <GlobalData.h>

void saludar(Servo serv){
    int i;

    serv.write(STANDBY);

    for(i=0; i<2; i++){
        serv.write(175);
        serv.write(135);
    }

    serv.write(STANDBY);
}