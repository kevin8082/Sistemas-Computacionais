#ifndef EMPRESA_H
#define EMPRESA_H

#include "funcionario.h"

class Empresa{
private:
    char nome[30];
    char CNPJ[18];
    int num_funcionarios;
    Funcionario funcionarios[20];
public:
    Empresa (char * nome, char * cnpj);
    char * getNome();
    void setNome(char * nome);
    char * getCNPJ();
    void setCNPJ(char * CNPJ);
    void AdicionarFuncionario (Funcionario f);
    void ListarFuncionarios ();
    void ListarFuncionariosPorSalario (float piso);
};

#endif // EMPRESA_H
