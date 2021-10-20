//Caroline Marton
//O IF está funcionando de forma errada, falei um o monitor de Laboratorio de prog 
  e ele me informou que estava correta a forma de comparar.

#include <stdio.h>
#include <string.h>
#include <locale.h>


	
	struct cadastro
	{
		char nome[50];
		
		char rua[30];
		char bairro[30];
	    	char cidade[30];
		char estado[30];
		char cep[8];
			
		int identidade[20];
		int telefone[12];
		int CPF[20];
		int idade[2];
		float salario;
		int estado_civil[1];
		char sexo[2]; 
	};
	
	int main(){
		setlocale(LC_ALL,"");
		
		int i;
		
		struct cadastro funcionario;
		
		for(i=1; i<=2; i++){
		
			printf("\n * * * * CADASTRO * * * * \n");
			printf("\n Nome: ");
			fgets(funcionario.nome, 50, stdin);
			
			printf("\n Endereço \n");
			printf(" Rua: ");
			fgets(funcionario.rua, 30, stdin);
			
			printf("\n Bairro: ");
			fgets(funcionario.bairro, 30, stdin);
			
			printf("\n Cidade: ");
			fgets(funcionario.cidade, 30, stdin);
			
			printf("\n Estado: ");
			fgets(funcionario.estado, 30, stdin);
			
			printf("\n CEP: ");
			scanf(" %d", &funcionario.cep);
			
			printf("\n RG: ");
			scanf(" %f", &funcionario.identidade);
			
			printf("\n Telefone: ");
			scanf(" %d", &funcionario.telefone);
			
			printf("\n Idade: ");
			scanf(" %d", &funcionario.idade);
			
			printf("\n Salario: ");
			scanf(" %f", &funcionario.salario);
			fflush(stdin);
			
			printf("\n Estado civil:\n 1 - SOLTEIRO(A) \n 2 - CASADO(A) \n 3 - DIVORCIADO(A) \n 4 - VIUVO(A)\n ");
			scanf(" %d", funcionario.estado_civil);
			fflush(stdin);
			
			printf("\n Sexo M ou F? ");
			scanf(" %s", funcionario.sexo);
			fflush(stdin);
			
			printf("\n");
			fflush(stdin);
	    }
			if (funcionario.estado_civil == 2){
				printf("\n O funcionario %s é Casado(a)", funcionario.nome);
			}
				else
				{
					printf("\n Nenhum funcionario é casado. \n");
				}
				
					if (funcionario.salario < 300.00){
						printf("\n O funcionario %s tem o salario maior que 300,00\n", funcionario.nome);
					}
					
						else {
							printf(" Nenhum funcionario com salario superior a 300,00\n");
						}
					
						printf(" Dados cadastrado com Sucesso!");
		
		return 0;
	}
	

	

