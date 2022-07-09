/* 
 * Lista - Guanabara - Exercicio 7
 * 
 * 7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
 *    sua terça parte.
 *    Ex:
 *    Digite um número: 3.5
 *    O dobro de 3.5 é 7.0
 *    A terça parte de 3.5 é 1.16666
 *
 *    Carol Marton
 *
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){
		
		float  num, dobro, tercap;
		
		printf(" \n Digite um numero real: ");
		scanf(" %f", &num);
		
		printf(" \n O dobro de %.2f eh %.2f", num, dobro = num*2);
		printf(" \n A terca parte de %.2f eh %.2f", num, tercap = num/3);

		return 0;
	}
