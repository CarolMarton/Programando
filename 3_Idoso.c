//EXERCICIO 2 - IDOSO.
#include<stdio.h>

    int main(){

        int op_enf, op_acomp, op_febril, tel;

            printf("\nO idoso possui alguma enfermidade? \n 1- Sim \n 2- Nao \n");
            scanf("%d", &op_enf);

            printf("\nO idoso esta desacompanhado? \n 1- Sim \n 2-Nao \n");
            scanf("%d", &op_acomp);

                if((op_enf == 1)&&(op_acomp == 1))
                {
                 printf("\nPreferencial\n");
                }

                printf("\nEsta febril? \n 1- Sim \n 2- Nao \n");
                scanf("%d", &op_febril);

                if(op_febril == 1)
                {
                   printf("\nEm observacao!\n");
                }

                if(op_acomp == 1)
                {
                    printf("\nInforme seu telefone: \n");
                    scanf("%d", &tel);
                    printf("\nTelefone informado: %d \n", tel);

                }

    return 0;
    }
