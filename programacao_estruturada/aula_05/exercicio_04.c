#include <stdio.h>

int main(void)
{
    int i, j;
    int n;

    printf("n: ");
    scanf("%d", &n);

    int **mat;

    mat = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        mat[i] = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                int aux = mat[i][j];
                int jd = n - i - 1;
                mat[i][j] = mat[i][jd];
                mat[i][jd] = aux;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    for (i = 0; i < n; i++)
        free(mat[i]);
    free(mat);

    return 0;
}