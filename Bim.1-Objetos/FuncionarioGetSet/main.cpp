#include <iostream>
#include "funcionario.h"

using namespace std;

int main(int argc, char *argv[])
{
    Funcionario x;
    char tempc[50];
    int tempi;

    printf("Nome do funcionario: ");
    rewind(stdin);
    gets_s(tempc);
    x.setNome(tempc);
    printf("Salario do funcionario: ");
    scanf("%d",&tempi);
    x.setSalario(tempi);
    printf("Data de Admissao do funcionario: ");
    rewind(stdin);
    gets_s(tempc);
    x.setData_Admissao(tempc);

    x.imprime();

    return 0;
}
