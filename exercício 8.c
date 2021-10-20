#include <stdio.h>
#include <stdlib.h>


main()
{
float resp, num;
int i;
i=0;

 printf("\n\nDigite 10 numeros decimais:\n");
for (i=1; i<=10; i++)
{
     printf("\nDigite numero %i/10: ", i);
scanf("%f", &num);
if (num<50)
    resp = num*3;
else if (num>=50&&num<100)
    resp = num*2;
else if (num>100)
    resp = num/2;
printf("\n\nResultado = %.2f\n", resp);

}

}
