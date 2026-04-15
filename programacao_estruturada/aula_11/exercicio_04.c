#include <stdio.h>
#include <stdlib.h>

void lematriz(int **mat)
{
    mat[0][0] = 1;
    mat[0][1] = 1;
    mat[0][2] = 0;
    mat[0][3] = 1;
    mat[0][4] = 0;
    mat[0][5] = 0;
    mat[0][6] = 0;
    mat[0][7] = 0;
    mat[0][8] = 0;
    mat[0][9] = 0;
    mat[1][0] = 0;
    mat[1][1] = 1;
    mat[1][2] = 1;
    mat[1][3] = 0;
    mat[1][4] = 0;
    mat[1][5] = 0;
    mat[1][6] = 1;
    mat[1][7] = 0;
    mat[1][8] = 0;
    mat[1][9] = 0;
    mat[2][0] = 0;
    mat[2][1] = 0;
    mat[2][2] = 1;
    mat[2][3] = 0;
    mat[2][4] = 1;
    mat[2][5] = 0;
    mat[2][6] = 0;
    mat[2][7] = 0;
    mat[2][8] = 0;
    mat[2][9] = 0;
    mat[3][0] = 0;
    mat[3][1] = 0;
    mat[3][2] = 0;
    mat[3][3] = 1;
    mat[3][4] = 1;
    mat[3][5] = 0;
    mat[3][6] = 0;
    mat[3][7] = 0;
    mat[3][8] = 0;
    mat[3][9] = 0;
    mat[4][0] = 0;
    mat[4][1] = 0;
    mat[4][2] = 0;
    mat[4][3] = 0;
    mat[4][4] = 1;
    mat[4][5] = 1;
    mat[4][6] = 0;
    mat[4][7] = 1;
    mat[4][8] = 0;
    mat[4][9] = 0;
    mat[5][0] = 0;
    mat[5][1] = 0;
    mat[5][2] = 1;
    mat[5][3] = 0;
    mat[5][4] = 0;
    mat[5][5] = 1;
    mat[5][6] = 1;
    mat[5][7] = 0;
    mat[5][8] = 0;
    mat[5][9] = 0;
    mat[6][0] = 0;
    mat[6][1] = 0;
    mat[6][2] = 0;
    mat[6][3] = 0;
    mat[6][4] = 0;
    mat[6][5] = 0;
    mat[6][6] = 1;
    mat[6][7] = 1;
    mat[6][8] = 0;
    mat[6][9] = 0;
    mat[7][0] = 0;
    mat[7][1] = 0;
    mat[7][2] = 0;
    mat[7][3] = 0;
    mat[7][4] = 0;
    mat[7][5] = 0;
    mat[7][6] = 0;
    mat[7][7] = 1;
    mat[7][8] = 1;
    mat[7][9] = 0;
    mat[8][0] = 0;
    mat[8][1] = 0;
    mat[8][2] = 0;
    mat[8][3] = 0;
    mat[8][4] = 0;
    mat[8][5] = 0;
    mat[8][6] = 0;
    mat[8][7] = 0;
    mat[8][8] = 1;
    mat[8][9] = 1;
    mat[9][0] = 1;
    mat[9][1] = 0;
    mat[9][2] = 0;
    mat[9][3] = 0;
    mat[9][4] = 0;
    mat[9][5] = 1;
    mat[9][6] = 0;
    mat[9][7] = 0;
}

void imprimematriz(int n, int **mat)
{
    printf("Matriz: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int menu()
{
    int opcao;
    printf("\n");
    printf("--- Menu ---\n");
    printf("1) Grau de conexão\n");
    printf("2) Mais entradas\n");
    printf("3) Roteiro possível\n");
    printf("4) Caminho\n");
    printf("10) Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    return opcao;
}

void grau_conexao(int n, int **mat, int cidade)
{
    int entram = 0, saem = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != cidade)
        {
            // entram
            if (mat[i][cidade] == 1)
                entram++;
            // saem
            if (mat[cidade][i] == 1)
                saem++;
        }
    }

    printf("\nSai %d e entram %d estradas da cidade %d\n\n", saem, entram, cidade);
}

void mais_entradas(int n, int **mat, int *cidade, int *entradas)
{
    for (int cid = 0; cid < n; cid++)
    {
        int entradas_aux = 0;
        for (int i = 0; i < n; i++)
        {
            if (mat[i][cid] == 1 && cid != i)
                entradas_aux++;
        }
        if (entradas_aux >= *entradas)
        {
            *entradas = entradas_aux;
            *cidade = cid;
        }
    }
}

int roteiro_possivel(int **mat, int cidades, int *roteiro)
{
    for (int i = 0; i < cidades - 1; i++)
    {
        if (mat[roteiro[i]][roteiro[i + 1]] == 0)
        {
            printf("-- Viagem impossível :( --\n");
            printf("Não existe estrada de %d para %d\n\n", roteiro[i], roteiro[i + 1]);
            return 0;
        }
    }
    printf("-- Viagem possível :) --\n\n");
    return 0;
}

void busca_rec(int **mat, int n, int *predecessor, int atual)
{
    for (int i = 0; i < n; i++)
        if (mat[atual][i] == 1)
            if (predecessor[i] == -1)
            {
                predecessor[i] = atual;
                busca_rec(mat, n, predecessor, i);
            }
}

void caminho(int n, int **mat, int origem, int destino)
{
    int *predecessor;
    predecessor = (int *)malloc(n * sizeof(int));

    // inicializa
    for (int i = 0; i < n; i++)
        predecessor[i] = -1;

    // predecessor da origem do caminho eh ele mesmo
    predecessor[origem] = origem;

    // busca caminho recursivo
    busca_rec(mat, n, predecessor, origem);

    // encontrou caminho
    if (predecessor[destino] != -1)
    {
        printf("-- encontrou caminho = ");

        int tam = 0;
        int *percurso;
        percurso = (int *)malloc(n * sizeof(int));

        // constroi percurso com os predecessores
        int i = destino;
        while (i != origem)
        {
            percurso[tam++] = i;
            i = predecessor[i];
        }
        // inicio do caminho
        percurso[tam++] = origem;

        // imprime percurso
        for (int i = tam - 1; i >= 0; i--)
            if (i != 0)
                printf("%d -> ", percurso[i]);
            else
                printf("%d", percurso[i]);
        printf("\n\n");

        free(percurso);
    }
    else
        printf("-- nao encontrou caminho :(\n");

    free(predecessor);
}

int main()
{
    int n;

    printf("n:");
    scanf("%d", &n);

    int **mat;

    mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(n * sizeof(int));

    lematriz(mat);

    int opcao;
    int True = 1;
    while (True)
    {
        imprimematriz(n, mat);
        opcao = menu();

        switch (opcao)
        {
        case 1:
        {
            int cidade;
            printf("Cidade: ");
            scanf("%d", &cidade);
            grau_conexao(n, mat, cidade);
            break;
        }
        case 2:
        {
            int cidade, entradas;
            mais_entradas(n, mat, &cidade, &entradas);
            printf("A cidade %d é a mais fácil de chegar.\n", cidade);
            printf("entradas: %d\n\n", entradas);
            break;
        }
        case 3:
        {
            int cidades;
            printf("Quantas cidades no roteiro? ");
            scanf("%d", &cidades);

            int *roteiro;
            roteiro = (int *)malloc(cidades * sizeof(int));
            for (int i = 0; i < cidades; i++)
            {
                printf("Cidade %d: ", i + 1);
                scanf("%d", &roteiro[i]);
            }

            roteiro_possivel(mat, cidades, roteiro);
            break;
        }
        case 4:
        {
            int origem, destino;
            printf("Origem e destino: ");
            scanf("%d %d", &origem, &destino);

            caminho(n, mat, origem, destino);
            break;
        }
        case 10:
        {
            True = 0;
            break;
        }
        default:
            printf("Número errado, tente novamente!\n");
            break;
        }
    }

    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
    return 0;
}