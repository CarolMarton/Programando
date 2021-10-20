//Caroline Marton
// Não consegui concluir esse exercicio.
#include <stdio.h>

	int digitos (int n)
	{
		int cont = 1;
		
		while (n > 9)
		{
			n = n / 10;
			cont += 1;
		}
		
		return cont;
		
		
	}
	
	int main ()
	{
		int n;
		
		printf("\n Digite um numero: ");
		scanf("%d", &n);
		
		printf("\nO numero de algarismo eh: %d ", digito(n));
		
		//digitos(n);
		
		return 0;
	}
