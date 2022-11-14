#include <stdio.h>
#include <stdlib.h>

int main()

//Faça 1 programa que escreva na tela o somatório dos números de 0 até 100;
{
    int i, soma = 0;

    for ( i = 0; i <= 100; i++)
        soma = soma + i;

    printf("Somatorio: %d \n",soma);
    return 0;
}
