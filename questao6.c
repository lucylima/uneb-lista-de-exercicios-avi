#include <stdio.h>
#include <math.h>

int main()
{
    int entrada = 0;
    int contra_contador = 4;
    int divisor = 0;
    int decimal[] = {0, 0, 0, 0, 0};
    
    printf("escolha um numero inteiro maior que 0: ");
    scanf("%d", &entrada);
    
    if(entrada < 0){
        return 0;
    }

    for (int contador = 0; contador < 5; contador++)
    {
        divisor = entrada % 2;
        entrada = entrada / 2;
        decimal[contra_contador] = divisor;

        printf("array: %d\n", decimal[contra_contador]);
        contra_contador--;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d", decimal[i]);
    }
    

    return 0;
}