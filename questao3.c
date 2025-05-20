#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // declara as variáveis necessárias pro funcionamento do programa
    int entrada = 0; 
    int contador = 0;
    int fatorial = 1;
    
    // pede o numero a ser fatorado
    printf("digite um numero para descobrir seu fatorial\nao colocar um numero muito grande, atentar-se ao custo de processamento\n");
    printf(">>> ");
    scanf("%d", &entrada);
    
    // for com contador reverso, da entrada do usuário até 0
    for(contador = entrada; contador > 0; contador--){
        fatorial = fatorial * contador;
    }
    // imprime o resultado
    printf("o fatorial do numero %d e %d", entrada, fatorial);

    return 0;
}