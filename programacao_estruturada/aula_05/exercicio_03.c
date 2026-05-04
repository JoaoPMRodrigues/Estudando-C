#include <stdio.h>

int main(void)
{
    int i, j;
    int n, m;
    int identidade = 1;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    if (n != m)
    {
        printf("Não é Matriz Identidade!\n");
        return 0;
    }

    int **mat;

    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(m * sizeof(int));

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if ((i != j && mat[i][j] == 1) || (i != j && (!mat[i][j])))
            {
                printf("Não é Matriz Identidade!\n");
                return 0;
            }
        }
    }

    printf("É Matriz Identidade!\n");

    for (i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
    return 0;
}