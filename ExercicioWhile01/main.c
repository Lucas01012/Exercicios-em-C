#include <stdio.h>
#include <stdlib.h>

int main()
//Fa�a um programa que leia n�meros at� que o usu�rio digite o n�mero -1. No final antes de encerrar o programa mostrar o somat�rio dos numeros digitados
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
