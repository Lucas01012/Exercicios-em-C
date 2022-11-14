#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;
    char aluno [80];

    printf("Qual o nome do aluno?:");
    gets(aluno);

    fflush(stdin);

    printf("Insira a nota em matematica:");
    scanf("%f",&n1);

    printf("Insira a nota em portugues:");
    scanf("%f",&n2);

    printf("Insira a nota em historia:");
    scanf("%f",&n3);

    printf("Insira a nota em geografia:");
    scanf("%f",&n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 6)
        printf ("O aluno esta aprovado \n");
    else
        printf ("O aluno esta reprovado \n");

    printf("A media do aluno: %s e %f",aluno, media);
    return 0;
}
