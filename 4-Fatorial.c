//Exercicio 4 - Fatorial
#include <stdio.h>
#include <locale.h>

int main(){

    int fat, num;
    setlocale(LC_ALL, "");

    printf("Digite um numero: ");
    scanf("%d", &num);

        for(fat = 1; num > 1; num = num - 1){
            fat = fat * num;
            printf("\nO Fatorial é: %d", fat);
        }

  return 0;
}
