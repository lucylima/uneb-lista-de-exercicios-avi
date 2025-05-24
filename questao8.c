#include <stdio.h>

int main()
{
    float somatorio = 1.0;
    float contador = 1.0;

    while (contador < 99)
    {
        somatorio = somatorio + (1.0 / contador);
        contador++;
        contador++;
        printf("%f -%f \n", somatorio, contador);
    }

    return 0;
}