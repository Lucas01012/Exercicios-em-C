#include <stdio.h>
#include <stdlib.h>

int main()

//Fa�a um programa que leia o c�digo do g�nero de uma pessoa. 0 � masculino 1 � feminino.
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
