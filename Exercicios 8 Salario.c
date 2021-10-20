//Exercicio 8
#include<stdio.h>
#include<stdlib.h>

        int main(){

            int salario, Cont_aumento, soma;


                printf("\nDigite seu salario: ", salario);
                scanf("%d", &salario);

                printf("\nO salario atual e: %d", salario);
                Cont_aumento = salario * 0.1;
                soma = Cont_aumento + salario;
                printf("\nO salario com aumento e: %d", soma);



        return 0;
        }


