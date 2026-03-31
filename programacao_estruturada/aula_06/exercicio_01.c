#include <stdio.h>

int main(void)
{
    int i, j, c;
    int n, num;
    printf("n: ");
    scanf("%d", &n);

    int vet[n];
    int cont[n];
    for (i = 0; i < n; i++)
    {
        do
        {
            printf("vet[%d]: ", i);
            scanf("%d", &vet[i]);
            cont[i] = 1;
        } while (vet[i] < 0);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            num = vet[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (vet[i] < 0)
                break;

            if (vet[i] == vet[j])
            {
                cont[i] += 1;
                vet[j] = -1;
            }
        }
    }
    c = 0;
    for (i = 0; i < n; i++)
    {
        if (vet[i] >= 0)
        {
            printf("O numero %d aparece %d vez(es) na sequência.\n", vet[i], cont[c]);
            c += 1;
        }
    }

    return 0;
}