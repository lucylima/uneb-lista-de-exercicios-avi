#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50];
    char sexo[50];
    int lista_altura[50];
    int aux = 0;
    int max_altura,
        min_altura,
        media = 0;

    for (int contador = 0; contador < 5; contador++)
    {
        printf("Digite sua altura sem virgula: ");
        scanf("%d", &aux);
        lista_altura[contador] = aux;
        printf("digite seu nome:");
        scanf("%[^\n]s", nome[contador]);
        printf("\n");
        printf("Digite seu sexo, M para masculino e F para feminino:");
        scanf(" %c", sexo[contador]);
        if (lista_altura[contador] >= lista_altura[contador - 1])
        {
            max_altura = lista_altura[contador];
        }
        else if (lista_altura[contador] <= lista_altura[contador - 1])
        {
            min_altura = lista_altura[contador];
        }
    }

    return 0;
}
