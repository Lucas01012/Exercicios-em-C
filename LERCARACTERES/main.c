#include <stdio.h>
#include <stdlib.h>

int main()
{
   char letra;
   char nome [10000]; //string é o que identifica uma sequencia de caracteres

   printf("Digite uma letra:");
   scanf("%c",&letra);
   fflush(stdin); //comando para limpar o buffer de teclado



   printf("Digite um nome: \n");
   gets(nome);

   printf("Nome digitado: %s \n",nome);


    return 0;
}
