#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero:");
    scanf("%d",&numero);

    if (numero > 0)
        printf("O numero e positivo \n");
    else if (numero < 0)
        printf("O numero e negativo");
    else
        printf("O numero e zero");

    return 0;
}
