#include <stdio.h>
#include <math.h>

int main()
{
    int entrada[] = {0, 1, 1, 0, 1};
    int potencia = 0;
    int scanner = 4;
    int result = 0;

    for (int contador = 0; contador <= 4; contador++)
    {
        potencia = pow(2, contador);
        printf("potencia: %d elevado a %d e: %d\n", 2, contador, potencia);
        printf("posicao do array: %d\n", entrada[scanner]);
        if(entrada[scanner] == 1){
            result += potencia;
        }
        scanner--;
    }
    printf("o resultado e >> %d", result);
    

    return 0;
}