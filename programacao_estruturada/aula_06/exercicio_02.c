#include <stdio.h>

int main(void)
{
    int i, j;
    int soma_max = 0, dir, esq;
    int n, m;

    printf("n: ");
    scanf("%d", &n);

    int vet[n], seq[n], soma[n + 1];
    soma[0] = 0;

    printf("Sequência:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 1; i < n + 1; i++)
        soma[i] = soma[i - 1] + vet[i - 1];

    for (i = 1; i < n + 1; i++)
    {
        int dif = i;
        for (j = i; j < n; j++)
        {
            if (soma_max < soma[j] - soma[j - dif])
            {
                soma_max = soma[j] - soma[j - dif];
                dir = j - dif;
                esq = j;
            }
        }
    }

    printf("Sequencia: ");
    for (i = 0; i < n; i++)
        printf("%d, ", vet[i]);
    printf("\n");

    printf("sequencia maxima: ");
    for (i = dir; i < esq; i++)
        printf("%d, ", vet[i]);
    printf("\n");

    printf("soma maxima: %d\n", soma_max);

    return 0;
}