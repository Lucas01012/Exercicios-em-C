#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, soma, sub, div, mult;

    printf("Insira o primeiro numero:");
    scanf("%f",&n1);

    printf("Insira o segundo numero:");
    scanf("%f",&n2);

    soma = n1 + n2;
    sub= n1 - n2;
    div = n1 / n2;
    mult = n1 * n2;

    printf("\nO resultado da soma dos dois numeros foi: %.2f:",soma);
    printf("\nO resultado da subtracao dos dois numeros foi: %.2f:",sub);
    printf("\nO resultado da divisao dos dois numeros foi: %.2f:",div);
    printf("\nO resultado da multiplicacao dos dois numeros foi: %.2f",mult);
}
