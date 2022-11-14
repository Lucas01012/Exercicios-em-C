#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, taxa, desconto, liquido;
    char funcionario [80];

    printf("Qual o nome do funcionario?");
    gets(funcionario );

    fflush(stdin);

    printf("Insira o salario bruto do funcionario:");
    scanf("%f",&salario);

    if (salario <= 1000)
        taxa = 8;
    else if (salario <=2000)
        taxa = 9;
    else
        taxa = 10;

    desconto = salario * (taxa / 100);
    liquido = salario - desconto;

    printf("\n\n");
    printf("Nome do funcionario:%s\n",funcionario);
    printf("Salario bruto:R$%10.2f\n",salario);
    printf("Taxa de INSS:%.2f%%\n",taxa);
    printf("Desconto relativo ao INSS:R$%10.2f\n",desconto);
    printf("O salario liquido e:%10.f2",liquido);





    return 0;
}
