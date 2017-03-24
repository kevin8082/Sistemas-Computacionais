#ifndef EMPRESA_H
#define EMPRESA_H

class Empresa{

private:
    char nome[30];
    char CNPJ[18];
public:
    Empresa();
    char * getNome();
    void setNome(char * nome);
    char * getCNPJ();
    void setCNPJ(char * CNPJ);
};

#endif // EMPRESA_H
