#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, n1, n2;

    printf("Insira o primeiro numero:");
    scanf("%d",&n1);

    printf("Insira o segundo numero:");
    scanf("%d",&n2);

    if (n1 > n2)
        printf("Esse e o maior numero: %d",n1);
    else
        printf("Esse e o maior numero: %d",n2);



    return 0;
}
