#include <stdio.h>

int potencia(int base, int exp)
{
    int pot = 1;
    for (int i = 0; i < exp; i++)
        pot *= base;
    return pot;
}
int main(void)
{
    int x, n = 50;
    double soma = 0;

    printf("x: ");
    scanf("%d", &x);

    int numerador = 2;
    int b = 1;
    int expoente = 4;

    for (int i = 0; i < n; i++)
    {
        soma += ((numerador * 1.0) / b * potencia(x, expoente));
        numerador *= 2;
        b += 2;
        expoente++;
    }

    printf("Série: %.4lf\n", soma);
    return 0;
}