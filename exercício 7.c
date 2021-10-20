#include <stdlib.h>
#include <stdio.h>

main()
{
int i, num1, num2;

printf ("\nDigite o menor numero: ");
scanf("%i", &num1);
printf("\n\nDigite o maior numero: ");
scanf("%i", &num2);

for (num1; num1<=num2; num1++)
{
    printf("\n%i", num1);

}
printf("\n\n\n\n");

}
