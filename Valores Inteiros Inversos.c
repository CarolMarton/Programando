//EXERCICIO 1
//Fa�a uma solu��o para ler 10 valores inteiros.
//Em seguida, imprima-os na ordem inversa
//(o �ltimo elemento dever� ser o primeiro a ser impresso).
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

    int main (){
        setlocale(LC_ALL, "");

        int i, n[10];


        for(i = 0; i < 10; i++){
            printf("\nDigite um valor inteiro: ");
            scanf("%d", &n[i]);
        }
            for(i=10; i>=0; i--){
                printf("\nIndice invertido: %d\n", n[i]);
            }

    return 0;
    }
