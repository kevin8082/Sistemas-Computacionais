#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "pessoa.h"

class Funcionario : public Pessoa
{
    char pis[12];
public:
    Funcionario();
    Funcionario (char * nome, int idade, char * cpf, char * pis);
    ~Funcionario ();
    void imprime ();
};

#endif // FUNCIONARIO_H
