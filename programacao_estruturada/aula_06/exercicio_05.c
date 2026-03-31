#include <stdio.h>

int main(void)
{
    int i, j, k;
    int m, n, p, soma;

    printf("m: ");
    scanf("%d", &m);

    printf("n: ");
    scanf("%d", &n);

    printf("p: ");
    scanf("%d", &p);

    int a[m][n];
    int b[n][p];
    int c[m][p];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            soma = 0;
            for (k = 0; k < n; k++)
                soma += a[i][k] * b[k][j];
            c[i][j] = soma;
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}