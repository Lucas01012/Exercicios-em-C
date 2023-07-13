#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define reservas 60
#define avioesmax 4

int i, j;
int opcao;

void menu()
{
    printf("Op��o 1: CADASTRAR A NUMERA��O DAS AERONAVES:\n");
    printf("Op��o 2: CADASTRAR O N�MERO DE LUGARES DISPON�VEIS EM CADA AVI�O:\n");
    printf("Op��o 3: RESERVAR PASSAGEM:\n");
    printf("Op��o 4: CONSULTAR POR UMA AERONAVE:\n");
    printf("Op��o 5: CONSULTAR POR UM PASSAGEIRO:\n");
    printf("Op��o 6: ENCERRAR O PROGRAMA:\n\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int continuar = 1;
    int indice = 0;
    int aeronaveEncontrada = 0;
    int numAeronave;
    char nomePassageiro[100];
    int passageiroencontrado = 0;


    struct dados
    {
        int aeronaves;
        int numreserva;
        char nome[100];
        int idade[100];
        int assentos;
    } avioes[avioesmax];


    while (continuar)
    {
        menu();
        printf("Informe a op��o que voc� deseja acessar: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("CADASTRAR A NUMERA��O DAS AERONAVES!\n");
            if (indice < avioesmax)
            {
                printf("Insira a numera��o da aeronave: ");
                scanf("%d", &avioes[indice].aeronaves);
                indice++;
            }
            else
            {
                printf("N�mero m�ximo de aeronaves cadastradas!\n\n");
            }
            break;

        case 2:
            printf("CADASTRAR O N�MERO DE LUGARES DISPON�VEIS EM CADA AVI�O\n");
            for (i = 0; i < indice; i++)
            {
                do
                {
                    printf("Informe quantos assentos est�o dispon�veis na aeronave %d (m�ximo de 60): ", avioes[i].aeronaves);
                    scanf("%d", &avioes[i].assentos);
                    if (avioes[i].assentos > reservas)
                    {
                        printf("N�mero de assentos inv�lido! Por favor, insira um valor igual ou inferior a 60.\n");
                    }
                }
                while (avioes[i].assentos > reservas);
            }
            break;
        case 3:
            printf("RESERVAR PASSAGEM\n");

            printf("Informe o n�mero da aeronave na qual deseja reservar passagem: ");
            scanf("%d", &numAeronave);

            for (int i = 0; i < indice; i++)
            {
                if (numAeronave == avioes[i].aeronaves)
                {
                    aeronaveEncontrada = 1;

                    if (avioes[i].assentos == 0)
                    {
                        printf("A aeronave est� totalmente ocupada, por favor escolha outra para realizar sua reserva.\n");
                        break;
                    }

                    printf("Qual o seu nome? ");
                    scanf("%s", avioes[i].nome);
                    fflush(stdin);

                    printf("Reserva confirmada!\n");
                    avioes[i].numreserva++;
                    avioes[i].assentos--;

                    break;
                }
            }

            if (!aeronaveEncontrada)
            {
                printf("Aeronave n�o encontrada, por favor informe outra numera��o!\n");
            }

            break;

    case 4:
            printf("CONSULTAR POR UMA AERONAVE\n");

            printf("Digite a numera��o da aeronave da qual deseja consultar as reservas realizadas: ");
            scanf("%d", &numAeronave);

            int aeronaveEncontrada = 0;

            for (int i = 0; i < indice; i++)
            {
                if (numAeronave == avioes[i].aeronaves)
                {
                    aeronaveEncontrada = 1;

                    printf("Reservas da aeronave %d:\n", avioes[i].aeronaves);
                    printf("N�mero de assentos dispon�veis: %d\n", avioes[i].assentos);

                    break;
                }
            }

            if (!aeronaveEncontrada)
            {
                printf("Aeronave n�o encontrada!\n");
            }

            break;



    case 5:
            printf("CONSULTAR POR UM PASSAGEIRO\n");

            printf("Insira o nome do passageiro para consultar as reservas:\n");
            scanf("%s", nomePassageiro);

            int passageiroEncontrado = 0;
            for (i = 0; i < indice; i++)
            {
                if (strcmp(nomePassageiro, avioes[i].nome) == 0)
                {
                    passageiroEncontrado = 1;
                    printf("O n�mero de reservas do passageiro %s �: %d\n", nomePassageiro, avioes[i].numreserva);
                    break;
                }
            }

            if (!passageiroEncontrado)
            {
                printf("Passageiro n�o encontrado\n");
            }
            break;


    case 6:
        printf("ENCERRAR O PROGRAMA\n");
        continuar = 0;
        break;

    default:
        printf("Op��o inv�lida! Por favor, escolha uma op��o v�lida.\n");
        break;

        }

    }
return 0;
}
