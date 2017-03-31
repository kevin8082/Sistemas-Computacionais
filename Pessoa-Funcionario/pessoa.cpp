#include "pessoa.h"
#include<stdio.h>
#include<string.h>

Pessoa::Pessoa()
{
    strcpy(nome,"");
    idade = 0;
    strcpy(cpf,"");
    printf("Pessoa::Construtor default executado!\n");
}

Pessoa::Pessoa(char *nome, int idade, char *cpf)
{
    strcpy(this->nome,nome);
    this->idade = idade;
    strcpy(this->cpf,cpf);
    printf("Pessoa::Construtor com parâmetros executado!\n");
}

void Pessoa::imprime()
{
    printf("%s\n",nome);
    printf("%d\n",idade);
    printf("%s\n\n",cpf);
}

Pessoa::~Pessoa()
{
    printf("Pessoa::Destrutor executado!\n");
}
