#include <stdio.h>

int *bobble(int n, int v[], int i)
{

    if (n == 1)
        return v;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            int aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
    }
    return bobble(n - 1, v, i + 1);
}

int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int i = 0;
    int *resultado = bobble(n, v, i);

    for (int i = 0; i < n; i++)
        printf("%d ", resultado[i]);
    printf("\n");
    return 0;
}