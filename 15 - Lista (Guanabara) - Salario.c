/*
 * Lista - Guanabara - Exercicio 15
 *
 * 15) Crie um programa que leia o número de dias trabalhados em um mês e mostre o
 *     salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25
 *     por hora trabalhada.
 *
 *     Carol Marton    10/07/2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){
		
		
		float ValorDia, salarioTotal, ValorHora = 25, dias;
		
		printf(" \n Quantos dias trabalhou: ");
		scanf("%f", &dias);
		
		ValorDia = 8*25;
		
		printf(" \n Salario por dias trabalhados: %.2f", 	salarioTotal = (ValorDia*dias));


		return 0;
	}
