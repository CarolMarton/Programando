/*
 * Lista - Guanabara - Exercicio
 *
 * 14) A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
 *     um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
 *     quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
 *     sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.
 *
 *     Carol Marton   09/07/2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){
		
		
		float dias, km, diaria, km_total, total_conta;
		
		printf(" \n Quantos dias voce ficou com o carro: ");
		scanf("%f", &dias);
		
		printf(" \n O total a pagar pelas diarias eh: R$%.2f\n", diaria = (dias*90));
		
		printf(" \n Quantos kms foram percorridos: ");
		scanf("%f", &km);
		
		printf(" \n O total a pagar pelos km eh: R$%.2f\n", km_total = (km*0.2));
		
		printf(" \n Total a pagar: R$%.2f \n Obrigada por utilizar nossos servicos!", total_conta = (km_total+diaria));
		
				
		



		return 0;
	}
