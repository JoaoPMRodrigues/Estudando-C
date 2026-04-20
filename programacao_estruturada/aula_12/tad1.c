struct meuVetor
{
    int max;
    int tam;
    int *v;
};
typedef struct meuVetor mvet;

mvet *aloca_vetor(int n)
{
    mvet *vet;
    vet = (mvet *)malloc(sizeof(mvet));
    vet->max = n;
    vet->tam = 0;
    vet->v = (int *)malloc(vet->max * sizeof(int));

    return vet;
}

void inserir_vetor(mvet *vet, int n)
{
    if (vet->tam < vet->max)
    {
        vet->v[vet->tam] = n;
        vet->tam++;
    }
    else
        printf("O vetor já está cheio\n");
}

void imprime_vetor(mvet *vet)
{
    for (int i = 0; i < vet->max; i++)
        printf("%d ", vet->v[i]);
    printf("\n");
}

int max_vetor(mvet *vet)
{
    int max = vet->v[0];
    for (int i = 1; i < vet->max; i++)
    {
        if (vet->v[i] > max)
            max = vet->v[i];
    }
    return max;
}

void libera_vetor(mvet *vet)
{
    free(vet);
}