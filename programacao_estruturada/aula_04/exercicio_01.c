#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n");
    return 0;
}