
//Digite 2 valores e faça a seguinte operação usando modulos
//EXERCICIO 1
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    float n1, n2;

    int main(){
        int op;
        setlocale(LC_ALL,"");

        printf("\nDigite o primeiro valor: ");
        scanf("%f", &n1);
        printf("\nDigite o segundo valor: ");
        scanf("%f", &n2);

        do {
            printf("\n ***** MENU *****\n");
            printf("\n 1. Soma\n");
            printf(" 2. Subtração\n");
            printf(" 3. Multiplicação\n");
            printf(" 4. Divisão\n");
            printf(" 5. Sair\n");
            printf(" ESCOLHA OPÇÃO: ");
            scanf(" %d", &op);

            switch(op){

                case 1:
                        soma();
                break;

                case 2:
                        sub();
                break;

                case 3:
                        mult();
                break;

                case 4:
                        divisao();
                break;

                case 5:
                    printf("\n.....SAINDO.....\nPRESSIONE ENTER");
                break;

                default:
                    printf("OPÇÃO INVÁLIDA!");
                break;

            }

        }   while (op != 5);



    return 0;

}

    soma(){
        float soma;
        soma = n1+n2;
        printf(" %.2f + %.2f = %.2f\n", n1, n2, soma);

        return;
    }

    sub(){
        float sub;
        sub = n1-n2;
        printf(" %.2f - %.2f = %.2f\n", n1, n2, sub);

        return;
    }

    mult(){
        float mult;
        mult = n1*n2;
        printf(" %.2f * %.2f = %.2f\n", n1, n2, mult);

        return;
    }

    divisao(){
        float divisao;
        divisao = n1/n2;
        printf(" %.2f / %.2f = %.2f\n", n1, n2, divisao);

        return;
   }









