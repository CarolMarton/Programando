//Caroline Marton
//Atv 4
#include <stdio.h>
#include <stdlib.h>

    int existenciaTriangulo(float, float, float);
    void classificaTriangulo(float, float, float);
    float perimetroTriangulo(float, float, float);

    int main()
    {

        float a, b, c;

        printf("\nDigite o primeiro lado em valor real: ");
        scanf("%f", &a);
        printf("\nDigite o segundo lado em valor real: ");
        scanf("%f", &b);
        printf("\nDigite o terceiro lado em valor real: ");
        scanf("%f", &c);

        existenciaTriangulo(a, b, c);
        classificaTriangulo (a, b, c);
        perimetroTriangulo (a, b, c);

    return 0;
    }

    int existenciaTriangulo(float a, float b, float c)
    {

        float maiorL, somaL;

            if (((a + b) > c) || ((a + c) > b) || ((b + c) > a))
            {
                if ((a > b) && (a > c))
                {
                    maiorL = a;
                    somaL = ((b * b) + (c * c));
                }
                else if ((b > a) && (b > c))
                {
                    maiorL = b;
                    somaL = ((c * c) + (a * a));
                }
                else if ((c > a) && (c > b))
                {
                    maiorL = c;
                    somaL = ((a * a) + (b * b));
                }

                else if ((maiorL * maiorL) == somaL)
                    {
                        printf("\nTriangulo Retangulo!");
                    }

                else
                {
                    printf("\nO lados nao formam um triangulo");
                }
            }

    return somaL;
}


    void classificaTriangulo (float a, float b, float c){

        if ((a != b) && (a != c) && (b != c)){
            printf("Eh um triangulo ESCALENO!");

            if ((a != b) && b == c){
                printf("Eh um tringulo EQUILATERO");
            }
        }
            else
                printf ("Eh um triangulo ESOCELES");
    }

    float perimetroTriangulo (float a, float b, float c){

        float perimetro;
            perimetro = a+b+c;
            printf("\nO perimetro eh: %.2f", perimetro);

    return perimetro;

    }
