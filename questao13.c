#include <stdio.h>

int main()
{
    float massa_material = 0.0;
    int segundos = 0;

    printf("insira a massa inicial: ");
    scanf("%f", &massa_material);

    printf("massa inicial: %f\n", massa_material);

    while (massa_material > 0.5)
    {
        massa_material = massa_material / 2;
        segundos += 50.0;
    }

    printf("massa final: %f\n", massa_material);
    printf("tempo: horas: %d\nminutos: %d\nsegundos: %d\n", segundos / 3600, segundos / 60, segundos % 60);

    return 0;
}