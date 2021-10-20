//Potencia com POW 
#include <stdio.h>
#include <math.h>

	int potencia (float x, int n)
	{
		if (n == 0)
		{
			return 1;
		}
		
		else (n > 1);
		
		
			return (pow(x,n));
		
	} 
	
	
	int main()
	{
		float x;
		int n;
		
		printf("\n Digite o valor de X: ");
		scanf(" %f", &x);
		
		printf("\n Digite o valor de N: ");
		scanf(" %d", &n);
		
		
		printf("\n %.2f elevado a %d = %d\n\n", x, n, potencia(x,n));
		
		return 0;
	}
