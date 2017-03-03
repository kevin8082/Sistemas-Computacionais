#include "Paciente.h"
#include <stdio.h>>
#include <conio.h>

void Paciente::entrada(void) {

	printf("Digite o nome do paciente: ");
	fgets(nome,50,stdin);

	printf("Digite a idade do paciente: ");
	scanf("%f",idade);

	printf("Digite o peso do paciente: ");
	scanf("%f",peso);

	printf("Digite a altura do paciente: ");
	scanf("%f",altura);

}

void Paciente::imprime(void) {



}

float Paciente::calcula_IMC(void) {



}
