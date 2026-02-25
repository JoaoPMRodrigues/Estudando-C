#include <stdio.h>
/*Teste da função potência (pot)*/

int main()
{
    int i;

    for (i = 1; i <= 10; ++i)
    {
        printf(" 2 ^ a %d = %d\n", i, pot(2, i));
        printf("-3 ^ a %d = %d\n", i, pot(-3, i));
    }
    return 0;
}

int pot(int x, int n)
/* Eleva x (base) a uma potência n tal que n> pertencente aos inteiros */
{
    int i;     // Contador
    int p = 1; // Resultado da potência

    for (i = 1; i <= n; ++i)
        p = p * x;
    return (p);
}