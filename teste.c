#include <stdio.h>
//#define DIM 5

   /* void recebe(int original[])
    {
        int count = 0;

        for(count = 0; count < DIM ; count++)
        {
            printf("Entre com o elemento %d: ", count+1);
            scanf("%d", &original[count]);
        }
    }

    void dobrar(int dobrado[], int original[])
    {
        int count;

        for(count=0 ; count < DIM ; count++)
            dobrado[count] = 2 * original[count];
    }

    void exibir(int vet[])
    {
        int count;

        for(count=0 ; count < DIM ; count++)
            printf("%3d ", vet[count]);
    }

    int main()

    {
    int original[DIM],
        dobrado[DIM];

    recebe(original);
    dobrar(dobrado, original);

    printf("Vetor original: ");
    exibir(original);

    printf("\nVetor dobrado : ");
    exibir(dobrado);

    return 0;
    }
*/




void duplicar (int *);

    int main (){
        int a;

        printf("Digite um numero: ");
        scanf("%d", a);
        printf("%d", a);
        duplicar(&a);
        printf(" e seu dobro %d", a);
        return 0;
    }

    void duplicar (int *X){

        *X = 2 * (*X);

    }
















