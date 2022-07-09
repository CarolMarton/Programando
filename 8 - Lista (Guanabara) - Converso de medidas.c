/* 
 * Lista - Guanabara - Exercicio 8
 * 
 * 8) Desenvolva um programa que leia uma distância em metros e mostre os valores
 *    relativos em outras medidas.
 *    Ex:
 *    Digite uma distância em metros: 185.72
 *    A distância de 85.7m corresponde a:
 *    0.18572Km
 *    1.8572Hm
 *    18.572Dam
 *    1857.2dm
 *    18572.0cm
 *    185720.0mm
 *
 *    Carol Marton
 *
 */

#include <stdio.h>
#include <stdlib.h>

    int main(){
		
		float metros, km, hm, dam, dm, cm, mm;
		
		printf(" \n Digite uma distancia em metros: ");
		scanf("%f", &metros);
		printf(" \n O valor %.2f metros convertido eh igual a: ", metros);
		
		printf(" \n Kilometros: %.3fkm", km = (metros/1000));
		printf(" \n Hectometro: %.3fhm", hm = (metros/100));
		printf(" \n Decametros: %.3fdam", dam = (metros/10));
		printf(" \n Decimetros: %.3fdm", dm = (metros*10));
		printf(" \n Centimetro: %.3fcm", cm = (metros*100));
		printf(" \n Milimetros: %.3fmm", mm = (metros*1000));	
		
		return 0;
  
	}