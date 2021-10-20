	/*
	Outras Fun��es para manupula��o de arquivos
	FPUTC - Grava 1 Caracter no arquivo
	FGETC - L� 1 Caracter do arquivo
	FPUTS - Grava uma sequ�ncia de Caracteres no arquivo
	FGETS - L� uma sequ�ncia de Caracteres do arquivo
	FWRITE - Grava certa quantidade de bytes no arquivo
	FREAD - L� certa quantidade de bytes do arquivo
	*/


#include <stdio.h>
#include <stdlib.h>

	int main(){
		FILE *file;
		file = fopen("teste.txt", "w");
			if(file == NULL)
			{
				printf("ERROR");
				return 0;
			}
		
		fprintf(file, "Deu certo!");
		fclose(file);
	return 0;
	}


//Criando arquivo com fun��es
#include <stdio.h>
#include <stdlib.h>
	
	//Fun��o para criar o arquivo.
	FILE* AbreArquivo(){
    	//criando ponteiro do tipo FILE.
		FILE *arquivo;
    	//comando que cria o arquivo e mostra o modo que quer abrir.
		arquivo = fopen("teste2.txt", "w");
			
			//Se houver algum erro, o ponteiro apontar� para NULL
		    if(arquivo==NULL)
			{      
		        printf("Nao foi possivel abrir o arquivo!");
		        exit(0);
		    }
		
		return arquivo;
	}

	//Fun��o para fechar o arquivo
	void FecharArquivo(FILE *arquivo){
		//comando que fecha o arquivo.
	    fclose(arquivo);
	}


	int main(){
   
    FILE *arquivo;
	int num1, num2;
	
	    arquivo = AbreArquivo();
	
	    printf(" Digite um numero inteiro: ");
	    scanf("%d", &num1);
	    //Armazena no arquivo.
	    fprintf(arquivo, " %d", num1);
	    
	    printf(" Digite um numero inteiro: ");
	    scanf("%d", &num2);
	    //Armazena no arquivo.
	    fprintf(arquivo, "\n %d", num2);
	    
	    printf(" Dados gravados com sucesso!\n");
	    FecharArquivo(arquivo);

    	return 0;
	}
