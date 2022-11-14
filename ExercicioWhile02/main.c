#include <stdio.h>
#include <stdlib.h>

int main()

//Faça um programa que leia numeros até que o usuário digite o número 0. No final do programa apresentar o somatório dos números positivos
{
    int numero, somaPos, somaNeg,  contNeg, media;

    numero = 77;
    somaPos = somaNeg = contNeg = 0;

    while (numero != 0)
    {
        printf("Digite um numero:");
        scanf("%d",&numero);

    if (numero >= 0)
    {
        somaPos = somaPos + numero;
    }
    else
    {
        somaNeg = somaNeg + numero;
        contNeg++;
    }
    }
    media = somaNeg / contNeg;

    printf("O somatorio dos numeros e:%d \n",somaPos);
    printf("A media dos negativos e:%d \n",media);





    return 0;
}
