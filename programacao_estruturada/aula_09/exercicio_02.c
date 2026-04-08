#include <stdio.h>

int conta_granizo(int n)
{
    if (n == 1)
        return 1;
    else if (n % 2 == 0)
        return 1 + conta_granizo(n / 2);
    else
        return 1 + conta_granizo(3 * n + 1);
}
void granizo(int n)
{

    int quant;
    int naux = 27;

    if (n == 1)
    {
        printf("%d\n", n);
        quant = conta_granizo(naux);
        printf("%d\n", quant);
    }
    else if (n % 2 == 0)
    {
        printf("%d ", n);
        granizo(n / 2);
    }
    else
    {
        printf("%d ", n);
        granizo(3 * n + 1);
    }
}

int main(void)
{
    int n = 27;
    granizo(n);
    return 0;
}