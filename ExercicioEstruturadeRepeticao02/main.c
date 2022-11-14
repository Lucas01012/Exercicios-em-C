#include <stdio.h>
#include <stdlib.h>

int main()

//Escreva um programa que leia do teclado 25 valores inteiros e escreva no final a soma dos valores que foram lidos.
{
     int i, soma;


    while (i <= 25)
    {
        printf("Insira um numero:");
        scanf("%d",&i);

    if (i <=25)
    {
        soma = soma + i;
    }


    }



    printf("O somatorio dos numeros e: %d \n",soma);

    return 0;
}
