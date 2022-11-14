#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,c, tri;

    printf ("Insira o valor do lado A do triangulo:");
    scanf("%d",&a);

    printf("Insira o valor do lado B do triangulo:");
    scanf("%d",&b);

    printf("Insira o valor do lado C do triangulo:");
    scanf("%d",&c);

    if (a < b + c && b < a + c && c < a + b)
    {
        printf("É um triangulo! \n");
    }
    else
    {
        printf("Nao e um triangulo \n");
        exit (0);
    }


    if (a == b && b==c)
    {
        printf("E um triangulo equilatero!");
    }
    else if (a != b && b != c)
    {
        printf("E um triangulo escaleno!");
    }
    else
    {
        printf("E um triangulo isosceles");
    }







    return 0;
}
