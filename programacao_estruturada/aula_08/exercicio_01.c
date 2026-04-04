#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n > 2)
        return fib(n - 1) + fib(n - 2);
}
int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    for (int i = 0; i < n + 1; i++)
        printf("%d ", fib(i));

    printf("\n");
    return 0;
}