//Caroline Marton
#include <stdio.h>

	int MDC (int a, int b)
	{
		if (a == 0)
		{
			return b;	
		}
		return MDC(b % a, a);
	}
	
	
	int main (){
	
		int a, b;
		
		printf("\nDigite um valor inteiro: ");
		scanf("%d", &a);
		printf("\nDigite um valor inteiro: ");
		scanf("%d", &b);
		
		printf("\n O MDC eh: %d", MDC(a, b));
	
	
	return 0;
	}
