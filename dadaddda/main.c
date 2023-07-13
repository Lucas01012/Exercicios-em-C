#include <stdio.h>
#include <stdlib.h>

int main()
{
 float rendamensal, aliquotainss, deducao, reducaoinss, valordependentes, cpf, dependentes;


    printf("Informe o seu CPF:");
    scanf ("%f",&cpf);

    printf("Se voce tiver dependentes, informe a quantidade:");
    scanf("%f",&dependentes);

    printf("Informe a sua renda mensal:");
    scanf("%f",&rendamensal);

        if(rendamensal <= 1302.00){
        deducao = 0;
        aliquotainss = rendamensal * (7.5 / 100);
        }

//

    printf("Este é o valor da aliquota de inss com reducao: %.2f \n", aliquotainss);

    return 0;
}
