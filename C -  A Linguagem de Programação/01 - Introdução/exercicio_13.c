#include <stdio.h>
#include <ctype.h>
/*
Este código conta o número de palavras de uma frase e
quantas palavras tem o tamanho i, para i > 0 e i < 10
*/
int main()
{
    int c, i;
    int tamanho = 0;
    int empalavra = 0;
    int np = 0;
    int tamanhos[10] = {0};

    // 0 = Fora da palavra; 1 = Dentro da palavra

    while ((c = getchar()) != EOF)
    {
        if (isalpha(c)) // Sou uma letra?
        {
            if (!empalavra) // empalavra==0
            {
                empalavra = 1; // Está em uma palavra
                tamanho = 1;
                ++np;
            }
            else
                ++tamanho;
        }
        else if (isdigit(c) || c == '\'') // Sou um número ou asterístico?
        {
            if (empalavra) // empalavra==1
                ++tamanho;
        }
        else // Sou espaço, tabulação, quebra de linha, etc.
        {
            if (empalavra)
            {
                if (tamanho >= 1 && tamanho <= 9)
                    ++tamanhos[tamanho];
            }
            empalavra = 0;
            tamanho = 0;
        }
    }
    for (i = 1; i < 10; ++i)
        printf("Tamanho %d = %d palavras.\n", i, tamanhos[i]);
    printf("Número de palavras = %d\n", np);
    return 0;
}