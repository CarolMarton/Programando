//EXERCICIO 3 - COMPRA
#include<stdio.h>



#define maximoItens 100
#define valorItem 5

        int main(){

        int P_Norte = 10, P_Nordeste = 8, P_CentroO = 12, P_Sudeste = 15, P_Sul = 11, itens, regiao;
        float valorTotal, valorFrete;


        printf("\nQuantidade de intens (Maximo 100 itens): \n");
        scanf("%d", &itens);
        printf("\nQual sua regiao? \n 1- Norte \n 2- Nordeste \n 3-Centro Oeste \n 4- Sudeste \n 5- Sul\n");
        scanf("%d", &regiao);

        valorTotal = itens * valorItem;

        if(regiao == 1)
        {
         valorFrete = valorTotal + valorTotal*0.1;
         printf("\nRegiao de entrega: Norte");
        }

        else if(regiao == 2)
        {
         valorFrete = valorTotal + valorTotal*0.8;
         printf("\nRegiao de entrega: Nordeste");
        }

        else if(regiao == 3)
        {
         valorFrete = valorTotal + valorTotal*0.12;
         printf("\nRegiao de entrega: Centro Oeste");
        }

        else if(regiao == 4)
        {
         valorFrete = valorTotal + valorTotal*0.15;
         printf("\nRegiao de entrega: Sudeste");
        }

         else
        {
         valorFrete = valorTotal + valorTotal*0.11;
         printf("\nRegiao de entrega: Sul");
        }

        printf("\nValor total sem frete: %.2f \nValor total com frete: %.2f", valorTotal, valorFrete);

        return 0;
        }
