//Exercicio FRUTAS
// Exerci p
 #include<stdio.h>

#define valorAbacaxi 3
#define valorCenoura 2
#define valorLaranja 1
#define valorCarambola 4
#define valorMorango 7
#define valorBanana 5

    int main(){

        int abacaxi, qnt_abacaxi, valorT_Abacaxi, cenoura, qnt_cenoura, valorT_Cenoura,  laranja, qnt_laranja, valorT_Laranja, carambola, qnt_carambola, valorT_Carambola, morango, qnt_morango, valorT_Morango, banana, qnt_banana, valorT_Banana;
        float totalAbacaxi, Desconto_Abacaxi, totalCenoura, Desconto_Cenoura, totalLaranja, Desconto_Laranja, totalCarambola, Desconto_Carambola, totalMorango, Desconto_Morango, totalBanana, Desconto_Banana, totalCeM, Desconto_CeM, Total_CeM, Total_Compra;

        printf("\nDeseja comprar abacaxi? \n 1- Sim \n 2- Nao\n");
        scanf("%d", &abacaxi);

            if(abacaxi == 1)
            {
                printf("\nQuantidade: \n");
                scanf("%d", &qnt_abacaxi);
                valorT_Abacaxi = qnt_abacaxi * valorAbacaxi;
                Desconto_Abacaxi = valorT_Abacaxi*0.03;
                printf("\nDesconto %.2f \n", Desconto_Abacaxi);
                totalAbacaxi = valorT_Abacaxi - Desconto_Abacaxi;
                printf("\nTotal a pagar: %.2f\n", totalAbacaxi);
            }

        printf("\nDeseja comprar Cenoura? \n 1- Sim \n 2- Nao\n");
        scanf("%d", &cenoura);

            if(cenoura == 1)
            {
                printf("\nQuantidade: \n");
                scanf("%d", &qnt_cenoura);
                valorT_Cenoura = qnt_cenoura * valorCenoura;

                    if(qnt_cenoura > 5)
                    {
                        Desconto_Cenoura = valorT_Cenoura*0.02;
                        printf("\nDesconto %.2f \n", Desconto_Cenoura);
                        totalCenoura = valorT_Cenoura - Desconto_Cenoura;
                        printf("\nTotal a pagar: %.2f\n", totalCenoura);

                    }

                            else if (qnt_cenoura < 5)
                            {
                                Desconto_Cenoura = valorT_Cenoura*0.02;
                                printf("\nDesconto %.2f \n", Desconto_Cenoura);
                                totalCenoura = valorT_Cenoura - Desconto_Cenoura;
                                printf("\nTotal a pagar: %.2f\n", totalCenoura);

                            }

            }

         printf("\nDeseja comprar Laranja? \n 1- Sim \n 2- Nao\n");
         scanf("%d", &laranja);

            if(laranja == 1)
            {
                printf("\nQuantidade: \n");
                scanf("%d", &qnt_laranja);
                valorT_Laranja = qnt_laranja * valorLaranja;

                    if(qnt_laranja > 5)
                    {
                        Desconto_Laranja = valorT_Laranja*0.02;
                        printf("\nDesconto %.2f \n", Desconto_Laranja);
                        totalLaranja = valorT_Laranja - Desconto_Laranja;
                        printf("\nTotal a pagar: %.2f\n", totalLaranja);
                    }

                            else if (qnt_laranja < 5)
                            {
                                Desconto_Laranja = valorT_Laranja*0.02;
                                printf("\nDesconto %.2f \n", Desconto_Laranja);
                                totalLaranja = valorT_Laranja - Desconto_Laranja;
                                printf("\nTotal a pagar: %.2f\n", totalLaranja);
                            }
            }

        printf("\nDeseja comprar carambola? \n 1- Sim \n 2- Nao\n");
        scanf("%d", &carambola);

            if(carambola == 1)
            {
                printf("\nQuantidade: \n");
                scanf("%d", &qnt_carambola);
                valorT_Carambola = qnt_carambola * valorCarambola;
                Desconto_Carambola = valorT_Carambola*0.15;
                printf("\nDesconto %.2f \n", Desconto_Carambola);
                totalCarambola = valorT_Carambola - Desconto_Carambola;
                printf("\nTotal a pagar: %.2f\n", totalCarambola);
            }


        printf("\nDeseja comprar morango? \n 1- Sim \n 2- Nao\n");
        scanf("%d", &morango);

            if(morango == 1)
            {
                printf("\nQuantidade: \n");
                scanf("%d", &qnt_morango);
                valorT_Morango = qnt_morango * valorMorango;
                Desconto_Morango = valorT_Morango*0.15;
                printf("\nDesconto %.2f \n", Desconto_Morango);
                totalMorango = valorT_Morango - Desconto_Morango;
                printf("\nTotal a pagar: %.2f\n", totalMorango);
            }

            if ((qnt_carambola > 1)&&(qnt_morango > 1))
            {
                Total_CeM = valorT_Carambola + valorT_Morango;
                Desconto_CeM = Total_CeM*0.15;
                printf("\nDesconto da Carambola e Morango = %.2f", Desconto_CeM);
                totalCeM = Total_CeM - Desconto_CeM;
                printf("\nTotal a pagar: %.2f\n", totalCeM);

            }

        printf("\nDeseja comprar Banana? \n 1- Sim \n 2- Nao\n");
        scanf("%d", &banana);

            if(banana == 1)
            {
                printf("\nQuantidade: \n");
                scanf("%d", &qnt_banana);
                valorT_Banana = qnt_banana * valorBanana;

                    if(qnt_banana > 3)
                    {
                        Desconto_Banana = valorT_Banana*0.03;
                        printf("\nDesconto %.2f \n", Desconto_Banana);
                        totalBanana = valorT_Banana - Desconto_Banana;
                        printf("\nTotal a pagar: %.2f\n", totalBanana);
                    }
                            else if (qnt_banana < 3)
                            {
                                Desconto_Banana = valorT_Banana*0.03;
                                printf("\nDesconto %.2f \n", Desconto_Banana);
                                totalBanana = valorT_Banana - Desconto_Banana;
                                printf("\nTotal a pagar: %.2f\n", totalBanana);
                            }


            }


            Total_Compra = totalAbacaxi+totalCenoura+totalLaranja+totalCarambola+totalMorango+Total_CeM+totalBanana;
            printf("\nO total da sua compra e = %.2f", Total_Compra);




  return 0;
  }

