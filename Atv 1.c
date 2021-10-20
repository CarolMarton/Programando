#include <stdio.h>
#include <stdlib.h>
	
	//Função para criar o arquivo.
	FILE* AbreArquivo(){
    	//criando ponteiro do tipo FILE.
		FILE *arquivo;
    	//comando que cria o arquivo e mostra o modo que quer abrir.
		arquivo = fopen("entrada.txt", "w");
			
			//Se houver algum erro, o ponteiro apontará para NULL
		    if(arquivo==NULL)
			{      
		        printf("Nao foi possivel abrir o arquivo!");
		        exit(0);
		    }
		
		return arquivo;
	}

	//Função para fechar o arquivo
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
	
	
