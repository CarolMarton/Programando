//Caroline Marton
//Atv 3
#include <stdio.h>
#include <stdlib.h>

    void soma(int , int); //Declara��o do prot�tipo

    int main (){ //M�dulo Principal
        int a, b;
        soma(a,b);  //Passagem de par�meto por valor
    return 0;
    }

    void soma (int a, int b){ //Defini��o do prot�tipo
        //Usu�rio entra com os valores inteiros
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &a);
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &b);
        // Soma e mostra na tela
        printf("\n\t %d + %d = %d\n\n", a, b, a+b);
    }
