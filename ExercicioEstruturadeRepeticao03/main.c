#include <stdio.h>
#include <stdlib.h>

int main()

//Fa�a um programa que leia n�meros inteiros enquanto o usu�rio digitar um n�mero maior ou igual a zero. No final, antes de encerrar o programa apresentar o somat�rio dos n�meros lidos.
{
    int i;
    int somatorio = 0;

    do
    {
        printf("Insira um numero:");
        scanf("%d",&i);
        if (i >= 0)
        somatorio = somatorio + i;
    }
    while (i >= 0);

    printf("A soma dos valores positivos e:%d \n",somatorio);


    return 0;


}
