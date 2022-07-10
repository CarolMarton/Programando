/*
 * Lista - Guanabara - Exercicio 12
 *
 * 12) Crie um programa que leia o preço de um produto, calcule e mostre o seu
 *     PREÇO PROMOCIONAL, com 5% de desconto.
 *
 * Carol Marton  09/07/2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){

		float produto, desconto;
		
		printf(" \n Digite o preco do produto a ser aplicado o desconto: ");
		scanf("%f", &produto);
		
		printf(" \n Aplicado 5%% de desconto: \n R$ %.2f", desconto = produto - (produto*0.05));



		return 0;
	}
