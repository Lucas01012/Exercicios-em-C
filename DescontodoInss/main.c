#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariob, inss,salariol, taxa;
    char nome [80];

    printf("Qual o seu nome?");
    gets(nome);

    printf("Qual o seu salario bruto?");
    scanf("%f",&salariob);



     if
        (salariob <= 1317.07)
        taxa = 8;
    else if
        (salariob <=2195.12)
        taxa = 9;
    else
        taxa = 11;

    inss = salariob * (taxa / 100);
    salariol = salariob - inss;

    if
        (inss > 482.93)
         inss= 482.93;

    printf("O nome do funcionario e:%s \n",nome);

    printf("Salario bruto:%.2f \n",salariob);

    printf("A taxa de INSS aplicavel e:%.2f \n",taxa);

    printf("O desconto aplicado relativo ao INSS e:%.2f \n",inss);

    printf("O valor do salario liquido e:%.2f",salariol);



    return 0;
}
