#include <stdio.h>
#include <stdlib.h>

int main()

//Escreva um programa que leia 20 valores inteiros e escreva no final a soma dos valores positivos e a média dos valores negativos.
{
    int numero, somaPos = 0, somaNeg = 0, mediaNeg = 0, i, qtd;

    somaPos = somaNeg = mediaNeg = 0;

    for (i = 1; i <= 20; i++)

    {
        printf("Insira um valor:\n");
        scanf("%d",&numero);
    if (numero >= 0)
        somaPos = somaPos + numero;
    else if (numero < 0)
    {
        somaNeg = somaNeg + numero; //está calculando os numeros corretamente
        mediaNeg = somaNeg / i;

    }

    }

    printf("A somatoria de numeros positivos e:%d \n",somaPos);
    printf("A media dos numeros negativos e:%d \n",mediaNeg);

    system ("pause");
    return 0;
}
