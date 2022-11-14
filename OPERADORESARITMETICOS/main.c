#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB;
    int soma, subtrair, multiplicar, dividir, resto;

    printf("Digite o primeiro valor:");
    scanf("%d",&valorA);

    printf("Digite o segundo valor:");
    scanf("%d",&valorB);

    soma        = valorA + valorB;
    subtrair    = valorA - valorB;
    multiplicar = valorA * valorB;
    dividir     = valorA / valorB;
    resto       = valorA % valorB;

    printf("A soma foi..........%d \n",soma);
    printf("A subtracao foi.....%d \n",subtrair);
    printf("O produto foi.......%d \n",multiplicar);
    printf("O consciente foi....%d \n",dividir);
    printf("O resto foi.........%d \n",resto);



    return 0;
}
