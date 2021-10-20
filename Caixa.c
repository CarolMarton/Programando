#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

    float saldo = 0;
    float val_dep = 0;

    int main (){
        setlocale(LC_ALL, "");

            int op;

                do {
                    printf("\n  ESCOLHA UMA OP��O: \n (1) CONSULTAR SALDO \n (2) DEPOSITAR UM VALOR \n (3) SACAR UM VALOR \n (4) SAIR \n");
                    scanf("%d", &op);

                    switch(op){

                        case 1:
                                consulta();
                        break;

                        case 2:
                                deposito();
                        break;

                        case 3:
                                sacar_valor();
                        break;

                        case 4:
                            printf("\nSaindo...... Pressione enter");
                        break;

                        default:
                            printf("\nOp��o inv�lida!");
                        break;
                    }
          } while (op != 4);

        return 0;
    }


    consulta(){

        printf("\nSeu saldo atual �: %.2f\n", saldo+val_dep);
    }


    deposito(){
        float val_dep;
            printf("\nQUAL VALOR DESEJA DEPOSITAR? ");
            scanf("%f", &val_dep);

            if (val_dep <= 0) {
                printf("\nVALOR INV�LIDO!");
            }
                else {
                    printf("\n Dep�sito realizado com sucesso! \n Saldo atual: %.2f \n", val_dep+saldo);
                }
        }
    sacar_valor(){

        float valor_saque;
        printf("Qual valor deseja sacar? ");
        scanf("%f", &valor_saque);

        if (valor_saque > saldo){
            printf("\nSALDO INSUFICIENTE");
        }

        else
            if (valor_saque <= 0){
                printf("\nVOC� DEVE COLOCAR UM VALOR POSITIVO");
            }

            else {
                saldo = valor_saque - saldo;
                printf("\nVoc� sacou: %.2f", valor_saque);
                printf("\nSaldo atual: %.2f", saldo);
            }
    }

