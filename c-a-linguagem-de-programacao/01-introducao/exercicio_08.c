#include <stdio.h>

int main()
{
    int c, ne = 0, nl = 0, nt = 0;

    while ((c = getchar()) != EOF) // Ctrl + D simula o EOF
        if (c == ' ')
            ++ne;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    printf("Espaços = %d\n", ne);
    printf("Tabulações = %d\n", nt);
    printf("Linhas = %d\n", nl);
    return 0;
}