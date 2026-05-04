#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m;

    printf("n: ");
    scanf("%d", &n);
    printf("m; ");
    scanf("%d", &m);

    int **mat;
    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(m * sizeof(int));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                mat[i][j] = i + j;
            }
            else
            {
                mat[i][j] = 2 * i - j;
            }
        }

    int *vet;
    vet = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        vet[i] = mat[i][0];
        for (int j = 1; j < m; j++)
        {
            if (mat[i][j] > vet[i])
                vet[i] = mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
        printf("Linha %d: %d\n", i, vet[i]);

    free(vet);
    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
    return 0;
}