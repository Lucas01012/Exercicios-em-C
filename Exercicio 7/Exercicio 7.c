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
    printf("Opção 1: CADASTRAR A NUMERAÇÃO DAS AERONAVES:\n");
    printf("Opção 2: CADASTRAR O NÚMERO DE LUGARES DISPONÍVEIS EM CADA AVIÃO:\n");
    printf("Opção 3: RESERVAR PASSAGEM:\n");
    printf("Opção 4: CONSULTAR POR UMA AERONAVE:\n");
    printf("Opção 5: CONSULTAR POR UM PASSAGEIRO:\n");
    printf("Opção 6: ENCERRAR O PROGRAMA:\n\n");
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
        printf("Informe a opção que você deseja acessar: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("CADASTRAR A NUMERAÇÃO DAS AERONAVES!\n");
            if (indice < avioesmax)
            {
                printf("Insira a numeração da aeronave: ");
                scanf("%d", &avioes[indice].aeronaves);
                indice++;
            }
            else
            {
                printf("Número máximo de aeronaves cadastradas!\n\n");
            }
            break;

        case 2:
            printf("CADASTRAR O NÚMERO DE LUGARES DISPONÍVEIS EM CADA AVIÃO\n");
            for (i = 0; i < indice; i++)
            {
                do
                {
                    printf("Informe quantos assentos estão disponíveis na aeronave %d (máximo de 60): ", avioes[i].aeronaves);
                    scanf("%d", &avioes[i].assentos);
                    if (avioes[i].assentos > reservas)
                    {
                        printf("Número de assentos inválido! Por favor, insira um valor igual ou inferior a 60.\n");
                    }
                }
                while (avioes[i].assentos > reservas);
            }
            break;
        case 3:
            printf("RESERVAR PASSAGEM\n");

            printf("Informe o número da aeronave na qual deseja reservar passagem: ");
            scanf("%d", &numAeronave);

            for (int i = 0; i < indice; i++)
            {
                if (numAeronave == avioes[i].aeronaves)
                {
                    aeronaveEncontrada = 1;

                    if (avioes[i].assentos == 0)
                    {
                        printf("A aeronave está totalmente ocupada, por favor escolha outra para realizar sua reserva.\n");
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
                printf("Aeronave não encontrada, por favor informe outra numeração!\n");
            }

            break;

    case 4:
            printf("CONSULTAR POR UMA AERONAVE\n");

            printf("Digite a numeração da aeronave da qual deseja consultar as reservas realizadas: ");
            scanf("%d", &numAeronave);

            int aeronaveEncontrada = 0;

            for (int i = 0; i < indice; i++)
            {
                if (numAeronave == avioes[i].aeronaves)
                {
                    aeronaveEncontrada = 1;

                    printf("Reservas da aeronave %d:\n", avioes[i].aeronaves);
                    printf("Número de assentos disponíveis: %d\n", avioes[i].assentos);

                    break;
                }
            }

            if (!aeronaveEncontrada)
            {
                printf("Aeronave não encontrada!\n");
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
                    printf("O número de reservas do passageiro %s é: %d\n", nomePassageiro, avioes[i].numreserva);
                    break;
                }
            }

            if (!passageiroEncontrado)
            {
                printf("Passageiro não encontrado\n");
            }
            break;


    case 6:
        printf("ENCERRAR O PROGRAMA\n");
        continuar = 0;
        break;

    default:
        printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        break;

        }

    }
return 0;
}
