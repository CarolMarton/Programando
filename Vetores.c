//EXERCICIO - VETORES
//CAROLINE LOPES DOS SANTOS MARTON
#include <stdio.h>
#include <locale.h>



    int main (){
            setlocale(LC_ALL, "");
            int v[10], op;


                for (int i=0; i<10; i++){
                    printf("\nDigite o valor da posição %d do vetor: ", i+1);
                    scanf("%d", &v[i]);
                }

                do{
                    printf("\n ***** MENU *****\n");
                    printf("\n 1. DUPLICAR\n");
                    printf(" 2. IMPRIMIR\n");
                    printf(" 3. REMOVER\n");
                    printf(" 4. SAIR\n");
                    printf(" ESCOLHA OPÇÃO: ");
                    scanf("%d", &op);

                    switch (op){

                        case 1:

                            break;

                        case 2:

                            break;

                        case 3:

                            break;

                        case 4:
                                printf("\nSAINDO.....PRESSIONE ENTER");
                            break;

                        default:
                                printf("\nOPÇÃO INVÁLIDA!");
                            break;
                    }
                } while (op != 4);

        return 0;
    }



