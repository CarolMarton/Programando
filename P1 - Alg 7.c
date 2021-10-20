#include <stdio.h>
#include <stdlib.h>
	
	struct agenda 
	{
		char nome [50];
		char email [50];
		int tel[12];
	};
	
	
	void ler_pessoa(){
		
		struct agenda pessoas;
		
		printf("\n Digite o nome: \n");
		scanf(" %s", pessoas.nome);
		
		printf(" Digite o email: \n");
		scanf(" %s", pessoas.email);
		
		printf(" Digite o numero: \n");
		scanf("%d", &pessoas.tel);
		
	}
	
	void mostrar_pessoa(){
		
	}	
	
	int main ()
	{
		
		int op;
		
			do
			{
				printf(" ------------------\n");
				printf("       MENU        \n");
				printf(" ------------------\n");
				printf("\n");
				printf(" ESCOLHA UMA OPCAO: \n 1 - Ler pessoa \n 2 - Mostrar pessoa \n ");
				scanf(" %d", &op);
				
				switch(op)
				{
					
					case 1:
						ler_pessoa();
					break;
					
					case 2:
						mostrar_pessoa();
					break;
					
					default:
						printf("OPCAO INVALIDA!");
					
				}
				
			} while (op != 2);
		
		return 0;	
	}
