/* 
 * Lista - Guanabara - Exercicio 4
 *
 * 4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
 *    entre eles.
 *    Ex:
 *    Digite um valor: 8
 *    Digite outro valor: 5
 *    A soma entre 8 e 5 é igual a 13.
 *
 *    Carol marton
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){

		int a, b, soma;
		
		printf(" \n Digite um inteiro A: ");
		scanf(" %d", &a);
		printf(" \n Digite um inteiro B: ");
		scanf(" %d", &b);
		
		
		printf(" \n A soma entre %d + %d = %d ", a, b, soma = a+b);


		return 0;
	}
