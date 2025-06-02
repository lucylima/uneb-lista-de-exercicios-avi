#include <stdio.h>

int main()
{
    char nome[50];
    char sexo[50];
    float lista_altura[50];

    float max_altura, min_altura = 0.0;
    float soma_altura, media_altura = 0.0;
    float soma_mulheres, media_mulheres = 0.0;

    int quantidade_mulheres, quantidade_turma = 0;

    for (int contador = 0; contador < 3; contador++)
    {

        printf("digite sua inicial: ");
        scanf(" %c", &nome[contador]);

        printf("Digite sua altura: ");
        scanf("%f", &lista_altura[contador]);

        printf("Digite seu sexo, M para masculino e F para feminino: ");
        scanf(" %c", &sexo[contador]);

        if (contador == 0)
        {
            max_altura = lista_altura[contador];
            min_altura = lista_altura[contador];
        }
        else if (lista_altura[contador] >= lista_altura[contador - 1])
        {
            max_altura = lista_altura[contador];
        }
        else if (lista_altura[contador] <= lista_altura[contador - 1])
        {
            min_altura = lista_altura[contador];
        }

        if (sexo[contador] == 'F' || sexo[contador] == 'f')
        {
            soma_mulheres =soma_mulheres + lista_altura[contador];
            quantidade_mulheres++;
        }

        soma_altura += lista_altura[contador];
        quantidade_turma++;
    }

    media_mulheres = soma_mulheres / quantidade_mulheres;
    media_altura = soma_altura / quantidade_turma;

    printf("a maior altura da turma e: %.2f\n", max_altura);
    printf("e a menor altura da turma e: %.2f\n", min_altura);
    printf("a media de altura da turma: %.2f\n", media_altura);
    if (quantidade_mulheres > 2)
    {
        printf("a media de altura das mulheres: %f\n", media_mulheres);
    }
    else
    {
        printf("não houve mulheres suficiente para o calculo");
    }

    return 0;
}
