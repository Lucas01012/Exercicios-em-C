#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA, valorB, media;

    printf("Digite o primeiro valor:");
    scanf("%f",&valorA);

    printf("Digite o segundo valor:");
    scanf("%f",&valorB);

    media = (valorA + valorB) /2;
    printf("A media foi:%.2f \n",media);
}
