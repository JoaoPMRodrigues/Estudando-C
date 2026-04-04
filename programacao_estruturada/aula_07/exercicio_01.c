#include <stdio.h>

void vetor(int n, int v[])
{
    int menor = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] < menor)
            menor = v[i];
    }

    for (int i = 0; i < n; i++)
        v[i] -= menor;
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

    vetor(n, v);

    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}
