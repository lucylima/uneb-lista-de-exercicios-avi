#include <stdio.h>

int main()
{
    int populacao_a = 90000000;
    int populacao_b = 200000000;
    float crescimento_a = 0.03;
    float crescimento_b = 0.015;
    int anos = 0;
    
    while (populacao_a <= populacao_b)
    {
        populacao_a = populacao_a + (populacao_a * crescimento_a);
        populacao_b = populacao_b + (populacao_b * crescimento_b);

        anos++;
    }

    printf("sao necessarios %d anos para a populacao A passar a populacao B", anos);

    return 0; 
}