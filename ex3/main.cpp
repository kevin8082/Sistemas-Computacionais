#include <iostream>
#include "empresa.h"

using namespace std;

int main(){
    // 1. Crie um objeto dinâmico do tipo Empresa
    Empresa * empresa;
    empresa = new Empresa((char*)"Kevin Enterprises",(char*)"81.334.352/0001-85");

    // 2. Adicione 5 funcionários à Empresa
    Funcionario a;
    char tempc[50];
    int tempi;

    printf("Nome do funcionario: ");
    rewind(stdin);
    gets(tempc);
    a.setNome(tempc);
    printf("Salario do funcionario: ");
    scanf("%d",&tempi);
    a.setSalario(tempi);
    printf("Data de Admissao do funcionario: ");
    rewind(stdin);
    gets(tempc);
    a.setData_Admissao(tempc);
    empresa->AdicionarFuncionario(a);

    // 3. Liste os nomes de todos funcionários da Empresa
    empresa->ListarFuncionarios();

    // 4. Liste os nomes dos funcionários que possuem salário superior a R$2000
    empresa->ListarFuncionariosPorSalario(2000);

    // 5. Delete o objeto Empresa
    delete empresa;

    return 0;
}
