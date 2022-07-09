/* 
 * Lista - Guanabara - Exercicio 9
 * 
 * Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
 * e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.
 * 
 * Carol Marton
 *
 */	
 
#include <stdio.h>
#include <stdlib.h>

    int main(){
		
		float vreal, dolar;
		
		printf(" \n Digite a quantia exixtente em sua carteira: ");
		scanf("%f", &vreal);
		
		printf(" \n Convertendo o seu saldo de R$%.2f sera possivel obter U$%.2f", vreal, dolar = (vreal/3.45));

		return 0;
	}
