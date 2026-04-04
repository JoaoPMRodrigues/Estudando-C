#include <stdio.h>

int maior(int n, int m, int v[n][m], int i, int j)
{
    if (i == n - 1 && j == m - 1)
        return v[i][j];
    if (i == n - 1 && j < m - 1)
    {
        if (v[i][j] >= maior(n, m, v, 0, j + 1))
            return v[i][j];
        else
            return maior(n, m, v, 0, j + 1);
    }
    if (i < n - 1 && j == m - 1)
    {
        if (v[i][j] >= maior(n, m, v, i + 1, j))
            return v[i][j];
        else
            return maior(n, m, v, i + 1, j);
    }
    return maior(n, m, v, i + 1, j);
}

int main(void)
{
    int i, j;
    int n, m;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    int v[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("v[%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
        }
    }

    printf("Maior valor: %d\n", maior(n, m, v, 0, 0));

    return 0;
}