#include <stdio.h>

int main()
{
    int perfeito = 0;
    int entrada = 28;
    int divisor = 0;
    int contador = 1;

    printf("digite um numero e veja se ele e perfeito ou nao >> ");
    scanf("%d", &entrada);

    while (contador < entrada)
    {
        divisor = entrada % contador;
        if (divisor == 0)
        {
            perfeito = perfeito + contador;
            printf("%d - ", perfeito);
            printf("%d\n", contador);
        }
        contador++;
    }

    if (perfeito == entrada)
    {
        printf("numero e perfeito");
    }
    else
    {
        printf("numero nao e perfeito");
    }

    return 0;
}
