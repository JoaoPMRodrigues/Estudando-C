#include <stdio.h>
#include <stdlib.h>

int positivos(int n, int *v1, int *v2, int i, int j)
{
    if (i == n)
        return j;
    if (v1[i] > 0)
    {
        v2[j] = v1[i];
        return positivos(n, v1, v2, i + 1, j + 1);
    }
    else
        return positivos(n, v1, v2, i + 1, j);
}
int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int *v1, *v2;

    v1 = (int *)malloc(n * sizeof(int));
    v2 = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            v1[i] = i;
        else
            v1[i] = -1 * (i);
    }

    int tam = positivos(n, v1, v2, 0, 0);

    for (int i = 0; i < tam; i++)
        printf("%d ", v2[i]);

    return 0;
}