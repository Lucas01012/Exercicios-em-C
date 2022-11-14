#include <stdio.h>
#include <stdlib.h>

int main()
//Escreva um programa que leia dois números inteiros quaisquer. No final escrever os números entre eles.
{
    int x, y, i;

    printf("Insira um numero:");
    scanf("%d",&x);

    printf("Insira um numero:");
    scanf("%d",&y);


    if (x > y)
    {
    for (i = x; i >= y; i--)
    printf("%d \n",i);
    }

    else if (y > x)
    {
    for (i = x; i <= y; i++)

    printf("%d \n",i);
    }
    else
    printf("Os valores sao iguais");






    return 0;

}
