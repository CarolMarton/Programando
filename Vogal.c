//EXERCICIO 2 - VOGAL
#include <stdio.h>
#include <string.h>


    int main (){

        char v[10] = {'\0'};
        int i;

        for (i=0; i<10; i++){
            printf("\nDigite uma letra: ");
            scanf(" %c", &v[i]);
        }

        for (i=0; i<10; i++){
           if ((v[i] == 'a'|| v[i] == 'A') || (v[i] == 'e' || v[i] == 'E') || (v[i] == 'i' || v[i] == 'I') || (v[i] == 'o' || v[i] == 'O') || (v[i] == 'u' || v[i] == 'U'))
                printf("\nLetra digitada na posicao [%d] eh vogal: %c \n", i, v[i]);
        }




    return 0;
    }

