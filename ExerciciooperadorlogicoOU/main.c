#include <stdio.h>
#include <stdlib.h>

int main()

//Faça um programa que leia o código do gênero de uma pessoa. 0 é masculino 1 é feminino.
{
    int codigo;

    printf("Digite o codigo do genero de uma pessoa:");
    scanf("%d",&codigo);

    if (codigo == 0 || codigo == 1)
    {
        printf("O codigo digitado e valido!");
    }
    else
    {
        printf("O codigo digitado e invalido!");
    }

    return 0;
}
