//Caroline Marton

#include <stdio.h>
#include <math.h>

	float potencia (float x, int n)
	{
		if (n == 0)
		
			return 1;
		
		
		else 
		
		
			return x * potencia (x, n - 1);
		
	} 
	
	
	int main()
	{
		float x;
		int n;
		
		printf("\n Digite o valor de X: ");
		scanf(" %f", &x);
		
		printf("\n Digite o valor de N: ");
		scanf(" %d", &n);
		
		
		printf("\n %.2f elevado a %d = %.2f\n\n", x, n, potencia(x,n));
		
		return 0;
	}
