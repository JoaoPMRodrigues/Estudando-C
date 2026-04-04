#include <stdio.h>

int primo(int n)
{
    if (n == 1)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int potencia(int n, int exp)
{
    int pot = 1;

    for (int i = 0; i < exp; i++)
        pot *= n;
    return pot;
}

int expoente(int n)
{
    int i = 1, pot = 0;
    while (pot <= n)
    {
        pot = potencia(2, i) - 1;
        i++;
        if (pot == n)
            return 1;
    }
    return 0;
}
int mersenne(int n)
{
    if (primo(n) && expoente(n))
        return 1;
    else
        return 0;
}
int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    if (mersenne(n))
        printf("%d É primo de Mersenne\n", n);
    else
        printf("%d não é primo de Mersenne.\n", n);
    return 0;
}
