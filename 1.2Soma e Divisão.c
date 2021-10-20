//EXERCICIO 2 - SOMA E DVISÃO USANDO IF.
#include<stdio.h>

        int main(){

            float num1, num2, soma, div;


                printf("\nDigite um numero: ");
                scanf("%f", &num1);
                printf("\nDigite um numero: ");
                scanf("%f", &num2);

                soma = num1 + num2;
                printf("\nA soma dos numeros e = %f", soma);


                    if (num2 == 0)
                    {
                        printf("\nImpossivel realizar a divisao!");
                    }
                    else
                    {
                        div = num1/num2;
                        printf("\nA divisao dos numeros e = %.2f", div);
                    }


        return 0;
        }
