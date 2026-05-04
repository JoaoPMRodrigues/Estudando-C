#include <stdio.h>
#include <stdlib.h>

int verifica_pot(int n)
{
    int soma = 0;
    while (n > 0)
    {
        soma++;
        n /= 10;
    }
    return soma;
}

int potencia(int base, int exp)
{
    int pot = 1;
    for (int i = 0; i < exp; i++)
        pot *= base;
    return pot;
}

int main(void)
{
    int n, aux;
    printf("Digite um número: ");
    scanf("%d", &n);

    int pot = verifica_pot(n);

    int *numero;
    numero = (int *)malloc(pot * sizeof(int));

    aux = n;
    for (int i = 1; i <= pot; i++)
    {
        numero[i - 1] = aux / potencia(10, pot - i);
        aux = aux % potencia(10, i);
    }

    int inicio = 0, fim = pot - 1;

    while (inicio < fim)
    {
        if (numero[inicio] != numero[fim])
        {
            printf("Não\n");
            free(numero);
            return 0;
        }
        inicio++;
        fim--;
    }
    printf("Sim\n");

    free(numero);
    return 0;
}