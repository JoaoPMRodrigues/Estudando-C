#include <stdio.h>

int pot(int base, int expoente)
{
    int p;
    for (p = 1; expoente > 0; --expoente)
        p = p * base;
    return p;
}

int main()
{
    int base = 2;
    int expoente = 10;
    int i;

    for (i = 0; i <= expoente; ++i)
        printf("%d elevado a %d = %d\n", base, i, pot(base, i));

    return 0;
}