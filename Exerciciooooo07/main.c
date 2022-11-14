#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoa, opcao;
    float peso, pesoT;

    pessoa = 0;
    peso = pesoT = 0;


    do
    {
        printf ("Insira uma opcao:");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 0:
            printf("Programa encerrado!");
            break;

        case 1:

            printf("Insira o peso da pessoa: \n");
            scanf("%f",&peso);


            if  (((peso + pesoT)>= 800) || ((pessoa + 1 )>=15))
            {
                printf("Capacidade maxima atingida! \n");
            }
            else
            {
                pesoT = pesoT + peso;
                pessoa = pessoa + 1;
                printf("Entrou uma pessoa no elevador %d \n",pessoa);
            }
            break;

        case 3:

            printf ("O total de pessoas que entraram no elevador e:%d \n",pessoa);
            printf("O peso total do elevador e:%f \n",pesoT);
            break;

















        }















    }
    while (opcao != 0);





    return 0;
}
