#include <stdio.h>
void lematriz(int n, int m, int mat[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void imprimematriz(int n, int m, int mat[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int produto_escalar(int n, int m, int p, int A[n][m], int B[m][p], int linha, int coluna, int posicao)
{
    if (posicao == m - 1)
        return (A[linha][posicao] * B[posicao][coluna]);
    else
        return ((A[linha][posicao] * B[posicao][coluna]) + produto_escalar(n, m, p, A, B, linha, coluna, posicao + 1));
}

void multiplica(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p], int i, int j)
{
    if (i == n)
        return;
    else if (i < n)
    {
        if (j < p)
        {
            C[i][j] = produto_escalar(n, m, p, A, B, i, j, 0);
            j++;
            multiplica(n, m, p, A, B, C, i, j);
        }
        j = 0;
        i++;
        multiplica(n, m, p, A, B, C, i, j);
    }
}

int main(void)
{

    int n, m, p;

    printf("n: ");
    scanf("%d", &n);
    printf("m: ");
    scanf("%d", &m);
    printf("p: ");
    scanf("%d", &p);

    int A[n][m];
    int B[m][p];
    int C[n][p];

    printf("Matriz A:\n");
    lematriz(n, m, A);
    imprimematriz(n, m, A);
    printf("Matriz B:\n");
    lematriz(m, p, B);
    imprimematriz(m, p, B);

    multiplica(n, m, p, A, B, C, 0, 0);
    printf("Matriz C:\n");
    imprimematriz(n, p, C);

    return 0;
}