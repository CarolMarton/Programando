//Caroline Marton
//Atv 5. 
#include<stdio.h>

	

	
	int invert(int n)
	{
	    if(n==0)
	      return n;
	     
			else
	    	{
	    	
	    		printf("%d", n % 10);
	    		n=n / 10;
	    		return invert(n);
	    	}
	    
	return 0;
	 }
	
	int main()
	{
		int numero;
		printf(" Digite um numero:");
	    scanf("%d", &numero);
	    invert(numero);
	   
	   return 0;
	}
