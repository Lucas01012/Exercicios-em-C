#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, soma, sub, mult, div;

printf("Insira o primeiro numero:");
scanf("%f",n1);

printf("Insira o segundo numero:");
scanf("%f",n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

printf("O resultado da soma foi:",soma);
printf("O resultado da subtracao foi:",sub);
printf("O resultado da multiplicacao foi:",mult);
printf("O resultado da divisao foi:",div);

return 0;
}
