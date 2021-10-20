//Exercicio 4
#include<stdio.h>
#include<stdlib.h>


    int main (){

        float  num1, num2, soma, sub, div, mult;

            printf("\nDigite um valor decimal: \t", num1);
            scanf ("%f", &num1);
            printf("\nDigite um valor decimal: \t", num2);
            scanf ("%f", &num2);

            soma = num1 + num2;
            sub = num1 - num2;
            div = num1/num2;
            mult = num1*num2;

            printf ("\nO resultado da soma e: %f", soma);
            printf ("\nO resultado da subtracao e: %f", sub);
            printf ("\nO resultado da divisao e: %f", div);
            printf ("\nO resultado da multiplicacao e: %f", mult);









        return 0;
}
