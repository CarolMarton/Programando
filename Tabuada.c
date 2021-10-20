//Exercicio 2 - Tabuada
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main(){
    setlocale(LC_ALL, "");

    int tabuada = 0, i;

    printf("\nEscolha um número entre 1 e 4: ");
    scanf("%d", &tabuada);

        if (tabuada >= 5)
            printf("Invalido");

                else
                {
                    for (i = 1; i <= 10; i++){
                    printf("\n%dX%d = %d\n", tabuada, i, i*tabuada);
                    }
                }


    return 0;
}
