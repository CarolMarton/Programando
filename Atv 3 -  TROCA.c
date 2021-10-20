//Carol Marton
//Exercicio 3
#include <stdio.h>

	void swap (int *p1, int *p2);
	
	int main(){
		
		int i, j;
		printf("\n Digite o valor de I: ");
		scanf("%d", &i);
		printf("\n Digite o valor de J: ");
		scanf("%d", &j);
		
		swap(&i, &j);
		
		printf("\n O valor de I eh: %d", i);
		printf("\n O valor de J eh: %d", j);
				
		
	return 0;
	}
	
	void swap (int *p1, int *p2){
		
		int temp;
		
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
			
	}
