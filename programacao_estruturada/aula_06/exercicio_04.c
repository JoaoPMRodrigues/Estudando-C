#include <stdio.h>

int main(void)
{
    int i;
    int m, n, soma = 0;

    printf("m: ");
    scanf("%d", &m);

    int a[m];
    int b[m];

    for (i = 0; i < m; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < m; i++)
        soma += a[i] * b[i];

    printf("Soma: %d\n", soma);
    return 0;
}