#include <stdio.h>
#include <stdlib.h>

void lematriz(int **mat)
{
    mat[0][0] = 0;
    mat[0][1] = 9;
    mat[0][2] = 1;
    mat[0][3] = 8;
    mat[0][4] = 2;
    mat[0][5] = 10;
    mat[1][0] = 8;
    mat[1][1] = 2;
    mat[1][2] = 9;
    mat[1][3] = 1;
    mat[1][4] = 8;
    mat[1][5] = 0;
    mat[2][0] = 1;
    mat[2][1] = 10;
    mat[2][2] = 3;
    mat[2][3] = 9;
    mat[2][4] = 2;
    mat[2][5] = 8;
    mat[3][0] = 9;
    mat[3][1] = 0;
    mat[3][2] = 8;
    mat[3][3] = 2;
    mat[3][4] = 10;
    mat[3][5] = 1;
    mat[4][0] = 2;
    mat[4][1] = 8;
    mat[4][2] = 1;
    mat[4][3] = 9;
    mat[4][4] = 3;
    mat[4][5] = 10;
    mat[5][0] = 10;
    mat[5][1] = 1;
    mat[5][2] = 9;
    mat[5][3] = 0;
    mat[5][4] = 8;
    mat[5][5] = 2;
}

void imprimematriz(int n, int m, int **mat)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int **copiar(int n, int m, int **mat)
{
    int **mat_copia;
    mat_copia = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat_copia[i] = (int *)malloc(m * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            mat_copia[i][j] = mat[i][j];
    }
    return mat_copia;
}

void uss(int n, int m, int **mat)
{
    int **copia;
    copia = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        copia[i] = (int *)malloc(m * sizeof(int));

    copia = copiar(n, m, mat);

    // Passo 1:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] >= 8)
                copia[i][j] -= 2;
        }
    }
    // Passo 2:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] <= 3)
            {
                // Cima
                if (i > 0)
                {
                    if (mat[i - 1][j] >= 7)
                        copia[i][j]++;
                } // Baixo
                if (i < n - 1)
                {
                    if (mat[i + 1][j] >= 7)
                        copia[i][j]++;
                } // Esquerda
                if (j > 0)
                {
                    if (mat[i][j - 1] >= 7)
                        copia[i][j]++;

                } // Direita
                {
                    if (j < m - 1)
                    {
                        if (mat[i][j + 1] >= 7)
                            copia[i][j]++;
                    }
                }
            }
        }
    }

    // Passo 3:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] > 3 && mat[i][j] < 8)
            {
                int total = 0;
                // Cima
                if (i > 0)
                {
                    if (mat[i - 1][j] >= 7)
                        total++;
                } // Baixo
                if (i < n - 1)
                {
                    if (mat[i + 1][j] >= 7)
                        total++;
                } // Esquerda
                if (j > 0)
                {
                    if (mat[i][j - 1] >= 7)
                        total++;

                } // Direita
                {
                    if (j < m - 1)
                    {
                        if (mat[i][j + 1] >= 7)
                            total++;
                    }
                }
                if (total >= 2)
                    copia[i][j]++;
                else if (total == 0)
                    copia[i][j]--;
            }
        }
    }

    // Passo 4:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (copia[i][j] < 0)
                copia[i][j] = 0;
            else if (copia[i][j] > 10)
                copia[i][j] = 10;
        }
    }

    // Passo 5:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            mat[i][j] = copia[i][j];
    }

    mat = copiar(n, m, copia);
}

void repete(int k, int n, int m, int **mat)
{
    for (int i = 0; i < k; i++)
    {
        printf("\nMatriz %d:\n", i + 1);
        uss(n, m, mat);
        imprimematriz(n, m, mat);
    }
}

int main(void)
{
    int n, m, k;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    printf("k: ");
    scanf("%d", &k);
    int **mat;

    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(m * sizeof(int));

    lematriz(mat);
    printf("Matriz exemplo: \n");
    imprimematriz(n, m, mat);
    printf("\n");
    repete(k, n, m, mat);

    printf("\n");
    int soma = 0;
    for (int i = 0; i < m; i++)
        soma += mat[0][i];

    printf("Soma: %d\n", soma);

    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
    return 0;
}