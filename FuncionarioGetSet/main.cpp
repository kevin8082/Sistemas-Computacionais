#include <iostream>
#include "funcionario.h"

using namespace std;

int main(int argc, char *argv[])
{
    Funcionario x;
    char tempc[50];
    int tempi;

    printf("Nome do funcionário: ");
    gets_s(tempc);
    x.setNome(tempc);
    printf("Salário do funcionário: ");
    scanf("%d",tempi);
    x.setSalario(tempi);
    printf("Data de Admissão do funcionário: ");
    gets_s(tempc);
    x.setData_Admissao(tempc);

    x.imprime();

    system("pause");
    return 0;
}
