#include <stdio.h>

int maior(int v[], int ini, int fim)
{
    if (ini == fim)
        return v[ini];
    if (v[ini] > maior(v, ini + 1, fim))
        return v[ini];
    return maior(v, ini + 1, fim);
}

int main(void)
{
    int n, ini = 0;

    printf("n: ");
    scanf("%d", &n);

    int v[n], fim = n - 1;

    for (int i = 0; i < n; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("O maior valor da lista é: %d\n", maior(v, ini, fim));

    return 0;
}