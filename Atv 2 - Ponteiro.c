//Carol Marton
//Exercicio 2
#include <stdio.h>
#include <stdlib.h>

	int main(){
		
		int x = 2, y = 8;
		int *p, *q;	
		 
		p = &x;
		q = &y;
		//(A)
		printf("\n O endereco de X eh: %x ", &x);
		printf("\n O valor de X eh: %d \n", x);
		//(B)
		printf("\n O valor de P eh: %d ", x);
		printf("\n O valor de *P eh: %x \n", *p);
		//(C)
		printf("\n O endereco de Y eh: %x ", &y);
		printf("\n O valor de Y eh: %d \n", y);
		//(D)
		printf("\n O endereco de P eh: %x \n", &p);
		
		
	return 0;
	}
