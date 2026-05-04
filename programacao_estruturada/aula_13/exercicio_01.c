#include <stdio.h>
#include <stdlib.h>
#include "tad.c"

int main()
{
    int true = 1;
    int tam;
    mvet *vetor;
    vetor = (mvet *)malloc(1 * sizeof(mvet));
    vetor->v = (int *)malloc(10 * sizeof(int));
    vetor->v[0] = 8;
    vetor->v[1] = 3;
    vetor->v[2] = 7;
    vetor->v[3] = 12;
    vetor->v[4] = 6;
    vetor->v[5] = 9;
    vetor->v[6] = 10;
    vetor->tam = 7;

    int opcao;
    while (true)
    {
        opcao = menu();

        switch (opcao)
        {
        case 1:
        {
            imprimir(vetor);
            break;
        }

        case 2:
        {
            int n, pos;
            printf("\nDigite um valor: ");
            scanf("%d", &n);

            printf("\nEm qual posição do array ele será inserido?: ");
            scanf("%d", &pos);

            inserir(n, pos, vetor);

            break;
        }
        case 3:
        {
            int n;
            printf("n: ");
            scanf("%d", &n);

            adicionar(n, vetor);
            break;
        }
        case 4:
        {
            int pos;
            printf("Posição: ");
            scanf("%d", &pos);
            remover(pos, vetor);
            break;
        }
        case 5:
        {
            int n;
            printf("n: ");
            scanf("%d", &n);
            buscar(n, vetor);
            break;
        }
        case 6:
        {
            inverter(vetor);
            break;
        }
        case 7:
        {
            int n;
            printf("n:");
            scanf("%d", &n);

            repetir(n, vetor);
            break;
        }
        case 8:
        {
            ordenar(vetor);
            break;
        }
        case 9:
        {
            finalizar(vetor);
            break;
        }
        case 10:
        {
            printf("Fim =)\n");
            true = 0;
            break;
        }
        case 11:
        {
            printf("Qual tamanho do vetor: ");
            scanf("%d", &tam);
            vetor = alocar(tam);
            break;
        }
        case 12:
        {
            printf("Vetor liberado!\n");
            liberar(vetor);
            break;
        }

        default:
            printf("Opção inválida! ");
            break;
        }

        if (!true)
            break;
    }
    return 0;
}