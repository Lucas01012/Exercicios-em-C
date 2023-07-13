#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;

    printf("\nAbaixo iremos pedir para que voce insira em sequencia o dia, mes e ano!");

    printf("\nInsira o dia:");
    scanf("%d",&dia);

    printf("\nInsira o mes:");
    scanf("%d",&mes);

    printf("\nInsira o ano:");
    scanf("%d",&ano);

    printf("\nA data inserida foi: %d/%d/%d",dia,mes,ano);

}
