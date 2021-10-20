//Caroline Marton
//Atv 1
#include <stdio.h>

	struct ficha{
		char nome[100];
		double salario;
		int CPF;
		int idade;
		char sexo;
	};
	
	int main(){
	
		struct ficha f;
		
			printf(" Nome: ");
			gets(f.nome);
			
			printf("\n Salario: ");
			scanf("%lf", &f.salario);
			
			printf("\n Digite seu CPF: ");
			scanf("%d", &f.CPF);
			
			printf("\n Digite sua idade: ");
			scanf("%d", &f.idade);
			
			printf("\n Sexo M ou F? ");
			scanf("%s", f.sexo);
			
			printf(" Dados cadastrado com sucesso!\n");
			
	return 0;
	}

