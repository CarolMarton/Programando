/* 
 * Lista - Guanabara - Exercicio 3
 *
 * 3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
 *    final uma mensagem.
 *    Ex:
 *    Nome do Funcionário: Maria do Carmo
 *    Salário: 1850,45
 *    O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
 *    
 *    Carol Marton
 */


#include <stdio.h>
#include <stdlib.h>

    int main(){
		
		char nome[20];
		float salario;
		
		printf("\n Digite seu nome: ", nome);
		scanf(" %s", nome);
		printf("\n Digite seu salario: ");
		scanf(" %f", &salario);
		
		printf("\n O funcionario %s tem um salario de %.2f.", nome, salario);



		return 0;
	}
