#include <stdio.h>
#include <stdlib.h>

int main()

//Faça um programa que leia um numero inteiro qualquer, identificar se o numero digitado está na faixa de 0 e 100
{
    int numero;

    printf("Digite um numero:");
    scanf("%d",&numero);

    if (numero >= 0 && numero <= 100)
    {
        printf("O numero esta na faixa de 0 e 100!");
    }
    else
    {
        printf("O numero esta fora da faixa de 0 e 100");
    }







    return 0;
}
