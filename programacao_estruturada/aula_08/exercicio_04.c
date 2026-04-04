#include <stdio.h>

int primo(int n, int div)
{
    if (n == div)
        return 1;
    if (n % div == 0)
        return 0;

    return primo(n, div + 1);
}

int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int bool = primo(n, 2);

    if (bool)
        printf("%d é primo.\n", n);
    else
        printf("%d não é primo.\n", n);
    return 0;
}