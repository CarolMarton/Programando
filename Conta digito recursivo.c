//Caroline Marton 
//Atv 6
#include <stdio.h>

	int conta_digito(int n){
		
		int contando = 1;
		
				if (n >= 10){
					n = n/10;
					contando = contando + conta_digito(n);
			}
			return contando;	
	}
	
	int main(){
		
		int n, contando;
		
		printf(" Digite um valor inteiro: ");
		scanf("%d", &n);
		contando = conta_digito(n);
		printf(" O numero de digitos eh: %d", contando);
		
		return 0;
	}
