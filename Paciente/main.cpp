#include <iostream>
#include "Paciente.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    Paciente p1;

    p1.entrada();
    p1.imprime();
    printf("IMC: %f\n", p1.calcula_IMC());

    return 0;
}

