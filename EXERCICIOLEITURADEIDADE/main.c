#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  idade, dias, horas, minutos, segundos, ano;
    char  pessoa;

    printf("Qual o nome da pessoa?");
    scanf("%s",&pessoa);

    printf("Em que ano esta pessoa nasceu?");
    scanf("%f",&ano);

    idade =  2022 - ano;
    dias  =  365 * idade;
    horas =  idade * 24 * 365;
    minutos = 60 * 24 * 365 * idade;
    segundos = 31536.00 * idade;



    printf("A idade da pessoa e:  %.2f \n",idade);

    printf("Ela tem essa quantidade de dias vividos: %.2f \n",dias);

    printf("Ela viveu essa quantidade de horas:  %.2f \n",horas);

    printf("Ela viveu essa quantia de minutos: %.2f \n",minutos);

    printf("Total de segundos vividos: %f \n",segundos);


    return 0;
}
