//EXERCICIO 3
#include <stdio.h>
#include <locale.h>

    int main (){
        setlocale(LC_ALL,"");

    int vetor[5] = {0}, op, i = 0, total = 0, item, posicao;

        do{
            printf("\nESCOLHA UMA OPÇÃO: \n 1.Inserir \n 2.Pesquisar \n 3.Excluir \n 4.Imprimir \n 5.Sair\n");
            scanf("%d",&op);

            switch(op){

                case 1:
                        if (total>4)

                        break;

                            else
                                printf("Insira um numero inteiro para o vetor de 5 posições: ");
                                scanf("%d", &vetor[total]);
                                total++;
                            break;

                case 2:
                        if (total == 0)

                        break;

                            else
                                printf("\nPESQUISE UM ITEM NO VETOR: ");
                                scanf("%d",&item);

                                    for (i=0;i<total;i++)
                                        if (vetor[i]==item)
                break;

                    if (i>=total)
                        printf("\nO ITEM NÃO FOI ENCONTRADO!");
                            else
                                printf("\nO ITEM %d ESTÁ NA POSIÇÃO: %d \n", item, i);
                    break;

                case 3:
                        if (total==0)

                        break;

                            else
                                printf("\nESCOLHA O ELEMENTO A SER REMOVIDO: ");
                                scanf("%d",&posicao);

                                for (i=posicao;i<total-1;i++)
                                     vetor[i] = vetor[i+1];
                                     total--;
                case 4:
                        if (total==0)

                        break;

                            else
                                printf(" SEU VETOR = %d %d %d %d %d",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4]);

                case 5:
                        return(0);

                default:
                    printf("OPÇÃO INVALIDA!");

                break;

                     }

        }
            while(op!= 5);

    return 0;
}




