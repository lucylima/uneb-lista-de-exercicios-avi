#include <stdio.h>

int main()
{
    int t1 = 0;
    int t2 = 1;
    int t3 = 0;
    int n, contador = 0;

    printf("digite o numero de termos de fibonacci que voce deseja: ");
    scanf("%d", &n);

    while (contador < n)
    {
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;

        contador++;
    }
}