#include <stdio.h>
#include <stdlib.h>


int main()
{
    float salario, horas, filhos, taxa, salariob, saldof;

    printf("Qual o seu salario:");
    scanf("%f",&salario);

    printf("Quantas horas voce trabalha diariamente:");
    scanf("%f",&horas);

    printf("Quantos filhos menores de 14 anos voce tem:");
    scanf("%f",&filhos);

    if (salario <=700)
        taxa = 9.50;
    else if (salario <=1000)
        taxa = 6.50;
    else
        taxa = 1.50;

    salariob = (filhos * taxa) + salario;

    saldof = salariob - salario;


    printf("O seu salario bruto e:%.2f \n",salariob);

    printf("O seu saldo de salario familia e:%.2f",saldof);



return 0;

}
