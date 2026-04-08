#include <stdio.h>

void imprime(int n, int v[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
void inverte(int n, int v[], int inicio, int fim)
{
    int aux;
    while (inicio <= fim)
    {
        aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;
        inicio += 1;
        fim -= 1;
    }

    imprime(n, v);
}

int main(void)
{
    int n = 6;
    int inicio = 0, fim = n - 1;
    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    inverte(n, vetor, inicio, fim);
    return 0;
}