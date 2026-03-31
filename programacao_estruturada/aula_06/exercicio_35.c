#include <stdio.h>

int main(void)
{
    int i, j;
    int n, valor = 1;
    int soma = 0, elementos = 0, media;
    printf("n: ");
    scanf("%d", &n);

    int mat[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            mat[i][j] = valor;

            if (i < j)
            {
                soma += valor;
                elementos += 1;
            }
            valor += 1;
        }
    }
    media = soma / elementos;
    soma = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] <= media)
            {
                soma += mat[i][j];
            }
        }
    }

    printf("Media = %d\n", media);
    printf("Soma = %d\n", soma);
    return 0;
}