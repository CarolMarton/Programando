//Caroline Marton 27/07.
//Exercicio 1 - Lista de Modularidade.
/* Escreva uma programa em C para ler o raio de uma esfera e calcular a sua �rea. 
   O c�lculo  da �rea deve ser implementado como uma fun��o. 
   Considere o c�lculo da �rea de um c�rculo como: area = pi*raio^2.
 */
 
#include <stdio.h>
#include <stdlib.h>

	
	area(){
		float raio, soma, pi = 3.14;	
		
		printf("Digite o valor do raio: ");
		scanf("%f", &raio);
		
		soma = pi*(raio*raio);
		printf("\n A area do circulo eh: %.2f", soma);
		
		printf("\n");
		printf("\n");
	}
	
	
	int main(){
				
		area();
				
		return 0;
	}
