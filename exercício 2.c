#include <stdio.h>
#include <stdlib.h>

main()
{
float nlab, nasem, nexam, nfinal;

printf("\n\nInserir a nota do laboratorio: ");
scanf("%f", &nlab);

printf("\n\nInserir a nota do exame semestral: ");
scanf("%f", &nasem);

printf("\n\nInserir a nota do exame final: ");
scanf("%f", &nexam);

nfinal=nlab*0.2+nasem*.3+nexam*.5;

printf("\n\nsua nota final e: %.2f", nfinal);

if (nfinal>=8)
printf("\nConceito: A\n\n");
else if (nfinal>=7&&nfinal<8)
    printf("\nConceito: B\n\n");
else if (nfinal>=6&&nfinal<7)
    printf("\nConceito: C\n\n");
else if (nfinal>=5&&nfinal<6)
    printf("\nConceito: D\n\n");
else
    printf("\nConceito: E\n\n");
}
