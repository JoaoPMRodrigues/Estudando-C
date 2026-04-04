#include <stdio.h>

int fatorial(int n)
{
    if (n == 0)
        return 1;
    int fat = 1;

    for (int i = n; i > 0; i--)
        fat *= i;

    return fat;
}

float serie(int n)
{
    float s = 0;

    for (int i = 0; i <= n; i++)
        s += (float)(1.0 / fatorial(i));

    return s;
}

int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    printf("%.5f\n", serie(n));
    return 0;
}
