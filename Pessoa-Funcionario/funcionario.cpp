#include "funcionario.h"
#include<stdio.h>
#include<string.h>

Funcionario::Funcionario()
{
    strcpy(pis,"");
    printf("Funcionario::Construtor default executado!\n");
}

Funcionario::Funcionario(char *nome, int idade, char *cpf, char *pis)
{
    strcpy(this->nome,nome);
    this->idade = idade;
    strcpy(this->cpf,cpf);
    strcpy(this->pis,pis);
    printf("Funcionario::Construtor com parâmetros executado!\n");
}

Funcionario::~Funcionario()
{
    printf("Funcionario::Destrutor executado!\n");
}

void Funcionario::imprime()
{
    Pessoa::imprime();
    printf("%s\n",pis);
}
