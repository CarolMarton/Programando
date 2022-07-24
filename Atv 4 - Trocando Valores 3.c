//Carol Marton
//Exercicio 4 
// Recebendo valores inteiros e alterando na saida.
#include <stdio.h>

	void swap (int *p1, int *p2, int *p3);
	
	int main(){
		
		int a, b, c;
		printf("\n Digite o valor de A: ");
		scanf("%d", &a);
		printf("\n Digite o valor de B: ");
		scanf("%d", &b);
		printf("\n Digite o valor de C: ");
		scanf("%d", &c);
		
		swap(&a, &b, &c);
		
		printf("\n O valor de A eh: %d", a);
		printf("\n O valor de B eh: %d", b);
		printf("\n O valor de C eh: %d", c);
				
		
	return 0;
	}
	
	void swap (int *p1, int *p2, int *p3){
		
		int temp;
		
		temp = *p1;
		*p1 = *p2;
		*p2 = *p3;
		*p3 = temp;
			
	}
