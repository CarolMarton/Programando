//EXERCICIO 2
//Faça uma solução para guardar valores numéricos em
//uma matriz A quadrada de tamanho N.
//Em seguida, guarde em B a matriz transposta de A.
#include <stdio.h>
#include <stdlib.h>

    int main(){
        int A[2][3], B[3][2], i, j;
            printf("\nDigite os 6 valores da matriz:\n");
            for (i=0; i<2; i++) {
                for (j=0; j<3; j++)
                    scanf("%d", &A[i][j]);
            }

            for (i=0; i<2; i++) {
                for (j=0; j<3; j++)
                    B[j][i] = A[i][j];
            }

            printf("\nMatriz transposta:\n");
            for (i=0; i<3; i++) {
                printf("\n");
                for (j=0; j<2; j++)
                    printf("%d \t", B[i][j]);
            }
    return 0;
 }
