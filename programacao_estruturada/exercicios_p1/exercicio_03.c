#include <stdio.h>
#include <stdlib.h>

int soma(int n, int i, int *vet)
{
    if (i == n - 1)
        return vet[i];
    else
        return vet[i] + soma(n, i + 1, vet);
}

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);

    int *vet;
    vet = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Soma do vetor: %d\n", soma(n, 0, vet));

    free(vet);
    return 0;
}