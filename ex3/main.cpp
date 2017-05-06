#include <iostream>
#include "empresa.h"

using namespace std;

void criafunc(Empresa *empresa);

int main(){
    // 1. Crie um objeto dinâmico do tipo Empresa
    Empresa * empresa;
    empresa = new Empresa((char*)"Kevin Enterprises",(char*)"81.334.352/0001-85");

    // 2. Adicione 5 funcionários à Empresa
    criafunc(empresa);
    criafunc(empresa);
    criafunc(empresa);
    criafunc(empresa);
    criafunc(empresa);

    // 3. Liste os nomes de todos funcionários da Empresa
    empresa->ListarFuncionarios();

    // 4. Liste os nomes dos funcionários que possuem salário superior a R$2000
    empresa->ListarFuncionariosPorSalario(2000);

    // 5. Delete o objeto Empresa
    delete empresa;

    return 0;
}

void criafunc(Empresa *empresa){
    Funcionario tempfunc;
    char tempc[50];
    int tempi;

    printf("Nome do funcionario: ");
    rewind(stdin);
    gets(tempc);
    tempfunc.setNome(tempc);
    printf("Salario do funcionario: ");
    scanf("%d",&tempi);
    tempfunc.setSalario(tempi);
    printf("Data de Admissao do funcionario: ");
    rewind(stdin);
    gets(tempc);
    tempfunc.setData_Admissao(tempc);
    empresa->AdicionarFuncionario(tempfunc);
}
