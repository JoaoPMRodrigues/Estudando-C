#include <stdio.h>

int main(void)
{
    int c1, c2, c3;
    int maior, menor;

    printf("3 cartas (ordem crescente): ");
    scanf("%d %d %d", &c1, &c2, &c3);

    maior = c1;
    menor = c1;

    if (c2 > maior)
        maior = c2;
    if (c3 > maior)
        maior = c3;
    if (c2 < menor)
        menor = c2;
    if (c3 < menor)
        menor = c3;

    if (c1 == c2 && c2 == c3)
        printf("Trinca\n");
    else if (c1 == c2 || c2 == c3 || c1 == c3)
        printf("Par\n");
    else if (maior - menor == 2)
        printf("Sequência\n");
    else
        printf("Lascou\n");
    return 0;
}
