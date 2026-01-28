#include <stdio.h>
#include <ctype.h>

int main()
{
    int c, empalavra = 0, np = 0;
    // 0 = Verdadeiro e 1 = Falso
    np = 0;
    while ((c = getchar()) != EOF)
    {
        if (isalpha(c))
        {
            if (!empalavra)
            {
                empalavra = 1;
                ++np;
            }
        }
        else if (isdigit(c) || c == '\'')
        {
            if (!empalavra)
                continue;
        }
        else
            empalavra = 0;
    }
    printf("Número de palavras = %d\n", np);
    return 0;
}
