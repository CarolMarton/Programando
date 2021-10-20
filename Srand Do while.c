#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

        int x, a, tt;
        do {
        srand((unsigned)time(NULL));
        x = rand() % 10;

        printf("%d", x);

        if (x>=0 && x<= 9)//colocar o x entre 0 a nove
        {
        if (5>0 )//colocar o x entre 0 a nove
        {
          printf("\n dica: o numero é maior do o digitado ");
        }
         if (5<0 )
        printf("\n dica: o numero é menor do o digitado ");

        tt++

    continue;
         if(tt>3)// para 3 tentativas
            {
         printf("\nvoce utilizou todas a tentativas ");



            }
        }while (tt>3)


        }
            return 0;
    }
