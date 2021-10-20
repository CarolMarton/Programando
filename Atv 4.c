//Caroline Marton
//Atv 4
#include <stdio.h>
#define SIZE 10

	int main(){
		int i, j;
		//4.A
		float numbers [SIZE] = {10.0, 11.1, 12.2, 13.3, 14.4, 15.5, 16.6, 17.7, 18.8, 19.9};
		//4.B
		float *nPtr;
		//4.C
		for (i=0; i<SIZE; i++){
			printf("%.2lf ", numbers[i]);	
		}
	
		//4.D
		nPtr = &numbers;
		
		printf("\nEndereco: %x\n", &numbers);
		printf("Conteudo ptr: %x\n", nPtr);
		
		//4.E
		nPtr = numbers;
		for (i=0; i<SIZE; i++){
			printf("%.2lf ", nPtr[i]);	
		}
		//4.F 
		
		//4.G
		printf("\n{");
		for (i=0; i<SIZE; i++){
			
			printf("%.2lf ", nPtr[i]);	
		}
		printf("}");
		
		//4.H 
		
		//4.I
	
		nPtr = numbers;
		printf("%d", *(nPtr+12));
		
		//4.J   
		nPtr = numbers[4];
		printf("%lf", *(nPtr-=8));
		
	return 0;
	
	}

