#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n1, n2, produto;

 printf("Insira o primeiro numero:");
 scanf("%d",&n1);

 printf("Insira o segundo numero:");
 scanf("%d",&n2);

 produto = n1 * n2;

 if (produto > 0)
    printf("O numero e positivo:+ \n");
 else
    printf("O numero e negativo:- \n");

    printf("O resultado do produto e: %d",produto);





    return 0;
}
