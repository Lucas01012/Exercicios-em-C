#include <stdio.h>
#include <stdlib.h>

int main()

//Faça um programa que leia números inteiros enquanto o usuário digitar um número maior ou igual a zero. No final, antes de encerrar o programa apresentar o somatório dos números lidos.
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
