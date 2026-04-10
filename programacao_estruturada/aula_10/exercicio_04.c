#include <stdio.h>
#include <stdlib.h>

void matLabiana(int n, int m, int **mat)
{
    for (int i = 0; i < m; i++)
    {
        if ((i + 1) % 2 != 0)
            mat[0][i] = i + 1;
        else
            mat[0][i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        if ((i + 1) % 2 == 0)
            mat[1][i] = i + 1;
        else
            mat[1][i] = 0;
    }
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            mat[i][j] = mat[i - 1][j] + mat[i - 2][j];
    }
}

void imprimemat(int n, int m, int **mat)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int n, m;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    int **mat;

    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(m * sizeof(int));

    matLabiana(n, m, mat);

    imprimemat(n, m, mat);

    free(mat);
    return 0;
}