#ifndef PESSOA_H
#define PESSOA_H


class Pessoa
{
protected:
    char nome[50];
    int idade;
    char cpf[12];
public:
    Pessoa();
    Pessoa (char * nome, int idade, char * cpf);
    ~Pessoa ();
    void imprime ();
};

#endif // PESSOA_H
