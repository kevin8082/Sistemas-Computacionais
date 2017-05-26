#ifndef EMPRESA_H
#define EMPRESA_H

#include "funcionario.h"

class Empresa{

private:
    char nome[30];
    char CNPJ[18];
    Funcionario funcionarios[100];
public:
    Empresa();
    char * getNome();
    void setNome(char * nome);
    char * getCNPJ();
    void setCNPJ(char * CNPJ);
};

#endif // EMPRESA_H
