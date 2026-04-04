#include <stdio.h>

int subseq(int n, int m, int v1[], int v2[])
{
    int i = 0;

    while (i + m <= n)
    {
        int j = i;
        int verdadeiro = 1;

        for (int k = 0; k < m; k++)
        {
            if (v1[j] != v2[k])
            {
                verdadeiro = 0;
                break;
            }
            j += 1;
        }
        if (verdadeiro)
            return 1;
        i += 1;
    }

    return 0;
}
int main(void)
{
    int n, m;

    do
    {
        printf("n: ");
        scanf("%d", &n);

        printf("m: ");
        scanf("%d", &m);
    } while (n < m && m > 0);

    int v1[n], v2[m];
    for (int i = 0; i < n; i++)
    {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    int bool = subseq(n, m, v1, v2);

    if (bool)
        printf("É subsequência!\n");
    else
        printf("Não é subsequência!\n");
    return 0;
}
