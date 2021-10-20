//Esse foi uma outra tentativa seguindo outras formas
//Cai no loop e nem da pra terminar de testar e fazer os ajustes
//Já tiramos contadores, já mudamos de lugares, tiramos os continue
// **Os "return (opcao)" estão como comentarios pq estavamos testando.
#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        int opcao, ita, itb, comp, qtda, ttla, qtdb, ttlb, qtt, vt, a, b;

        // deixando os valores fixo
        ita = 50;
        itb = 30;

        do
        {
            printf("\n****Menu****\n");

            printf("1. Comprar produtos \n");
             printf("2. resumo de compra \n");
              printf("3. encerrar a compra \n");
               scanf("%d", &opcao);

         if (opcao == 1 )



                        printf("produtos\n");
                        printf("item a = r$50 \n");
                        printf("item b = r$30 \n");
                        scanf("%d", &comp);

                        if (comp == a ){ // comprando
                                 printf("por favor coloque a quantitdade\n");
                                  scanf("%d", &qtda);
                                   ttla = qtda * 50;  //soma do valor com a quantidade valor total
                                   //ttla++; // contador do valor total


                                }
                            if (comp == b ){
                               printf("por favor coloque a quantitdade\n");
                                  scanf("%d", &qtdb);
                                   ttlb = qtdb * 30;  //soma do valor com a quantidade valor total
                                    ttlb++; // contador do valor total

                                }
                                qtt = qtda + qtdb;
                                 vt = ttla +ttlb;
        // return(opcao);

            if (opcao == 2 )   // resumo da compra
                        printf(" resumo da compra \n");

                       printf (" quantidade total do item a %f", qtda);//a quantidade do item a
                        printf (" quantidade total do item b %f", qtdb);//a quantidade do item b
                         printf (" quatidade total de produto %f", qtt);//quantidade total
                          printf (" valor total a pagar do item a  %f", ttla);//valor total  de a
                           printf (" valor total a pagar do item b %f", ttlb);//valor total b
                             printf (" valor total  %f", vt);//valor total  a pagar
          // return(opcao);

             if (opcao == 3 ) { // encerrando a compra
                        printf("encerrando a compra ...\tdn");
                         printf (" quantidade total do item a %f", qtda);//a quantidade do item a
                          printf (" quantidade total do item b %f", qtdb);//a quantidade do item b
                           printf (" quatidade total de produto %f", qtt);//quantidade total
                            printf (" valor total a pagar do item a  %f", ttla);//valor total  de a
                             printf (" valor total a pagar do item b %f", ttlb);//valor total b
                              printf (" valor total  %f", vt);//valor total  a pagar
                     }
                     return 0;
            }
     while(opcao);

        return 0;
}
