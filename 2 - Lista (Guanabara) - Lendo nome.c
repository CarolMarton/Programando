/* 
 * Lista - Guanabara - Exercicio 2
 *
 * 2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas
 *    para ela:
 *    Ex:
 *    Qual é o seu nome? João da Silva
 *    Olá João da Silva, é um prazer te conhecer!
 *
 *    Carol Marton
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){
		
		char nome[20];
		
		printf("\n Qual e o seu nome: ", nome);
		scanf(" %s", nome);
		printf("\n\n Ola %s, e um prazer te conhecer!\n", nome);



		return 0;
	}
