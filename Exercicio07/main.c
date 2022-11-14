#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas, opcao;
    float peso;

    pessoas = 0;
    peso = 0;


do
{


    printf ("Insira uma opcao:");
    scanf("%d",&opcao);

    switch (opcao)
{



    case 0:
    printf ("Encerrando o programa!");
    break;

    case 1:
    pessoas = pessoas + 1;
    peso = peso + peso;
    printf("Entrou uma pessoa no elevador %d \n");

    printf("Qual o peso da pessoa?");
    scanf("%f",&peso);
    break;

}

}
while (opcao != 0);

















return 0;
}
