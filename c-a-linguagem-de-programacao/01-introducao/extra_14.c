#include <stdio.h>

int main()
{
    int c, i, nbranco, noutro;
    int ndigito[10];

    nbranco = noutro = 0;
    for (i = 0; i < 10; ++i)
        ndigito[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigito[c - '0'];
        else if (c == '\n' || c == ' ' || c == '\t')
            ++nbranco;
        else
            ++noutro;
    }
    for (i = 0; i < 10; ++i)
        printf("Número de %d = %d\n", i, ndigito[i]);
    printf("Número de espaços = %d\n", nbranco);
    printf("Número de outros = %d\n", noutro);

    return 0;
}