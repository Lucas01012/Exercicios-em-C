#include <stdio.h>
#include <stdlib.h>

int main()
{
   float nota1, nota2, nota3, nota4, nota5, media;
   char  aluno [80];


    printf("Qual e o nome do aluno? \n");
    fgets(aluno,40, stdin);



   fflush(stdin);


   printf("Insira a nota em matematica: ");
   scanf("%f",&nota1);
   printf("Insira a nota em portugues: ");
   scanf("%f",&nota2);
   printf("Insira a nota em fisica: ");
   scanf("%f",&nota3);
   printf("Insira a nota em quimica: ");
   scanf("%f",&nota4);
   printf("Insira a nota em biologia: ");
   scanf("%f",&nota5);


   media = (nota1 + nota2 + nota3 + nota4 + nota5) /5;

  printf("A media do (a) aluno (a) %s %.2faluno, media);












    return 0;
}
