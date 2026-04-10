#include <stdio.h>
#include <stdlib.h>

int simetrica(int n, int **mat)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != mat[j][i])
                return 0;
        }
    }
    return 1;
}
int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int **mat;

    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    int verdadeiro = simetrica(n, mat);

    if (verdadeiro)
        printf("É simétrica!\n");
    else
        printf("Não é simétrica!\n");

    free(mat);
    return 0;
}