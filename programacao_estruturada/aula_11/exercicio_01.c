#include <stdio.h>
#include <stdlib.h>

void lematriz(int n, int **mat)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                mat[i][j] = 0;
            else
            {
                printf("mat[%d][%d]: ", i, j);
                scanf("%d", &mat[i][j]);
            }
        }
    }
}

int calcula_distancia(int **mat, int k, int *cidade)
{
    int soma = 0;

    for (int i = 1; i < k; i++)
    {
        soma += mat[cidade[i - 1]][cidade[i]];
    }
    return soma;
}
int main(void)
{
    int n;

    printf("n:");
    scanf("%d", &n);

    int **mat;

    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(n * sizeof(int));

    lematriz(n, mat);

    int k;

    printf("Quantas cidades: ");
    scanf("%d", &k);

    int *cidades;
    cidades = (int *)malloc(k * sizeof(int));

    for (int i = 0; i < k; i++)
    {
        printf("cidade %d: ", i + 1);
        scanf("%d", &cidades[i]);
    }

    int distancia = calcula_distancia(mat, k, cidades);

    printf("Distância: %d\n", distancia);
    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(cidades);
    free(mat);
    return 0;
}