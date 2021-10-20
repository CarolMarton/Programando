//Exericio 3 - Fibonacci
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int num, b, aux, i, n;

        num = 0;
        b = 1;

        printf("Digite um número: ");
        scanf("%d", &n);
        printf("\nSequencia de Fibonacci:\n\n");
        printf("%d\n", b);

            for(i = 0; i < n; i++) {
                aux = num + b;
                num = b;
                b = aux;
                printf("%d\n", aux);
            }
    return 0;
}
