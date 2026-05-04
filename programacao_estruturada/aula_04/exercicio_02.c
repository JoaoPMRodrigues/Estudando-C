#include <stdio.h>

int main(void)
{
    int a, b, i, j, copia, n, fat, soma;
    printf("Digite 2 números: ");
    scanf("%d %d", &b, &a);

    for (i = b; i <= a; i++)
    {
        copia = i;
        soma = 0;
        while (copia > 0)
        {
            n = copia % 10;
            copia /= 10;
            fat = 1;
            for (j = n; j > 1; j--)
                fat *= j;
            soma += fat;
        }
        if (soma == i)
            printf("%d é poderoso.\n", i);
    }

    return 0;
}