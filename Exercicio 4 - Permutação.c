//Exercicio 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//EXERCICIO 4.A
	int conta_digito(int n, int d){
		
		int contando = 0, resto;
		
			//Contar quantas vezes aparece o digito
			while (n != 0){
				resto = n%10;
				n = n/10;
				if (resto == d)
					contando++;
			}
			return contando;	
	}
	
	//EXERCICIO 4.B
	int main (){
		setlocale(LC_ALL, "");
		
		int a, b, d, permutacao;
		
		//entrando com os numeros
		printf("Digite um numero inteiro: ");
		scanf("%d", &a);
		printf("Digite um numero inteiro: ");
		scanf("%d", &b);
		
		permutacao = 1;
		
		//verificar se é permutação
		for (d=1; d<9; d++)
		{
			if (conta_digito (a,d) != conta_digito(b,d))
			permutacao = 0;
		}
			if (permutacao == 1)
				printf("\n %d é permutação de %d\n", a, b);
			else 
				printf("\n %d não é permutação de %d\n", a, b);
			
		return 0;
	}
