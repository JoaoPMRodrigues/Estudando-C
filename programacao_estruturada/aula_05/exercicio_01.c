#include <stdio.h>

int main(void)
{
    int i, j;
    int n, m, tot = 0;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    int a[n], b[m];

    for (i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < m; i++)
    {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                tot += 1;
                break;
            }
        }
    }

    printf("\nTotal= %d\n", tot);
    return 0;
}