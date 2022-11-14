#include <stdio.h>
#include <stdlib.h>

int main()
{
   int valorA, valorB, resultado; //Declaração das variáveis

   printf("Digite um valor:"); //Entrada de dados
   scanf("%d",&valorA);
   printf("Digite outro valor:");
   scanf("%d",&valorB);

   resultado = valorA + valorB; //processamento de dados


   printf("Resultado:%d \n", resultado); //saída de dados
   printf("%d + %d  = %d \n",valorA, valorB, resultado);



    return 0;
}
