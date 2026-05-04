struct meuVetor
{
    int max;
    int tam;
    int *v;
};
typedef struct meuVetor mvet;

int menu()
{
    int opcao;
    printf("\n");
    printf("--- Menu ---\n");
    printf("1) Imprimir\n");
    printf("2) Inserir\n");
    printf("3) Adcicionar\n");
    printf("4) Remover\n");
    printf("5) Buscar\n");
    printf("6) Inverter\n");
    printf("7) Rotacionar\n");
    printf("8) Ordenar\n");
    printf("9) Finalizar\n");
    printf("10) Sair\n");
    printf("11) Alocar memória \n");
    printf("12) inserir vetor\n");
    printf("13) Imprimir vetor\n");
    printf("14) Liberar memória\n");
    printf("15) Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    return opcao;
}

mvet *alocar(int n)
{
    mvet *vet;
    vet = (mvet *)malloc(sizeof(mvet));
    vet->max = n;
    vet->tam = 0;
    vet->v = (int *)malloc(vet->max * sizeof(int));

    return vet;
}

void imprimir(mvet *vet)
{
    for (int i = 0; i < vet->tam; i++)
        printf("%d ", vet->v[i]);
    printf("\n");
}

void liberar(mvet *vet)
{
    free(vet);
}

void inserir(int n, int pos, mvet *vet)
{
    if (vet->tam < vet->max)
    {
        if (pos > vet->tam)
        {
            vet->v[pos] = n;
            vet->tam++;
        }
        else
        {
            for (int i = vet->tam; i > pos; i--)
                vet->v[i] = vet->v[i - 1];

            vet->v[pos] = n;
            vet->tam++;
        }
    }
    else
        printf("O vetor está cheio");
}

void adicionar(int n, mvet *vet)
{
    for (int i = 0; i < vet->max; i++)
    {
        if (vet->v[i] == 0)
        {
            vet->v[i] = n;
            vet->tam++;
            break;
        }
    }
}

void remover(int pos, mvet *vet)
{
    for (int i = pos; i < vet->tam; i++)
    {
        vet->v[i] = vet->v[i + 1];
    }
    vet->tam--;
}

int buscar(int n, mvet *vet)
{
    int pos = 0;

    for (int i = 0; i < vet->tam; i++)
    {
        pos++;
        if (vet->v[i] == n)
        {
            if (i > 0)
            {
                int aux = vet->v[i - 1];
                vet->v[i - 1] = vet->v[i];
                vet->v[i] = aux;
            }
            printf("Buscar elemento %d levou %d teste(s)\n", n, pos);
            return 0;
        }
    }

    printf("Elemento %d não encontrado (%d testes)\n", n, pos);
    return 0;
}

void inverter(mvet *vet)
{
    int inicio = 0, fim = (vet->tam - 1);
    while (inicio < fim)
    {
        int aux = vet->v[inicio];
        vet->v[inicio] = vet->v[fim];
        vet->v[fim] = aux;
        inicio++;
        fim--;
    }
}

void rotacionar(mvet *vet)
{
    int primeiro = vet->v[0];
    for (int i = 0; i < vet->tam - 1; i++)
        vet->v[i] = vet->v[i + 1];
    vet->v[vet->tam - 1] = primeiro;
}

void repetir(int n, mvet *vet)
{
    for (int i = 0; i < n; i++)
    {
        rotacionar(vet);
        imprimir(vet);
    }
}

void ordenar(mvet *vet)
{
    for (int i = 0; i < vet->tam - 1; i++)
    {
        for (int j = i + 1; j < vet->tam; j++)
        {
            if (vet->v[i] > vet->v[j])
            {
                int aux = vet->v[i];
                vet->v[i] = vet->v[j];
                vet->v[j] = aux;
            }
        }
    }
}

void finalizar(mvet *vet)
{
    int soma = 0;
    for (int i = 0; i < 4; i++)
    {
        soma += (i + 1) * vet->v[i];
    }
    printf("A soma final é: %d\n", soma);
}