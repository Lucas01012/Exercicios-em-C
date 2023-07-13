#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5][3], B[5][3], C[5][3];
    int i, j;

    // Lê a matriz A
    printf("Digite os elementos da matriz A: \n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Lê a matriz B
    printf("Digite os elementos da matriz B: \n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Soma os elementos das matrizes A e B para criar a matriz C
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Imprime a matriz C
    printf("Matriz C: \n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }



    return 0;
}
