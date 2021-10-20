//EXERCICIO CAIXA ELETRONICO
//CAROLINE LOPES DOS SANTOS MARTON
#include <stdio.h>
#include <stdlib.h>

    float saldo = 0;
    float val_dep = 0;

    void consulta();
    float deposito();
    void sacar_valor();

    int main(){

        int op;

        do {
            printf("\n  ESCOLHA UMA OPCAO: \n (1) CONSULTAR SALDO \n (2) DEPOSITAR UM VALOR \n (3) SACAR UM VALOR \n (4) SAIR \n");
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
                    printf("\nOpção invalida!");
                    break;
            }
        } while (op != 4);

        return 0;
    }

    void consulta(){
        printf("\nSeu saldo atual eh: %.2f\n", saldo);
    }

    float deposito(){
        float val_dep;
            printf("\nQUAL VALOR DESEJA DEPOSITAR? ");
            scanf("%f", &val_dep);

        if (val_dep <= 0) {
            printf("\n VALOR INVALIDO! \n VALOR PRECISA SER POSITIVO");
        }
        else {
                printf("\n Deposito realizado com sucesso! \n Saldo atual: %.2f \n", val_dep+saldo);
        }
        return (saldo += val_dep);
    }

    void sacar_valor(){

        float valor_saque;
        printf("Qual valor deseja sacar? ");
        scanf("%f", &valor_saque);

        if (valor_saque > saldo){
            printf("\nSALDO INSUFICIENTE");
        }
        else
            if (valor_saque <= 0){
                printf("\nVOCE DEVE COLOCAR UM VALOR POSITIVO");
        }
        else {
            saldo -= valor_saque;
            printf("\nVoce sacou: %.2f", valor_saque);
            printf("\nSaldo atual: %.2f", saldo);
        }
    }
