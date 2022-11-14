#include <stdio.h>
#include <stdlib.h>

int main()
//Faça um programa que leia números até que o usuário digite o número -1. No final antes de encerrar o programa mostrar o somatório dos numeros digitados
{
    int numero, soma;

    soma = numero = 0;

    while (numero != -1)
    {
        printf ("Digite 1 numero:");
        scanf("%d",&numero);

        if (numero != -1)
        soma = soma + numero;
    }

    printf("Somatorio dos numeros digitados: %d \n",soma);

    return 0;
}
