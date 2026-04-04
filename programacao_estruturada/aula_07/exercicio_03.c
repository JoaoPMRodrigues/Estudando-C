#include <stdio.h>

int potencia(int n, int exp)
{
    int pot = 1;

    for (int i = 0; i < exp; i++)
        pot *= n;
    return pot;
}

int expoente(int n)
{
    int pot = 0;
    while (n != 0)
    {
        pot += 1;
        n /= 10;
    }
    return pot;
}

int armstrong(int n)
{
    if (!(n / 100))
        return 0;

    int numero = n, digito, pot, soma = 0;

    pot = expoente(n);

    while (numero != 0)
    {
        digito = numero % 10;
        soma += potencia(digito, pot);
        numero /= 10;
    }

    if (soma == n)
        return 1;
    else
        return 0;
}

int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int bool = armstrong(n);

    if (bool)
        printf("%d é um número forte.\n", n);
    else
        printf("%d não é um número forte.\n", n);
    return 0;
}
