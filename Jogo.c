//Exercicio Numero aleatorio
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x, escolha, tentativa = 3;
        srand(time(NULL));
        x = rand() % 10; //Gera valor de 0 a 10

            printf("\nVoce tem 3 tentativas\n");
            printf("\nEscolha um numero! \n");


            if(x == 10) //Para garantir que o valor vai estar entre 0 e 9
            x--;

            while(tentativa != 0){
                printf("Tentativa %d: ", tentativa);
                scanf("%d", &escolha);

                if(escolha > x)
                    printf("\nO NUMERO E MENOR\n");

                    if(escolha < x)
                        printf("\nO NUMERO E MAIOR\n");

                      if(escolha == x)
                            printf("Parabens, voce acertou!!");
                            tentativa--;
                      }


    return 0;
}




/*
//Exercicio com Do- while.
//Exercicio Numero aleatorio
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x, escolha, tentativa = 3;
        srand(time(NULL));
        x = rand() % 10; //Gera valor de 0 a 10

            printf("\nVoce tem 3 tentativas\n");
            printf("\nEscolha um numero! \n");


            if(x == 10) //Para garantir que o valor vai estar entre 0 e 9
            x--;

            do {
                printf("Tentativa %d: ", tentativa);
                scanf("%d", &escolha);

                if(escolha > x)
                    printf("\nO NUMERO E MENOR\n");

                    if(escolha < x)
                        printf("\nO NUMERO E MAIOR\n");

                      if(escolha == x)
                            printf("Parabens, voce acertou!!");
                            tentativa--;
                      }
                      while(tentativa != 0);

                      return 0;
}


*/