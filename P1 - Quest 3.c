/*Reescreva o c�digo utilizando duas fun��es.
 Uma fun��o deve calcular a soma utilizando
 chamada por refer�ncia e a segunda fun��o
 exibe o resultado utilizando chamada por valor.*/

#include <stdio.h>

	void soma (int *somar2, int *n2);
	
	int main () {
	  
	  int n, somar = 0, result, num;
	  scanf("%d", &n);
	  
	   soma (&somar, &n); 
	  
		  
	  return 0;
	}

	void soma (int *somar2, int *n2){
		int resp;
		while (*n2 > 0) {
	    *somar2 = *somar2 + *n2;
	    *n2 -= 1;
	    resp = *somar2;
	  }
	  resultado(resp);
	}
	
	void resultado (int resp){
		
		printf("A soma dos primeiros numeros e: %d", resp);
	}
