//Tentei varias coisas e não sai disso.
//Esta somando um valor 16 que não coloquei, acredito que seja da memoria.
//E queria apenas mostrar a opção de comprar os dois produtos, ao inves disso mostra o menu muitas vezes.
//Eu já coloquei contador e rodou de todas as formas, menos como eu queria.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main(){
        setlocale(LC_ALL, "");

     int a = 50, b = 30, op, op_item, qntda, qntdb, qnt_a, qnt_b;
     int total_compra;

        do
        {
            printf("\n****Menu****\n"); //menu de compras
            printf("1. Comprar produtos \n");
            printf("2. Resumo da compra \n");
            printf("3. Encerrar a compra \n");
            scanf("%d", &op);


                if (op == 1){ //if para selecionar o produto

                    printf("\nSelecione o produto: \n");
                    printf("\n1 - Item A R$50,00");
                    printf("\n2 - Item B R$30,00\n");
                   // printf("3 - Nenhum produto\n");
                    scanf("%d", &op_item);
                }


                        if (op_item  == 1){ //verifica a quantidade de itens do produto A

                            printf("\nQuantidade de item: ");
                            scanf("%d", &qntda);
                            qnt_a = qntda * 50;
                            printf("\nValor Total = %.2d", qnt_a);
                        }

                         if (op_item == 2){

                            printf("\nQuantidade de item: "); //verifica a quantidade de produto B
                            scanf("%d", &qntdb);
                            qnt_b = qntdb * 30;
                            printf("\nValor Total = %.2d", qnt_b);
                        }

                            total_compra = qnt_a + qnt_b;
                            printf("\nO valor total da compra e: %d", total_compra);





              //  if (op == 2); //If para ver o resumo da compra

                // printf("")








   } while(op = 3);
   return 0;
    }

