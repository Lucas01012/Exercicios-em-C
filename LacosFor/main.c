#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resultado;
    int i;

    for ( i = 0; i < 5; i++)

    {
        printf("Digite 1 numero:");
        scanf("%d",&numero);
        resultado = numero * 3;
        printf("O resultado foi:%d \n",resultado);
    }


    return 0;
}
