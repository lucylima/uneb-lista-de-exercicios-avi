#include <stdio.h>

int main()
{
    int i, a, b, c = 0;

    printf("escreva a ordem: ");
    scanf("%d", &i);

    printf("\ndigite o primeiro numero: ");
    scanf("%d", &a);

    printf("\ndigite o segundo numero: ");
    scanf("%d", &b);

    printf("\ndigite o terceiro numero: ");
    scanf("%d", &c);
    if (i == 1)
    {
        if (a >= b && b >= c)
        {
            printf("1 - %d\n", a);
            printf("2 - %d\n", b);
            printf("3 - %d", c);
        }
        else if (b >= a && a >= c)
        {
            printf("1 - %d\n", b);
            printf("2 - %d\n", a);
            printf("3 - %d\n", c);
        }
        else if (c >= b && b >= a)
        {
            printf("1 - %d\n", c);
            printf("2 - %d\n", b);
            printf("3 - %d", a);
        }
        else if (b >= c && c >= a)
        {
            printf("1 - %d\n", b);
            printf("2 - %d\n", c);
            printf("3 - %d", a);
        }
        else if (a >= c && c >= b)
        {
            printf("1 - %d\n", a);
            printf("2 - %d\n", c);
            printf("3 - %d", b);
        }
        else if (c >= a && a >= b)
        {
            printf("1 - %d\n", c);
            printf("2 - %d\n", a);
            printf("3 - %d", b);
        }
    }
    else if (i == 2)
    {
        if (a >= b && b >= c)
        {
            printf("0 - %d\n", c);
            printf("1 - %d\n", b);
            printf("2 - %d", a);
        }
        else if (b >= a && a >= c)
        {
            printf("0 - %d\n", c);
            printf("1 - %d\n", a);
            printf("2 - %d\n", b);
        }
        else if (c >= b && b >= a)
        {
            printf("0 - %d\n", a);
            printf("1 - %d\n", b);
            printf("2 - %d", c);
        }
        else if (b >= c && c >= a)
        {
            printf("0 - %d\n", a);
            printf("1 - %d\n", c);
            printf("2 - %d", b);
        }
        else if (a >= c && c >= b)
        {
            printf("0 - %d\n", b);
            printf("1 - %d\n", c);
            printf("2 - %d", a);
        }
        else if (c >= a && a >= b)
        {
            printf("0 - %d\n", b);
            printf("1 - %d\n", a);
            printf("2 - %d", c);
        }
    }
    else if (i == 3)
    {
        if (a >= b && b >= c)
        {
            printf("1 - %d\n", b);
            printf("2 - %d\n", a);
            printf("3 - %d", c);
        }
        else if (b >= a && a >= c)
        {
            printf("1 - %d\n", a);
            printf("2 - %d\n", b);
            printf("3 - %d\n", c);
        }
        else if (c >= b && b >= a)
        {
            printf("1 - %d\n", b);
            printf("2 - %d\n", c);
            printf("3 - %d", a);
        }
        else if (b >= c && c >= a)
        {
            printf("1 - %d\n", c);
            printf("2 - %d\n", b);
            printf("3 - %d", a);
        }
        else if (a >= c && c >= b)
        {
            printf("1 - %d\n", c);
            printf("2 - %d\n", a);
            printf("3 - %d", b);
        }
        else if (c >= a && a >= b)
        {
            printf("1 - %d\n", a);
            printf("2 - %d\n", c);
            printf("3 - %d", b);
        }
    }

    return 0;
}