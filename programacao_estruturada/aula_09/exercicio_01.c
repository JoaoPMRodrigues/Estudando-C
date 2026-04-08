#include <stdio.h>

int somadigitos(int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + somadigitos(n / 10);
}

int main(void)
{
    int n = 183;
    printf("%d\n", somadigitos(n));
    return 0;
}