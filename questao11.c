#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50];

    printf("digite o palindromo: ");
    scanf("%s", texto);

    char texto2[strlen(texto)];

    for (int i = 0; i < strlen(texto); i++)
    {
        texto2[i] = texto[strlen(texto) - 1 - i];
    }

    texto2[strlen(texto)] = '\0';

    if (strcmp(texto, texto2) == 0)
    {
        printf("e palindromo");
    }
    else
    {

        printf("nao e palindromo");
    }

    return 0;
}