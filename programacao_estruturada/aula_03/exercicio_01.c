#include <stdio.h>

void main()
{
    char rsp = 'S';
    int numero, soma_par = 0, soma_multiplos = 0, total = 0;
    float media;

    do
    {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
            soma_par += numero;
        if (numero % 3 == 0)
        {
            soma_multiplos += numero;
            total += 1;
        }

        printf("Quer continuar? [s/n] ");
        scanf(" %c", &rsp);

    } while (rsp == 's');

    media = (float)soma_multiplos / total;

    printf("Soma dos pares = %d\n", soma_par);
    printf("Soma dos multiplos de 3 = %.2f\n", media);
}