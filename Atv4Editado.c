//Caroline Marton
//Atv 4
#include <stdio.h>
#include <stdlib.h>


    int existenciaTriangulo (float, float, float);
    //void classificaTriangulo (float, float, float);
    //float perimetroTriangulo (float, float, float);

    int main (){

        float a,b,c;
        float maiorL, somaL;

        printf("\nDigite o primeiro lado: ");
        scanf("%f", &a);
        printf("\nDigite o segundo lado: ");
        scanf("%f", &b);
        printf("\nDigite o terceiro lado: ");
        scanf("%f", &c);

        existenciaTriangulo (a, b, c);


    return 0;
    }

    int existenciaTriangulo(float a, float b, float c)
    {

        if (((a+b)>c) || ((a+c)>b) || ((b+c)>a))
        {
            if ((a>b) && (a>c))
            {
                maiorL = a;
                somaL = ((b*b)+(c*c));
            }
            else if ((b>a) && (b>c))
            {
                maiorL = b;
                somaL = ((c*c)+(a*a));
            }
            else if ((c>a) && (c>b))
            {
                maiorL = c;
                somaL = ((a*a)+(b*b));
            }
            else ((maiorL*maiorL) == somaL)
            {
                printf("\nTriangulo Retangulo!");
            }
        }
        else
        {
            printf("\nO lados nao formam um triangulo");
        }
    }

