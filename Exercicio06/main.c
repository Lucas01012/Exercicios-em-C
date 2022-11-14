#include <stdio.h>
#include <stdlib.h>

int main()


{
    int vagas, opcao, qtdP, vagasD,qtdS, qtdE;
    vagas = 40;
    qtdP = 0;
    qtdS = 0;


    do
{ printf ("Insira o codigo:");
  scanf("%d",&opcao);

  switch (opcao)
    {
        case 0:
        printf("Encerrando o programa");
        break;

        case 1:
        if (qtdP == 40)
        {
            printf("Invalido!Numero de pessoas maior que o permitido \n");
        }
        else
        {
            qtdP = qtdP + 1;
            qtdE = qtdE + 1;
            printf("Entrou:%d pessoas \n",qtdP);
        }

        break;

        case 2:
        if (qtdP <= 0)
        {
            printf ("Valor invalido \n");
        }

        else
        {
            qtdP = qtdP - 1;
            qtdS = qtdS + 1;
            printf("Saiu uma pessoa:%d \n",qtdP);
        }
        break;

        case 3:
        vagasD = vagas - qtdP;
        printf ("O total de vagas disponiveis e:%d \n",vagasD);
        break;

        case 4:
        printf("O total de pessoas que entraram e:%d \n",qtdE);

        break;

        case 5:
        printf("O total de pessoas que sairam e:%d \n",qtdS);

        break;




    }

}
while (opcao != 0);
printf("Opcao invalida! \n");










    return 0;
}
