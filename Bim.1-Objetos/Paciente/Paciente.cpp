#include "paciente.h"
#include <stdio.h>
#include <conio.h>
#include <math.h>

void Paciente::entrada(void) {
    printf("Digite o nome do paciente: ");
    gets(nome);
    printf("Digite a idade do paciente: ");
    scanf("%i",&idade);
    printf("Digite o peso do paciente: ");
    scanf("%f",&peso);
    printf("Digite a altura do paciente: ");
    scanf("%f",&altura);
}

void Paciente::imprime(void) {
    printf("\nNome: %s\n",nome);
    printf("Idade: %d\n",idade);
    printf("Peso: %f\n",peso);
    printf("Altura: %f\n",altura);
}

float Paciente::calcula_IMC(void) {
    float IMC = peso/pow(altura,2);
    return IMC;
}
