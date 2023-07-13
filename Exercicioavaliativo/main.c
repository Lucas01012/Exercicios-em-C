#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
setlocale(LC_ALL, "Portuguese");

int i, j;

float vendas[12][4], total[12] = {0}, totalanual, totalsem[4];

char meses[13][30] = {
"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho" ,"Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"
};


for (i = 0; i < 12; i++)
{
    for (j = 0; j < 4; j++)
    {
        printf("Insira os valores do mês de %s, semana %d:\n",meses[i],j + 1);
        scanf("%f",&vendas[i][j]);
        total[i] += vendas[i][j];
        totalanual += vendas[i][j];
        totalsem[j] += vendas[i][j];
    }
}
printf("\n\n");

for (i = 0; i < 12; i++)
{
    printf("O total de vendas do mês de %s foi R$:%.2f\n",meses[i],total[i]);
}

 printf("\n\n");

for (j = 0; j < 4; j++)
    {
        printf("O valor total em vendas ocorridas na %dº semana dos meses foram de R$:%.2f\n",j + 1,totalsem[j]);
    }

printf("\n\n");

printf("Total vendido no ano R$:%.2f:",totalanual);
return 0;

}
