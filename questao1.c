#include <stdio.h>

int main()
{
    float a, b, c, media = 0.0;
    float peso1 = 5.0;
    float peso2 = 2.5;
    float somaPesos = 0.0;

    printf("bem vindo a calculadora de media ponderada\n");
    printf("insira o primeiro numero: ");
    scanf("%f", &a);
    printf("\ninsira o segundo numero: ");
    scanf("%f", &b);
    printf("\ninsira o terceiro numero: ");
    scanf("%f", &c);

    if (a > 6)
    {
        a = a * peso1;
        somaPesos += peso1;
    }

    if (b > 6)
    {
        b = b * peso1;
        somaPesos += peso1;
    }

    if (c > 6)
    {
        c = c * peso1;
        somaPesos += peso1;
    }

    if (a <= 6)
    {
        a = a * peso2;
        somaPesos += peso2;
    }

    if (b <= 6)
    {
        b = b * peso2;
        somaPesos += peso2;
    }

    if (c <= 6)
    {
        c = c * peso2;
        somaPesos += peso2;
    }

    media = (a + b + c) / somaPesos;

    printf("a media e %f\n", media);

    return 0;
}
