#include <stdio.h>
#include <stdlib.h>

struct isotopo
{
    char nome;
    int massa;
};
typedef struct isotopo iso;

int valida_iso(iso *vet, char nome, int massa, int cont)
{
    if (cont != 0)
    {
        for (int i = 0; i < cont; i++)
        {
            if (nome == vet[i].nome && massa == vet[i].massa)
                return 0;
        }
    }
    return 1;
}

int main(void)
{

    iso *vet;
    int n, massa, cont = 0;
    char nome;
    printf("numero de isotopos: ");
    scanf("%d", &n);

    vet = (iso *)malloc(n * sizeof(iso));

    for (int i = 0; i < n; i++)
    {
        printf("Simbolo: ");
        scanf(" %c", &nome);
        printf("Massa: ");
        scanf(" %d", &massa);

        if (valida_iso(vet, nome, massa, cont) == 1)
        {
            vet[cont].nome = nome;
            vet[cont].massa = massa;
            cont++;
        }
    }
    printf("Diferentes: %d\n", cont);
    for (int i = 0; i < cont; i++)
        printf("%c: %d\n", vet[i].nome, vet[i].massa);

    free(vet);
    return 0;
}