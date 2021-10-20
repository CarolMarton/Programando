//Caroline Marton
//Atividade 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main(){
		int a = 0, b = 1, aux, i;
		FILE *fib_arq;
		
		fib_arq = fopen("seq30_fib.dat", "wb");
			if(fib_arq == NULL)
			{
				printf("Erro ao abrir o arquivo!");
				return 0;
			}
		FILE *fib_arq2;
		fib_arq2 = fopen("Seq302_fib.dat", "rb");
		fread(&fib_arq, sizeof(int), 30, fib_arq);
		//não consigo fazer somente leitura
		
		printf(" Abra seu arquivo!");
		fprintf(fib_arq, " %d\n", b);
		
		for (i = 0; i <= 28; i++)
		{
			aux = a + b;
			a = b;
			b = aux;
			fwrite(&aux, sizeof(int), 30, fib_arq);
			
		}	
		
		
		close(fib_arq);
		
	return 0;
	}
