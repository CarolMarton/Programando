#include <stdio.h>
#include <stdlib.h>


main()
{
float sal, mediasal,sumfil, maiorsal, medianumfil, salmin, sumsal, mediasalmin;
int i, n, fil;
sumsal=0;
sumfil=0;
salmin=0;
maiorsal=0;

printf("\n\nQual numero de habitantes da cidade? ");
scanf ("%i", &n);

    for(i=1; i<=n; i++)
    {
printf ("\n\nInformacoes do habitante %i: ", i);
printf("\n\nQual o salario? ");
scanf("%f", &sal);
printf("\n\nQuantos filhos? ");
scanf("%i", &fil);
printf("\n______________________________________________________\n\n");

sumsal = sumsal+sal;
sumfil = sumfil+fil;

if(sal>=maiorsal)
    maiorsal=sal;


if (sal<465)
salmin++;



}

mediasal = sumsal/n;
medianumfil = sumfil/n;
mediasalmin = (salmin/n)*100;


printf("\nMedia salarial: R$%.2f\n", mediasal);
printf("\nMedia de filhos: %.2f\n", medianumfil);
printf("\nMaior salario: R$%.2f\n", maiorsal);
printf("\nPercentual de salario menor R$465,00: %.2f%%:\n\n\n", mediasalmin);

}
