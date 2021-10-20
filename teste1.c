#include<stdio.h>
#include <stdlib.h>


int main(){
    int   qnt_M,qnt_F,x;

    float alt,menor_alt,maior_alt,soma_altF,media_altF;
    char sexo;
         qnt_M = 0;
         qnt_F = 0;
         maior_alt = 0;
         menor_alt = 9999;

   para x de 1 ate 5 facafor(i=0 ; i <x ;i++){
   printf ("Informe o seu sexo M/F : ");
   scanf (sexo);
   printf ("Informe a sua altura : ");
   scanf (alt);

        if (alt > maior_alt) {
           maior_alt <- alt
        }
        if (alt < menor_alt) {
           menor_alt = alt
        f}
        if sexo <> "F" {
           qnt_M = qnt_M + 1
        }else
           soma_altF = alt + soma_altF
           qnt_F = qnt_F + 1
           media_altF = soma_altF / qnt_F
       }


   printf ("A maior altura = %f",maior_alt)
   printf("A menor altura = %f",menor_alt)
   printf ("A quantidade de homens = %f",qnt_M)
   printf ("A media da altura das mulheres = %f",media_altF)
}
