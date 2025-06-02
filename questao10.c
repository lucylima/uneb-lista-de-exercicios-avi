#include <stdio.h>

int main()
{
    int lista[9] = {5, 10, 3, 2, 4, 7, 9, 8, 5};
    int crescente = 0;

    for (int contador = 0; contador <= 8; contador++)
    {
        if (lista[contador] > lista[contador - 1])
        {
            crescente += 1;
        }
    }
    printf("a crescente maxima do segmento é %d", crescente);
}