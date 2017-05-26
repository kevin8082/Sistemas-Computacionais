#include<stdio.h>
#include <string.h>
#include "empresa.h"

Empresa::Empresa (char * nome, char * CNPJ){
    setNome(nome);
    setCNPJ(CNPJ);
    num_funcionarios = 0;
    printf("Empresa::Construtor executado!\n");
}

char * Empresa::getNome(){
    return nome;
}

void Empresa::setNome(char *nome){
    strcpy(this->nome,nome);
}

char * Empresa::getCNPJ(){
    return CNPJ;
}

void Empresa::setCNPJ(char *CNPJ){
    strcpy(this->CNPJ,CNPJ);
}

void Empresa::AdicionarFuncionario (Funcionario f){
    funcionarios[num_funcionarios] = f;
    num_funcionarios++;
}

void Empresa::ListarFuncionarios (){
    printf("\nFuncionarios da Empresa:\n\n");
    for (int i = 0;i < num_funcionarios ;i++){
        funcionarios[i].imprime();
    }
}

void Empresa::ListarFuncionariosPorSalario (float piso){
    printf("\nFuncionarios com salario acima de %f\n\n",piso);
    for (int i = 0;i < num_funcionarios;i++){
        if (funcionarios[i].getSalario() > piso){
            printf("Nome do Funcionario: %s\n",funcionarios[i].getNome());
            printf("Salario do Funcionario: R$%d\n\n",funcionarios[i].getSalario());
        }
    }
}
