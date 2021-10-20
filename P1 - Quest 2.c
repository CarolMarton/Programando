//Carol Marton
//Prova lAB Questão 2
#include <stdio.h>
#include <stdlib.h>

	int main(){
		
		int a = 3;
		int *p = &a;	
		 
		
		printf("\n O valor de A eh: %d \n", a);
		printf("\n O endereco de &A eh: %x \n", &a);
		
		
		printf("\n O valor de P eh: %d ", p);
		printf("\n O endereco de &p eh: %x ", &p);
		printf("\n O valor de *P eh: %x \n", *p);
		
		
	return 0;
	}
