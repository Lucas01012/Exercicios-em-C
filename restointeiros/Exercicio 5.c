#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, resto;

    printf("Informe o valor do primeiro numero:");
    scanf("%d",&n1);

    printf("Informe o valor do segundo numero:");
    scanf("%d",&n2);

   resto = n1 % n2;

   printf("O resto da divisao e: %d",resto);

}
