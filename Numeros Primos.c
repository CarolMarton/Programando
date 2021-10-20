//Exercicio 1 - Numero primo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main(){
    setlocale(LC_ALL, "");

    int num, i, resultado = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {

        if (num % i == 0) {
        resultado++;
        }
    }

        if (resultado == 0)
            printf("\nO %d é um número primo!\n", num);
                else
                    printf("\nO %d não é um número primo!\n", num);

    return 0;
}
