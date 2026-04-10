#include <stdio.h>
#include <stdlib.h>

void repete(int n, int *v, int k)
{
    for (int i = 0; i < k; i++)
        rotaciona(n, v);
}
void rotaciona(int n, int *v)
{
    int ultimo = v[n - 1];
    for (int i = n - 1; i > 0; i--)
        v[i] = v[i - 1];
    v[0] = ultimo;
}

int main(void)
{
    int n, k;

    printf("n: ");
    scanf("%d", &n);

    printf("k: ");
    scanf("%d", &k);
    int *v;
    v = (int *)(malloc(n * sizeof(int)));

    for (int i = 0; i < n; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    repete(n, v, k);
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    free(v);
    return 0;
}