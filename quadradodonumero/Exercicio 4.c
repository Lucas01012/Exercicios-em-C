#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero, quadrado;

    printf("Insira o numero no qual deseja saber o quadrado:");
    scanf("%f",&numero);

    quadrado = numero * numero;

    printf("O quadrado do numero e %.2f:",quadrado);
}
