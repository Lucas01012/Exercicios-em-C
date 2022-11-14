#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km1, km2, dtp;

    printf("Insira a quilometragem inicial do carro:");
    scanf("%f",&km1);

    printf("Insira a quilometragem final:");
    scanf("%f",&km2);



    dtp = km2 - km1;

    printf("A distancia percorrida foi de: %f",dtp);


    return 0;
}
