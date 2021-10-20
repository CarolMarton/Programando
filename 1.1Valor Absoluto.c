//EXERCIOIO 1 - VALOR ABSOLUTO.
#include <stdio.h>

    int main(){

        int a;

            printf("\nDigite um numero inteiro: ");
            scanf("%d", &a);

            if (a < 0) a = -a;
                printf("\nO valor absoluto e: %d\n", a);




       return 0;
   }
