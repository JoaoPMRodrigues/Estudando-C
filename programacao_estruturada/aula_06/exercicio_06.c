#include <stdio.h>

int main(void)
{
    int i, j, m = 0;
    int n;

    printf("n: ");
    scanf("%d", &n);

    int vet[n];

    for (i = 0; i < n; i++)
        scanf("%d", &vet[i]);

    for (m = 1; m < n / 2; m++)
    {
        for (i = 0; i <= n - 2 * m; i++)
        {
            int iguais = 1;
            for (j = 0; j < m; j++)
            {
                if (vet[i + j] != vet[i + m + j])
                {
                    iguais = 0;
                    break;
                }
            }
            if (iguais)
                printf("i = %d e m = %d\n", i, m);
        }
    }

    return 0;
}