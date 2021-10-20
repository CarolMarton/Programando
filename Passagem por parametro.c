//Caroline Marton
//Atv 3
#include <stdio.h>
#include <stdlib.h>

    void soma(int , int); //Declaração do protótipo

    int main (){ //Módulo Principal
        int a, b;
        soma(a,b);  //Passagem de parâmeto por valor
    return 0;
    }

    void soma (int a, int b){ //Definição do protótipo
        //Usuário entra com os valores inteiros
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &a);
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &b);
        // Soma e mostra na tela
        printf("\n\t %d + %d = %d\n\n", a, b, a+b);
    }
