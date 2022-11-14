#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;


    printf ("Insira o primeiro numero:");
    scanf("%f",&x);

    printf("Insira o segundo numero:");
    scanf("%f",&y);


    if (x >= 0 && y >= 0)
    {
        printf("Se encaixa no primeiro quadrante!");
    }
    else if (x < 0 && y >= 0)
    {
        printf("Se encaixa no segundo quadrante!");
    }
    else if (x >= 0 && y < 0)
    {
        printf("Se encaixa no quarto quadrante!");
    }
    else
        printf("Se encaixa no terceiro quadrante!");

    return 0;
}
