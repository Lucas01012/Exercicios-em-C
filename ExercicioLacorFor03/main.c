#include <stdio.h>
#include <stdlib.h>

int main()

//Fa�a 1 programa que escreva na tela o somat�rio dos n�meros de 0 at� 100;
{
    int i, soma = 0;

    for ( i = 0; i <= 100; i++)
        soma = soma + i;

    printf("Somatorio: %d \n",soma);
    return 0;
}
