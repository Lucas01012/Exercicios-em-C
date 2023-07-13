#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cpf, dependentes, totaldependentes;
    float rendamensal, descontoinss, aliquotainss, deducao, deducaoinss;

        printf("Informe o seu CPF:");
        scanf("%d",&cpf);

        printf("Informe a sua renda mensal:");
        scanf("%f",&rendamensal);

        printf("Se tiver dependentes, informe a quantidade:");
        scanf("%d",&dependentes);

            if (rendamensal <= 1302.00){
                aliquotainss = 7.5;
             }

            if (rendamensal > 1302.00 && rendamensal <= 2571.29){
                aliquotainss = 9;
                deducao = 19.53;
            }

            if (rendamensal >2571.29 && rendamensal <= 3856.94){
                aliquotainss = 12;
                deducao =96.67;
            }

            if (rendamensal > 3856.94 && rendamensal <= 7507.49){
                aliquotainss = 14;
                deducao = 173.8;
            }
            else{
                deducao = 877.22;
            }

        totaldependentes = dependentes * 189.59;


        deducaoinss = (rendamensal * aliquotainss) / 100 + rendamensal - deducao - totaldependentes;

        printf ("A deducao do inss e:%.2f",deducaoinss);

}
