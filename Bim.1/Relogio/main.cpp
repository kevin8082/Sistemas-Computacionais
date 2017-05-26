#include <iostream>
#include "relogio.h"

using namespace std;

int main(int argc, char *argv[]){

    Relogio * a;

    a = new Relogio;

    a->entrada();
    a->imprime();

    for (int i = 0; i < 2000; i++){
        a->incrementa_1sec();
    }
    a->imprime();
    delete a;
    return 0;
}
