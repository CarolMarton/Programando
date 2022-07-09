/* 
 * Lista - Guanabara - Exercicio 6
 *
 * 6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
 *    sucessor.
 *    Ex:
 *    Digite um número: 9
 *    O antecessor de 9 é 8
 *    O sucessor de 9 é 10
 *
 *    Carol Marton
 */
#include <stdio.h>
#include <stdlib.h>

    int main(){
		
		int num1;
		
			printf(" \n Digite um numero: ");
			scanf(" %d", &num1);
			
			printf(" \n O antecessor de %d eh %d", num1,  (num1-1));
			printf(" \n O sucessor de %d eh %d", num1,  (num1+1));
			



		return 0;
	}
