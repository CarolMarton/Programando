/*EU NAO ESTOU CONSEGUINDO FAZER AS ATVS DE LISTA (AINDA)
   ESTOU CONSUMINDO TODO O CONTEUDO QUE ACHO SOBRE,
   ESTOU ENVIANDO ESSE COD PARA NÃO FICAR COM FALTA,
   MAS ELE CONTEM UM ERRO POIS NÃO RODA O COMANDO FREE 
   E VI TUTORIAIS ONDE OS PROFESSORES USARAM, ALGUMAS PESSOAS
   ME INFORMARAM QUE É UM COMANDO DE C++, OUTRAS FALARAM QUE POSSO USAR EM C.
   AGUARDO UM RETORNO, OBRIGADA!
*/
   
#include <stdio.h>
#include <stdlib.h>

	typedef struct Elemento{
		int info;
		struct Elemento *prox;
	} TElemento;
	
	typedef struct Lista{
		 TElemento *inicio;
		 TElemento *fim;
	} TLista;
	
	//DEFINE SE A LISTA ESTA VAZIA.
	void inicializar_lista (TLista *lista)
	{
		lista->inicio = NULL;
		lista->fim = NULL;
	}
	
	//INSERINDO DADOS.
	int inserir_elemento (TLista *lista)
	{
		TElemento *novo;
		novo = new TElemento;
		
		printf("\n Digite um valor: ");
		scanf("%d", &novo->info);
		
		novo->prox = NULL;
		if (lista->inicio == NULL)
		{
			lista->inicio = novo;
			lista->fim = novo;
		}
		else
		{
			lista->fim->prox = novo; //ENCADEAMENTO.
			lista->fim->novo;
		}
		
	}
	
	void apresenta_elementos (TLista *lista)
	{
		TElemento *aux;
		aux = lista->inicio;
		if (aux == NULL)
		{
			printf("\n Lista Vazia!");
		}
		else
		{
			while (aux != NULL)
			{
				printf("\n Valor: %d", aux->info);
				aux = aux->prox;
			}
		}
	}
	
	void excluir_elemento(TLista *lista)
	{
		int valor;
		TElemento *anterior, *atual;
		printf("\n Informe o elemento que deseja excluir: ");
		scanf("%d", &valor);
		
		if (lista->inicio == NULL)
		{
			printf("\n Lista Vazia!");		
		}
			else
			{
				anterior = lista->inicio;
				atual = lista->inicio;
				
				while (atual != NULL)
				{
					if(atual->info == valor)
					{
						if(atual == lista->inicio)
						{
							lista->inicio = lista->inicio->prox;
							free (atual);
							break;
						}
							else 
							{
								if(atual == lista->fim)
								{
									lista->fim = anterior;
								}
								
								anterior->prox = atual->prox;
								free (atual);
								break;
							}
					}
						else 
						{
							anterior = atual;
							atual = atual->prox;
						}
						
				}
			}
	}
	
	int main()
	{
		TLista L1;
		inicializa_lista(&L1);
		
		int opcao;
		
		do
		{
			printf("\n MENU \n");
			printf(" 1 - Inserir Numero");
			printf("\n 2 - Listar Numeros Inseridos");
			printf("\n 3 - Excluir Numero Inserido \n");
			printf(" ESCOLHA UMA OPCAO: ");
			scanf("%d", &opcao);
			
			switch (opcao)
			{
				case 1:
					inserir_elemento(&L1);
				break;
				
				case 2: 
					apresentar_elemento(&L1);
				break;
				
				case 3:
					excluir_elemento(&L1);
				break;
				
				default:
					printf("\n OPCAO INVALIDA!");
				getch();
				break;	
			}
				
		} while (opcao != 3);
				
		
	return 0;
	}
	
	
