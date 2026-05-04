#include <stdio.h>
#include <stdlib.h>

int sequencia(int n, int p, int i)
{
    printf("%d, ", n);

    if (p == i)
        return 0;
    else
    {
        if (n % 5 == 0)
            n -= 4;
        else
            n += 3;
    }
    i++;
    return sequencia(n, p, i);
}

int main(void)
{
    int n, p;

    printf("n: ");
    scanf("%d", &n);

    printf("p: ");
    scanf("%d", &p);

    sequencia(n, p, 1);
    return 0;
}