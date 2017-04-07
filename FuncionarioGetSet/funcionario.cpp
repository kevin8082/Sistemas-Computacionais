#include "funcionario.h"
#include<stdio.h>
#include<string.h>

Funcionario::Funcionario(){
    strcpy(nome,"");
    salario = 0;
    strcpy(data_admissao,"");
    printf("Funcionario::Construtor executado!\n");
}

char * Funcionario::getNome(){
    return nome;
}

void Funcionario::setNome(char *nome){
    strcpy(this->nome,nome);
}

int Funcionario::getSalario(){
    return salario;
}

void Funcionario::setSalario(int salario){
    this->salario=salario;
}

char * Funcionario::getData_Admissao(){
    return data_admissao;
}

void Funcionario::setData_Admissao(char * data_admissao){
    strcpy(this->data_admissao,data_admissao);
}

void Funcionario::imprime()
{
    printf("Nome: %s\n", getNome());
    printf("Salario: %d\n", getSalario());
    printf("Data de Admissao: %s\n", getData_Admissao());
}

Funcionario::~Funcionario()
{
    printf("Funcionario::Destrutor executado!\n");
}
