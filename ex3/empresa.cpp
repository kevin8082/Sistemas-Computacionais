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
    printf("Funcionarios da Empresa:\n");
    for (int i;i < 20;i++){
        printf("Nome do Funcionario: %s",funcionarios[i].getNome());
    }
}

void Empresa::ListarFuncionariosPorSalario (float piso){
    printf("Funcionarios com salario acima de %f\n",piso);
    for (int i;i < num_funcionarios;i++){
        if (funcionarios[i].getSalario() > piso){
            printf("Nome do Funcionario: %s",funcionarios[i].getNome());
        }
    }
}
