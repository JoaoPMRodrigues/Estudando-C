#include <stdio.h>

int main()
{
    int c, nl = 0, np = 0, nc = 0, empalavra = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            empalavra = 0;
        else if (empalavra == 0)
        {
            empalavra = 1;
            ++np;
        }
    }
    printf("Número de linhas = %d\n", nl);
    printf("Número de palavras = %d\n", np);
    printf("Número de caracteres = %d\n", nc);
    return 0;
}