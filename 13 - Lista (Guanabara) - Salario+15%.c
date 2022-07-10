/*
 * Lista - Guanabara - Exercicio 13
 *
 * 13) Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o
 *     seu novo salário, com 15% de aumento.
 *
 *     Carol Marton     09/07/2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){

		float salario, aumento;
		
		printf(" \n Digite seu salario: ");
		scanf("%f", &salario);
		
		
		printf(" \n Seu salario atual com 15%% de aumento eh: R$%.2f", aumento = salario+(salario*0.15));
		
		


		return 0;
	}
