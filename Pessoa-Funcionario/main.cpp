#include <iostream>
#include "funcionario.h"

using namespace std;

int main(int argc, char *argv[])
{
    Funcionario x((char*)"Joao",21,(char*)"12345",(char*)"54321");
    x.imprime();
    return 0;
}
