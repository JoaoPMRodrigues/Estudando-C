#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct tipoPonto
{
    float x;
    float y;
};
typedef struct tipoPonto tPonto;

tPonto *cria_ponto(float x, float y)
{
    tPonto *ponto;
    ponto = (tPonto *)malloc(1 * sizeof(tPonto));

    ponto->x = x;
    ponto->y = y;

    return ponto;
}

void imprime_ponto(tPonto *ponto)
{
    printf("X: %.2f\n", ponto->x);
    printf("Y: %.2f\n", ponto->y);
}

float distancia(tPonto *ponto1, tPonto *ponto2)
{
    float d, px, py;
    px = (ponto1->x - ponto2->x) * (ponto1->x - ponto2->x);
    py = (ponto1->y - ponto2->y) * (ponto1->y - ponto2->y);

    d = sqrt(px + py);

    return d;
}

void deleta_ponto(tPonto *ponto)
{
    free(ponto);
}