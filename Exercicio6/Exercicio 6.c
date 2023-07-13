#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define contasmax 15

int i;
int opcao;

void menu()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Op��o 1: CADASTRAR CONTAS\n");
    printf("Op��o 2: VISUALIZAR TODAS AS CONTAS DE DETERMINADO CLIENTE\n");
    printf("Op��o 3: REALIZAR DEP�SITO BANC�RIO)\n");
    printf("Op��o 4: EXCLUIR CONTA COM MENOR SALDO\n");
    printf("Opc�o 5: ENCERRAR O PROGRAMA!\n\n");
}

int main()
{
    int continuar = 1;
    char nome[100];
    int indice = 0;

    struct dados
    {
        int numeroconta;
        char nomecliente[100];
        float saldo;
    } cliente[contasmax];

    while (continuar)
    {
        menu();

        printf("Informe a op��o que voc� quer acessar:");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (indice < contasmax)
            {
                printf("CADASTRAR CONTA\n");
                printf("Qual o seu nome:");
                fflush(stdin);
                fgets(cliente[indice].nomecliente, sizeof(cliente[indice].nomecliente), stdin);
                printf("Insira o n�mero de conta no qual deseja:\n");
                scanf("%d", &cliente[indice].numeroconta);
                fflush(stdin);
                indice++;
            }
            else
            {
                printf("N�mero m�ximo de contas atingido!\n");
            }
            break;

        case 2:
            printf("VISUALIZAR TODAS AS CONTAS DE DETERMINADO CLIENTE\n");
            printf("Por favor, informe o nome do cliente que deseja consultar:\n");
            fflush(stdin);
            fgets(nome, sizeof(nome), stdin);

            for (i = 0; i < contasmax; i++)
            {
                if (strcmp(nome, cliente[i].nomecliente) == 0)
                {
                    printf("O n�mero da conta do cliente %s � %d\n", cliente[i].nomecliente, cliente[i].numeroconta);
                    break;
                }
            }
            if (i == contasmax)
            {
                printf("N�o h� cliente cadastrado com este nome!\n");
            }
            break;

    case 3:
        printf("REALIZAR DEP�SITO BANC�RIO\n");
        printf("Informe o seu nome:\n");
        fflush(stdin);
        fgets(nome, sizeof(nome), stdin);

        printf("Informe o n�mero da sua conta:\n");
        int numeroConta;
        scanf("%d", &numeroConta);

        int encontrado = 0;

        for (i = 0; i < indice; i++)
        {
            if (strcmp(nome, cliente[i].nomecliente) == 0 && cliente[i].numeroconta == numeroConta)
            {
            printf("Cliente encontrado. Qual o valor do dep�sito?\n");
            float valorDeposito;
            scanf("%f", &valorDeposito);

            cliente[i].saldo += valorDeposito;
            printf("Dep�sito de %.2f realizado com sucesso. Saldo atual: %.2f\n", valorDeposito, cliente[i].saldo);
            encontrado = 1;
            break;
        }
        }

        if (!encontrado)
        {
            printf("Cliente n�o encontrado ou n�mero de conta inv�lido.\n");
        }
        break;


        case 4:
            printf("EXCLUIR CONTA COM O MENOR SALDO\n");

            if (indice == 0)
            {
                printf("Nenhuma conta cadastrada!\n");
            }
            else if (indice == 1)
            {
                indice--;
                printf("Conta exclu�da com sucesso!\n");
            }
            else
            {
                int menorSaldoIndex = 0;
                float menorSaldo = cliente[0].saldo;

                for (i = 1; i < indice; i++)
                {
                    if (cliente[i].saldo < menorSaldo)
                    {
                        menorSaldo = cliente[i].saldo;
                        menorSaldoIndex = i;
                    }
                }

                for (i = menorSaldoIndex; i < indice - 1; i++)
                {
                    cliente[i] = cliente[i + 1];
                }

                indice--;
                printf("Conta com menor saldo exclu�da com sucesso!\n");
            }
            break;

        case 5:
            printf("PROGRAMA ENCERRADO!\n");
            continuar = 0;
            break;

        default:
            printf("Op��o inv�lida!\n");
            break;
        }
    }

    return 0;
}
