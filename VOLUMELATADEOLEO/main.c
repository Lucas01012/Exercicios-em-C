#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio, altura, volume;

    printf("Insira o raio da lata: ");
    scanf("%f",&raio);

    printf("Insira a altura da lata:");
    scanf("%f",&altura);

    volume = 3.14159 * raio * raio * altura;

    printf("O volume da lata e: %f",volume);

    return 0;
}
