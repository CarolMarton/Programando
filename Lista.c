//Carol Marton
// Atv 3 
#include <stdio.h>
#include <stdlib.h>

	typedef struct no No;
	
	struct no
	{
		int chave;
		struct no *prox;
	};
	
	No* criar_no()
	{
		No *novo = (No*)malloc(sizeof(No));
		return novo;
	}
	
	No* inserir_no_inicio(No* Lista, int dado)
	{
		No *novo_no = criar_no();
		novo_no->chave = dado;
		
			if(Lista == NULL)
			{
				Lista = novo_no;
				novo_no->prox = NULL;
			}
			else 
			{
				novo_no->prox = Lista;
				Lista = novo_no;
			
			}
		return Lista;	
	}
	
	void imprimir_lista(No* Lista)
	{
		No *aux = Lista;
		
		while (aux != NULL)
		{
			printf("%d", aux->chave);
			aux = aux->prox;
		}
	}
	                                                                
	int main(){
		
		No *Lista = NULL;
		Lista = inserir_no_inicio(Lista, 10);
		imprimir_lista(Lista);
		
		return 0;
	}
	
	
	
	

