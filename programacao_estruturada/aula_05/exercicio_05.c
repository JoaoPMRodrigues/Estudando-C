#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, n;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    int *v1, *v2, *v3;

    v1 = (int *)malloc(n * sizeof(int));
    v2 = (int *)malloc(m * sizeof(int));
    v3 = (int *)malloc((n + m) * sizeof(int));
    for (int i = 0; i < n; i++)

    {
        printf("veta[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("vetb[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    int c1 = 0, c2 = 0, c3 = 0;

    while (c1 < n || c2 < m)
    {
        if (c1 <= c2 && c1 < n)
        {
            v3[c3] = v1[c1];
            c1++;
            c3++;
        }
        else
        {
            v3[c3] = v2[c2];
            c2++;
            c3++;
        }
    }

    for (int i = 0; i < (n + m); i++)
        printf("%d ", v3[i]);
    printf("\n");
    return 0;
}