//Atv 3.
#include <stdio.h>

	int main(){
		int num1, num2, soma;
		//ponteiro pára o arquivo
		FILE *pArq1;
		//abrindo arquivo
		pArq1 = fopen("entrada.dat", "wb");
		//verifica se o arquivo foi criado
			if (pArq1 == NULL)
		{
			printf(" Erro! Arquivo não foi criado");
			return 0;
		}
		else
		{
			printf("\n Arquivo criado com sucesso!\n");
		}
		//criando segundo arquivo para leitura wb
		FILE *pArq2;
		pArq2 = fopen("saida.dat", "wb");
		
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &num1);
		//Gravando dados no arquivo
		//Sintaxe: fwrite(&variavel, num_bytes, num_registro, arquivo);
		fwrite(&num1, sizeof(int), 1, pArq1);
		
		
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &num2);
		fwrite(&num2, sizeof(int), 1, pArq1);
		
		
		
		
		
		soma = num1 + num2;
		
		fprintf(pArq2, " %d + %d  = %d", num1, num2, soma);
		
		printf("\n Dados gravados com sucesso!\n");
	    printf(" Abra seu arquivo .bin");
	    
		//fechando o arquivo
		fclose(pArq1);
		fclose(pArq2);
	
	return 0;
	}
