#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, perimetro;

    printf("Insira o valor do lado do quadrado:");
    scanf("%d",&valor);

    perimetro = valor * 4;

    printf("O valor do perimetro do quadrado e: %d",perimetro);
}
