#include <stdio.h>
#include <stdlib.h>
#include "tad1.c"

int main(void)
{
    mvet *vetor;

    vetor = aloca_vetor(10);
    for (int i = 0; i < 10; i++)
        inserir_vetor(vetor, i);
    imprime_vetor(vetor);

    printf("Elemento máximo: %d\n", max_vetor(vetor));
    libera_vetor(vetor);

    return 0;
}