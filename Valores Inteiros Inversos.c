//EXERCICIO 1
//Faça uma solução para ler 10 valores inteiros.
//Em seguida, imprima-os na ordem inversa
//(o último elemento deverá ser o primeiro a ser impresso).
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
