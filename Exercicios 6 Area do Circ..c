//Exercicio 6
#include <stdio.h>
#include<stdlib.h>

    int main(){

        float raio , area , pi=3.14;

            printf ("Informe o raio do circulo: ");
            scanf("%f",&raio);

            area=(raio*raio)*pi;

            printf("A area do circulo e: %.2f", area);

            return 0;

}
