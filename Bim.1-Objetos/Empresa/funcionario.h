#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario{

private:
    char nome[30];
    int salario;
    char data_admissao[10];
public:
    Funcionario();
    char * getNome();
    void setNome(char * nome);
    int * getSalario();
    void setSalario(int * salário);
    char * getData_Admissao();
    void setData_Admissao(char * data_admissao);

};

#endif // FUNCIONARIO_H
