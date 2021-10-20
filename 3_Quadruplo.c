//EXERCICIO 3
#include<stdio.h>

    int main(){

            float Num, soma;
            int op1;

            printf("\nDigite um numero: \n");
            scanf("%f", &Num);

            printf("\nEscolha uma opcao: \n 1- Dobro \n 2- Triplo \n 3- Quadruplo \n 4- Quintuplo \n");
            scanf("%d", &op1);

                if (op1 == 1)
                {
                    soma = Num*2;
                    printf("\nO dobro e %.2f*2 = %.2f", Num, soma);
                }

                if (op1 == 2)
                {
                    soma = Num*3;
                    printf("\nO Triplo e %.2f*3 = %.2f", Num, soma);
                }

                if (op1 == 3)
                {
                    soma = Num*4;
                    printf("\nO Quadruplo e %.2f*4 = %.2f", Num, soma);
                }

                if (op1 == 4)
                {
                    soma = Num*5;
                    printf("\nO Quintuplo e %.2f*5 = %.2f", Num, soma);
                }


        return 0;

    }
