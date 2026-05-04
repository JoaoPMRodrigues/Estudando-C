#include <stdio.h>

int main(void)
{
    int i, j, c = 0;
    int n, primo;

    printf("n: ");
    scanf("%d", &n);

    int vet[n];

    for (i = 2; i < n; i++)
    {
        primo = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                primo = 0;
                break;
            }
        }
        if (primo)
        {
            vet[c] = i;
            c += 1;
        }
    }

    for (i = 0; i < c; i++)
        printf("%d ", vet[i]);

    printf("\n");
    return 0;
}