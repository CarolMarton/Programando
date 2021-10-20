//Caroline Marton
//Atividade 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main(){
		int a = 0, b = 1, aux, i;
		FILE *fib_arq;
		
		fib_arq = fopen("30_fib.txt", "w");
			if(fib_arq == NULL)
			{
				printf("Erro ao abrir o arquivo!");
				return 0;
			}
		printf("Abra seu arquivo pra ver a sequencia Fibonacci");	
		fprintf(fib_arq, "SEQUENCIA FIBONACCI\n");
		fprintf(fib_arq, " %d\n", b);
		
		for (i = 0; i <= 28; i++)
		{
			aux = a + b;
			a = b;
			b = aux;
			fprintf(fib_arq, " %d\n", aux);
		}	
		close(fib_arq);
		
	return 0;
	}
