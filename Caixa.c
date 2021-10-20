//EXERCICIO 1 - CAIXA ELETRÔNICO
#include<stdio.h>
#include<stdlib.h>

    int main(){

        float valor, desconto, total_desc, acrescimo, total_acres;
        int  op_pagamento;

            printf("\nDigite o valor a ser pago: ");
            scanf("%f", &valor);

            printf("\n ESCOLHA UMA OPCAO DE PAGAMENTO: \n \n 1 - Dinheiro \n 2 - Debito \n 3 - Credito \n 4 - Sair \n\n");
            scanf("%d", &op_pagamento);

                switch (op_pagamento)
                {
                    case 1:
                            desconto = valor * 0.05;
                            total_desc = valor - desconto;
                            printf("\n O valor a ser pago no DINHEIRO e: %.2f \n DESCONTO de 5 porcento o total e de: %.2f", valor, total_desc);

                    break;

                    case 2:
                            printf("\n O valor a ser pago no DEBITO e: %.2f", valor);

                    break;

                    case 3:
                            acrescimo = valor * 0.05;
                            total_acres = acrescimo + valor;
                            printf("\n O valor a ser pago no CREDITO e: %.2f \n ACRESCIMO de 5 porcento o total e de: %.2f", valor, total_acres);
                    break;


                    default:
                            printf("\n Voce escolheu opcao 4 - SAIR \n");


                }





    return 0;
    }
