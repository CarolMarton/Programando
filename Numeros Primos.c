//Exercicio 1 - Numero primo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main(){
    setlocale(LC_ALL, "");

    int num, i, resultado = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {

        if (num % i == 0) {
        resultado++;
        }
    }

        if (resultado == 0)
            printf("\nO %d � um n�mero primo!\n", num);
                else
                    printf("\nO %d n�o � um n�mero primo!\n", num);

    return 0;
}
