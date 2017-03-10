#include "relogio.h"
#include<stdio.h>

void Relogio::entrada(void){
    printf("Digite a Hora: ");
    scanf("%d",&hora);
    printf("Digite os minutos: ");
    scanf("%d",&min);
    printf("Digite os segundos: ");
    scanf("%d",&sec);
}

void Relogio::imprime(void){
    printf("A hora é: %02d:%02d:%02d\n",hora,min,sec);
}

void Relogio::incrementa_1sec(void){
    sec +=sec;
    if (sec = 60){
        sec = 0;
        min++;
        if (min = 60){
            min = 0;
            hora++;
            if (hora >= 24){
                hora = 0;
            }
        }
    }
}
