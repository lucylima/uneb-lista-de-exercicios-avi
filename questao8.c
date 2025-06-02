#include <stdio.h>

int main()
{
    // questao a
    float somatorio = 0.0;
    float contador = 1.0;

    while (contador < 99)
    {
        somatorio = somatorio + (1.0 / contador);
        contador++;
        contador++;
        printf("%f -%f \n", somatorio, contador);
    }
    printf("----------------------------------\n");

    // questao b
    somatorio = 0.0;
    contador = 1.0;

    int i = 0;
    while (i < 20)
    {
        if (i % 2 == 0)
        {
            somatorio = somatorio + (1.0 / contador);
        }
        somatorio = somatorio - (1.0 / contador);
        contador++;
        contador++;
        somatorio = somatorio + (1.0 / contador);
        printf("%f - %f \n", somatorio, contador);
        i++;
    }

    return 0;
}