//Caroline Lopes Dos Santo Marton
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Define um valor fixo para cada item
#define valorChocolate 3
#define valorRefrigerante 4
#define valorSanduiche 7
#define valorCerveja 6
#define valorFruta 1
#define valorAgua 2

    int main (){
        setlocale(LC_ALL, "");

        int opcao, dinheiro, n50, r50, n20, r20, n10, r10, n5, r5, n2, r2, n1, r1, troco;
        float faltando, restante;

                //Escreve na tela o menu.
                printf("\n >>>>>>>> MENU <<<<<<<<\n");
                printf("\n (1) Chocolate R$ 3 \n (2) Refrigerante R$ 4 \n (3) Sanduíche R$ 7 \n (4) Cerveja R$ 6 \n (5) Fruta R$ 1 \n (6) Água R$ 2 \n");
                printf("\n Selecione o código do produto: ");
                scanf("%d", &opcao);

                    //Switch para ler qual opção o usuário escolherá
                    switch (opcao){

                        case 1:
                                printf("\n(1) Chocolate >>> ");
                                printf("Total a pagar R$ 3");
                                printf("\nInsira o dinheiro (SOMENTE NOTAS)\n");
                                scanf("%d", &dinheiro);

                                    while(dinheiro < valorChocolate){

                                        faltando = valorChocolate - dinheiro;
                                        printf("\n Valor Incompleto!\n Faltando: %.2f", faltando);
                                        printf("\n Insira o valor: ");
                                        scanf("%f", &restante);
                                        dinheiro = dinheiro + restante;
                                    }

                                        //Faz a conta de quanto será o troco
                                        troco = dinheiro - valorChocolate;

                                        //Faz a conta de quanto será devolvido de cada nota.
                                        n50 = troco/50;
                                        r50 = troco%50;

                                        n20 = r50/20;
                                        r20 = r50%20;

                                        n10 = r20/10;
                                        r10 = r20%10;

                                        n5 = r10/5;
                                        r5 = r10%5;

                                        n2 = r5/2;
                                        r2 = r5%2;

                                        n1 = r2/1;
                                        r1 = r2%1;

                                        //mostrando quanto será o troco e quantas cédulas/moedas de cada valor a pessoa irá receber.
                                        printf("\n Seu troco é: %d\n", troco= dinheiro - valorChocolate);
                                        printf("\n Cédulas de 50: %d", n50);
                                        printf("\n Cédulas de 20: %d", n20);
                                        printf("\n Cédulas de 10: %d", n10);
                                        printf("\n Cédulas de 5:  %d", n5);
                                        printf("\n Cédulas de 2:  %d", n2);
                                        printf("\n Moedas de 1:   %d\n", n1);

                        break;

                        case 2:
                                printf("\n(2) Refrigerante >>> ");
                                printf("Total a pagar R$ 4");
                                printf("\nInsira o dinheiro (SOMENTE NOTAS)\n");
                                scanf("%d", &dinheiro);

                                    //Verifica se o valor recebi esta certo ou informa o que falta.
                                    while(dinheiro < valorRefrigerante){

                                        faltando = valorRefrigerante - dinheiro;
                                        printf("\n Valor Incompleto!\n Faltando: %.2f", faltando);
                                        printf("\n Insira o valor: ");
                                        scanf("%f", &restante);
                                        dinheiro = dinheiro + restante;
                                    }

                                        //Faz a conta de quanto será o troco
                                        troco = dinheiro - valorRefrigerante;


                                        //Faz a conta de quanto será devolvido de cada nota.
                                        n50 = troco/50;
                                        r50 = troco%50;

                                        n20 = r50/20;
                                        r20 = r50%20;

                                        n10 = r20/10;
                                        r10 = r20%10;

                                        n5 = r10/5;
                                        r5 = r10%5;

                                        n2 = r5/2;
                                        r2 = r5%2;

                                        n1 = r2/1;
                                        r1 = r2%1;

                                        //mostrando quanto será o troco e quantas cédulas/moedas de cada valor a pessoa irá receber.
                                        printf("\n Seu troco é: %d\n", troco= dinheiro - valorRefrigerante);
                                        printf("\n Cédulas de 50: %d", n50);
                                        printf("\n Cédulas de 20: %d", n20);
                                        printf("\n Cédulas de 10: %d", n10);
                                        printf("\n Cédulas de 5:  %d", n5);
                                        printf("\n Cédulas de 2:  %d", n2);
                                        printf("\n Moedas de 1:   %d\n", n1);

                        break;

                        case 3:
                                printf("\n(3) Sanduíche >>> ");
                                printf("Total a pagar R$ 7");
                                printf("\nInsira o dinheiro (SOMENTE NOTAS)\n");
                                scanf("%d", &dinheiro);

                                    //Verifica se o valor recebi esta certo ou informa o que falta.
                                    while(dinheiro < valorSanduiche){

                                        faltando = valorSanduiche - dinheiro;
                                        printf("\n Valor Incompleto!\n Faltando: %.2f", faltando);
                                        printf("\n Insira o valor: ");
                                        scanf("%f", &restante);
                                        dinheiro = dinheiro + restante;
                                    }


                                        //Faz a conta de quanto será o troco
                                        troco = dinheiro - valorSanduiche;


                                        //Faz a conta de quanto será devolvido de cada nota.
                                        n50 = troco/50;
                                        r50 = troco%50;

                                        n20 = r50/20;
                                        r20 = r50%20;

                                        n10 = r20/10;
                                        r10 = r20%10;

                                        n5 = r10/5;
                                        r5 = r10%5;

                                        n2 = r5/2;
                                        r2 = r5%2;

                                        n1 = r2/1;
                                        r1 = r2%1;

                                        //mostrando quanto será o troco e quantas cédulas/moedas de cada valor a pessoa irá receber.
                                        printf("\n Seu troco é: %d\n", troco= dinheiro - valorSanduiche);
                                        printf("\n Cédulas de 50: %d", n50);
                                        printf("\n Cédulas de 20: %d", n20);
                                        printf("\n Cédulas de 10: %d", n10);
                                        printf("\n Cédulas de 5:  %d", n5);
                                        printf("\n Cédulas de 2:  %d", n2);
                                        printf("\n Moedas de 1:   %d\n", n1);

                        break;

                        case 4:
                                printf("\n(4) Cerveja >>> ");
                                printf("Total a pagar R$ 6");
                                printf("\nInsira o dinheiro (SOMENTE NOTAS)\n");
                                scanf("%d", &dinheiro);

                                //Verifica se o valor recebi esta certo ou informa o que falta.
                                while(dinheiro < valorCerveja){

                                        faltando = valorCerveja - dinheiro;
                                        printf("\n Valor Incompleto!\n Faltando: %.2f", faltando);
                                        printf("\n Insira o valor: ");
                                        scanf("%f", &restante);
                                        dinheiro = dinheiro + restante;
                                    }


                                    //Faz a conta de quanto será o troco
                                    troco = dinheiro - valorCerveja;


                                    //Faz a conta de quanto será devolvido de cada nota.
                                    n50 = troco/50;
                                    r50 = troco%50;

                                    n20 = r50/20;
                                    r20 = r50%20;

                                    n10 = r20/10;
                                    r10 = r20%10;

                                    n5 = r10/5;
                                    r5 = r10%5;

                                    n2 = r5/2;
                                    r2 = r5%2;

                                    n1 = r2/1;
                                    r1 = r2%1;

                                    //mostrando quanto será o troco e quantas cédulas/moedas de cada valor a pessoa irá receber.
                                    printf("\n Seu troco é: %d\n", troco= dinheiro - valorCerveja);
                                    printf("\n Cédulas de 50: %d", n50);
                                    printf("\n Cédulas de 20: %d", n20);
                                    printf("\n Cédulas de 10: %d", n10);
                                    printf("\n Cédulas de 5:  %d", n5);
                                    printf("\n Cédulas de 2:  %d", n2);
                                    printf("\n Moedas de 1:   %d\n", n1);

                        break;

                        case 5:
                                printf("\n(5) Fruta >>> ");
                                printf("Total a pagar R$ 1");
                                printf("\nInsira o dinheiro (SOMENTE NOTAS)\n");
                                scanf("%d", &dinheiro);

                                    //Verifica se o valor recebi esta certo ou informa o que falta.
                                    while(dinheiro < valorFruta){

                                        faltando = valorFruta - dinheiro;
                                        printf("\n Valor Incompleto!\n Faltando: %.2f", faltando);
                                        printf("\n Insira o valor: ");
                                        scanf("%f", &restante);
                                        dinheiro = dinheiro + restante;
                                    }


                                        //Faz a conta de quanto será o troco
                                        troco = dinheiro - valorFruta;


                                        //Faz a conta de quanto será devolvido de cada nota.
                                        n50 = troco/50;
                                        r50 = troco%50;

                                        n20 = r50/20;
                                        r20 = r50%20;

                                        n10 = r20/10;
                                        r10 = r20%10;

                                        n5 = r10/5;
                                        r5 = r10%5;

                                        n2 = r5/2;
                                        r2 = r5%2;

                                        n1 = r2/1;
                                        r1 = r2%1;

                                        //mostrando quanto será o troco e quantas cédulas/moedas de cada valor a pessoa irá receber.
                                        printf("\n Seu troco é: %d\n", troco= dinheiro - valorFruta);
                                        printf("\n Cédulas de 50: %d", n50);
                                        printf("\n Cédulas de 20: %d", n20);
                                        printf("\n Cédulas de 10: %d", n10);
                                        printf("\n Cédulas de 5:  %d", n5);
                                        printf("\n Cédulas de 2:  %d", n2);
                                        printf("\n Moedas de 1:   %d\n", n1);

                        break;

                        case 6:
                                printf("\n(6) Água >>> ");
                                printf("Total a pagar R$ 2");
                                printf("\nInsira o dinheiro (SOMENTE NOTAS)\n");
                                scanf("%d", &dinheiro);

                                    //Verifica se o valor recebi esta certo ou informa o que falta.
                                    while(dinheiro < valorAgua){

                                        faltando = valorAgua - dinheiro;
                                        printf("\n Valor Incompleto!\n Faltando: %.2f", faltando);
                                        printf("\n Insira o valor: ");
                                        scanf("%f", &restante);
                                        dinheiro = dinheiro + restante;
                                    }


                                        //Faz a conta de quanto será o troco
                                        troco = dinheiro - valorAgua;


                                        //Faz a conta de quanto será devolvido de cada nota.
                                        n50 = troco/50;
                                        r50 = troco%50;

                                        n20 = r50/20;
                                        r20 = r50%20;

                                        n10 = r20/10;
                                        r10 = r20%10;

                                        n5 = r10/5;
                                        r5 = r10%5;

                                        n2 = r5/2;
                                        r2 = r5%2;

                                        n1 = r2/1;
                                        r1 = r2%1;

                                        //mostrando quanto será o troco e quantas cédulas/moedas de cada valor a pessoa irá receber.
                                        printf("\n Seu troco é: %d\n", troco= dinheiro - valorAgua);
                                        printf("\n Cédulas de 50: %d", n50);
                                        printf("\n Cédulas de 20: %d", n20);
                                        printf("\n Cédulas de 10: %d", n10);
                                        printf("\n Cédulas de 5:  %d", n5);
                                        printf("\n Cédulas de 2:  %d", n2);
                                        printf("\n Moedas de 1:   %d\n", n1);
                        break;


                        default:
                            printf("\nOpção Inválida!\n");
                        break;
                    }



    return 0;
}
