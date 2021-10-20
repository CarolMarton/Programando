// SEQUENCIA DE FIBONACCI RECURSIVA.
//Caroline Marton
#include <stdio.h>

	int gfib(int n)
	{
		if (n == 1)
		{
			return 0;
		}
		
		if (n == 2)
		{
			return 1;
		}
		
		return gfib(n-1)+gfib(n-2);	
	}
	
	
	int main()
	{
		int n;
		
			printf("\n Digite um numero para ver sua sequencia:  ");
			scanf("%d", &n);
			
			printf("\n O elemento n da sequencia eh: %d\n\n", gfib(n));
			
		return 0;
	}
