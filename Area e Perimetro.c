//Calcular area e perimetro
//EXERCICIO PRESENÇA 05/05
#include <stdio.h>

    void  calculo (){

        float lado, altura, area, perimetro;

        printf("\nDigite a altura: ");
        scanf("%f", &altura);

        printf("\nDigite o lado: ");
        scanf("%f", &lado);

        area = altura*lado;
        perimetro = (altura*2)+(lado*2);

        printf("\nA area: %.2f e o perimetro: %.2f", area, perimetro);

    }

    int main(){

        calculo ();

    return 0;
    }

