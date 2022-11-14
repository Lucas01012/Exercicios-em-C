#include <stdio.h>
#include <stdlib.h>

int main()
{
    float receita, despesa, lucro;

    printf("Qual foi a receita da empresa?");
    scanf("%f",&receita);

    printf("Quanto a empresa teve de despesa?");
    scanf("%f",&despesa);

    lucro = receita - despesa;

    printf("O lucro da empresa foi de: %.2f",lucro);


    return 0;
}
