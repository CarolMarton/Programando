
//   VETORES E FORMTATA��ES

#include <stdio.h>
#include <locale.h>	
	
	int main(){
		setlocale(LC_ALL,"");
		
		int vetor[3];
			
			//LA�O P/ O USUARIO ENTRAR COM VALORES
			for (int i=0; i<3; i++)
			{
				printf("\nDigite a %d� posi��o do vetor: ", i+1);
				scanf("%d", &vetor[i]);	
		    }
				//MOSTRA  O VETOR DESENHADO
				printf("\nO vetor: \n");
				printf("| ");
			
			//SAIDA DO VETOR	
			for (int i=0; i<3; i++)
			{
				printf("\n%d� posi��o: %d", i+1, vetor[i]);
			
			//IDEIA DE FORMATA��O (VETOR DESENHADO).
			//	printf("%d | ", vetor[i]);
			}
		return 0;
	}
