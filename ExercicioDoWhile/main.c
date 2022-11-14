#include <stdio.h>
#include <stdlib.h>
//Faça 1 programa que tenha o menu abaixo e execute as instruções de cada opção do menu

// 0 encerra o programa
//1 incluir uma panela no estoque
//2 incluir uma chaleira no estoque
//3 incluir 1 prato no estoque
//4 relatório de inclusoes

    //Qualquer outro codigo informar que a opção é inválida
int main()

{
     int opcao, contPan, contCha, contPra;

     contPan = contCha = contPra = 0;

     do
     {
        system ("cls");
        printf("Menu de opcoes \n");
        printf("0 - encerrar o programa \n");
        printf("1 - Incluir uma panela no estoque \n");
        printf("2 - Incluir uma chaleira no estoque \n");
        printf("3 - Incluir um prato no estoque \n");
        printf("4 - Relatorio de inclusoes \n");
        printf("Digite uma opcao: ");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 0:
            printf ("Encerrando o programa!");
            break;
            case 1:
            contPan++;
            break;
            case 2:
            contCha++;
            break;
            case 3:
            contPra++;
            break;
            case 4:
            printf("Relatorio de inclusoes: \n");
            printf ("Panela: %d \n",contPan);
            printf("Chaleiras:%d \n",contCha);
            printf("Pratos:%d \n",contPra);
            system("Pause");
            break;
            default:
            printf("Codigo invalido \n");
            break;

        }

     }
     while (opcao != 0);


    return 0;
}
