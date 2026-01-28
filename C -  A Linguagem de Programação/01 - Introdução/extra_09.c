#include <stdio.h>

int main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF) // Ctrl + D simula o EOF
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
    return 0;
}