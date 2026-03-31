#include <stdio.h>

int main(void)
{
    int n, aux, sobe = 0;
    int i, j;

    do
    {
        printf("n: ");
        scanf("%d", &n);
    } while (n < 0 || n > 10);

    int v1[n + 1];
    int v2[n + 1];
    int soma[n + 1];

    for (i = 1; i < n + 1; i++)
    {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);

        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    for (i = n; i > 0; i--)
    {
        aux = (v1[i] + v2[i] + sobe) % 10;
        sobe = (int)(v1[i] + v2[i]) / 10;
        soma[i] = aux;
    }
    soma[0] = sobe;
    for (i = 0; i < n + 1; i++)
        printf("%d", soma[i]);

    printf("\n");
    return 0;
}