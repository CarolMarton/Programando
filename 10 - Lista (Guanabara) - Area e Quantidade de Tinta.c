/*
 * Lista - Guanabara - Exercicio
 * 
 * 10) Faça um algoritmo que leia a largura e altura de uma parede, calcule e mostre a área a ser 
 *     pintada e a quantidade de tinta necessária para o serviço,
 *     sabendo que cada litro de tinta pinta uma área de 2metros quadrados.
 *
 *     Carol Marton
 *
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){	
    	
    	float largura, altura, area, t_tinta;
    	
    	printf(" \n Digite a largura da parede: ");
    	scanf("%f", &largura);
    	
    	printf(" \n Digite a altura da parede: ");
		scanf("%f", &altura);
		
		printf(" \n A area quadrada de sua parede eh: %.2f", area = (largura*altura));
		
		
		printf(" \n Sera necessario %.2fL de tinta para pintar sua parede!", t_tinta = (area/2));


		return 0;
	}
