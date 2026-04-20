#include <stdio.h>
#include <stdlib.h>
#include "tad.c"

int main(void)
{
    tPonto *p = cria_ponto(2.0, 1.0);
    tPonto *q = cria_ponto(3.4, 2.1);

    imprime_ponto(p);
    imprime_ponto(q);

    float d = distancia(p, q);
    printf("Distância estre pontos: %.2f\n", d);

    deleta_ponto(p);
    deleta_ponto(q);

    return 0;
}