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
    int numero = n, digito, pot, soma = 0;

    pot = expoente(n);

    while (numero != 0)
    {
        digito = numero % 10;
        soma += potencia(digito, pot);
        numero /= 10;
    }

    return soma == n;
}

int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int e_armstrong = armstrong(n);

    if (e_armstrong)
        printf("%d é um número de armstrong.\n", n);
    else
        printf("%d não é um número de armstrong.\n", n);
    return 0;
}
