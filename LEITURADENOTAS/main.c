#include <stdio.h>
#include <stdlib.h>

//ESTE PROGRAMA VAI LER O NOME E AS 3 NOTAS DOS ALUNOS
//CALCULAR A MEDIA
//DEMONSTRAR O RESULTADO

int main()
{
    char nome;
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno:");
    gets(nome);

    fflush(stdin);

    printf("Digite a primeira nota:");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:");
    scanf("%f",&nota2);
    printf("Digite a terceira nota:");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("O aluno tem media: %s %.2f \n", nome,media);





    return 0;
}
