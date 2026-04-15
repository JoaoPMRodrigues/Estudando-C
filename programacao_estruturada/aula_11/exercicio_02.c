#include <stdio.h>
#include <stdlib.h>

void lematriz(int **mat)
{
    mat[0][0] = -1;
    mat[0][1] = -1;
    mat[0][2] = 0;
    mat[0][3] = -1;
    mat[0][4] = -1;
    mat[0][5] = 0;
    mat[0][6] = -1;
    mat[0][7] = -1;
    mat[1][0] = 0;
    mat[1][1] = 0;
    mat[1][2] = -1;
    mat[1][3] = 0;
    mat[1][4] = -1;
    mat[1][5] = 0;
    mat[1][6] = 0;
    mat[1][7] = 0;
    mat[2][0] = 0;
    mat[2][1] = 0;
    mat[2][2] = 0;
    mat[2][3] = -1;
    mat[2][4] = 0;
    mat[2][5] = 0;
    mat[2][6] = -1;
    mat[2][7] = 0;
    mat[3][0] = -1;
    mat[3][1] = -1;
    mat[3][2] = 0;
    mat[3][3] = 0;
    mat[3][4] = 0;
    mat[3][5] = -1;
    mat[3][6] = 0;
    mat[3][7] = 0;
    mat[4][0] = 0;
    mat[4][1] = 0;
    mat[4][2] = -1;
    mat[4][3] = 0;
    mat[4][4] = -1;
    mat[4][5] = 0;
    mat[4][6] = -1;
    mat[4][7] = 0;
    mat[5][0] = 0;
    mat[5][1] = 0;
    mat[5][2] = -1;
    mat[5][3] = 0;
    mat[5][4] = -1;
    mat[5][5] = 0;
    mat[5][6] = 0;
    mat[5][7] = 0;
    mat[6][0] = 0;
    mat[6][1] = 0;
    mat[6][2] = -1;
    mat[6][3] = 0;
    mat[6][4] = -1;
    mat[6][5] = 0;
    mat[6][6] = -1;
    mat[6][7] = 0;
}

void palavras_cruzadas(int n, int m, int **mat)
{
    int enumerar = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int vertical =
                (mat[i][j] == 0) &&
                (i == 0 || mat[i - 1][j] == -1) &&
                (i + 1 < n && mat[i + 1][j] == 0);

            int horizontal =
                (mat[i][j] == 0) &&
                (j == 0 || mat[i][j - 1] == -1) &&
                (j + 1 < m && mat[i][j + 1] == 0);

            if (vertical || horizontal)
            {
                mat[i][j] = enumerar;
                enumerar++;
            }
        }
    }

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

    printf("n:");
    scanf("%d", &n);

    printf("m:");
    scanf("%d", &m);

    int **mat;
    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(m * sizeof(int));
    lematriz(mat);
    palavras_cruzadas(n, m, mat);

    int soma = 0;

    for (int i = 0; i < n; i++)
        soma += mat[i][0];

    printf("A soma é: %d\n", soma);
    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
    return 0;
}
