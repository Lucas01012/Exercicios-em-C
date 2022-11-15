#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inte;

    printf("Digite o coeficiente de inteligencia da pessoa:");
    scanf("%d",&inte);


    if (inte < 0 || inte > 150)
    {
        printf("Valor digitado invalido");
        exit (0);
    }

    if (inte < 30)
    {
        printf("O coeficiente de inteligencia da pessoa a define como um acefalo");
    }
    else if (inte <50)
    {
        printf("O individuo se encaixa como um debil mental");
    }
    else if (inte < 70)
    {
        printf("O individuo tem um coeficiente de inteligencia considerado regular");
    }
    else if (inte < 100)
    {
        printf("O individuo tem um coeficiente de inteligencia considerado normal");
    }
    else
    {
        printf ("O individuo tem o coeficiente de inteligencia considerado genio");
    }













    return 0;
}
