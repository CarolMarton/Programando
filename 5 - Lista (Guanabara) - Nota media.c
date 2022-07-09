/* 
 * Lista - Guanabara - Exercicio 5
 *
 * 5) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
 *    na tela a sua média na disciplina.
 *    Ex:
 *    Nota 1: 4.5
 *    Nota 2: 8.5
 *    A média entre 4.5 e 8.5 é igual a 6.5
 *
 *    Carol Marton
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){
		
		float nota1, nota2, media;
		
			printf(" \n Nota 1: ");
			scanf(" %f", &nota1);
			printf(" \n Nota 2: ");
			scanf(" %f", &nota2);
			
			printf(" \n A media entre %.2f e %.2f eh %.2f", nota1, nota2, media = (nota1+nota2)/2);

		return 0;
	}
