#include <stdio.h>

int main()
{
    // declaração de variáveis
    int entrada = 0;
    int resultado = 0;
    // entrada de dados
    printf("digite um numero: ");
    scanf("%d", &entrada);

    /* loop for que vai de 0 até o numero que o usuario enviou, 
    quando usado <= foi encontrado uma inconsistencia no calculo */
    for (int contador = 0; contador < entrada; contador++)
    {
        // resultado no começo da iteração
        printf("%d + ", resultado);
        /* calculo da soma,
        o resultado é a variavel fixa enquanto o contador é dependende da repetição */
        resultado = resultado + contador;
        // imprime a variavel resultado pos incremento do contador
        printf("%d = %d\n", contador, resultado);
    }
    return 0;
}