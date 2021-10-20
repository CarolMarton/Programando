//Caroline Marton
//Atv 5
#include <stdio.h>
#include <stdlib.h>

    const float PI = 3.14;

    float area1(float R);
    void area2(float R, float *b);
    void area3(float R);

    int main(void)
    {
        float R, a, b, c;
        printf("Insira o raio: ");
        scanf("%f", &R);

        a = area1(R);
        printf("\n Area calculada pela funcao area1 = %.2f", a);

        area2(R, &b);
        printf("\n Area calculada pelo procedimento area2 = %.2f", b);

        area3(R);

        return 0;
    }

    float area1(float R)
    {
        float area;
        area = (PI * (R * R));
        return area;
    }

    void area2(float R, float *b)
    {
        *b = (PI * (R * R));
    }

    void area3(float raio) {
        float a;
        a = PI * (raio * raio);
        printf("\n Area calculada pelo procedimento area3 = %.2f", a);
    }
