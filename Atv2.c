//Caroline Marton
//Atividade 2
#include <stdio.h>
#include <stdlib.h>

	
	int main(){
		FILE *arquivo1;
		int num1, num2, soma;
		arquivo1 = fopen("entrada.txt", "w");
			if(arquivo1 == NULL)
			{
				printf("Erro ao abrir o arquivo!");
				return 0;
			}
		FILE *arquivo2;
		arquivo2 = fopen("saida.txt", "w");
			
	    	printf(" Digite um numero inteiro: ");
	    	scanf("%d", &num1);
	    	
		//Armazena no arquivo.
	    	fprintf(arquivo1, " %d", num1);
	    
	    	printf(" Digite um numero inteiro: ");
	    	scanf("%d", &num2);
	    
	    	soma = num1 + num2;
	    
	    	fprintf(arquivo2, "%d + %d = %d", num1, num2, soma);
	    
	    	printf(" Dados gravados com sucesso!\n");
	    	printf(" Abra seu arquivo .txt para ver o resultado.");
		
		
		fclose(arquivo1);
		fclose(arquivo2);
		
	return 0;
	}
