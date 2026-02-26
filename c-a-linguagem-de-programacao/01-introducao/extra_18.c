#include <stdio.h>

#define MAX 1000

int lelinha(char s[], int lim);
void copia(char s1[], char s2[]);

int main()
{
    char linha[MAX];
    char destino[MAX];
    int tamanho;

    tamanho = lelinha(linha, MAX);
    copia(linha, destino);

    printf("Linha lida(%d caracteres): %s\n", tamanho, destino);

    return 0;
}

int lelinha(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && ((c = getchar()) != EOF) && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return (i);
}

void copia(char s1[], char s2[])
{
    int i = 0;

    while ((s2[i] = s1[i]) != '\0')
        ++i;
}
