#include <stdio.h>
#include <stdlib.h>

int maior(int n, int *v, int i)
{
    if (i == n - 1)
        return v[i];
    else
    {
        if (v[i] >= maior(n, v, i + 1))
            return v[i];
        else
            return maior(n, v, i + 1);
    }
}
int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int *v;

    v = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("V[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Maior: %d\n", maior(n, v, 0));
    free(v);

    return 0;
}