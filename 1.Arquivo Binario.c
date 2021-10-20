//Carol Marton
//Atv 1.
#include <stdio.h>

	int main(){
		int num1, num2;
		//ponteiro pára o arquivo
		FILE *pArq;
		
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &num1);
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &num2);
		
		//abrindo arquivo
		pArq = fopen("entrada.dat", "rb");
		
		//verifica se o arquivo foi criado
		if (pArq == NULL)
		{
			printf(" Erro! Arquivo não foi criado");
			return 0;
		}
		else
		{
			printf("\n Arquivo criado com sucesso!\n");
		}
		
		
		//Gravando dados no arquivo
		//Sintaxe: fwrite(&variavel, num_bytes, num_registro, arquivo);
		fread(&num1, sizeof(int), 1, pArq);
		
		
		fread(&num2, sizeof(int), 1, pArq);
		
		//fechando o arquivo
		fclose(pArq);
	
	return 0;
	}

//Atv 2
/*Não é possivel ver o conteudo gravado, pois os dados 
   estão em binario, linguagem usada pelo computador.
*/