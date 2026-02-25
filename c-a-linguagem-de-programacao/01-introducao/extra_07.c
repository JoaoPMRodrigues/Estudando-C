#include <stdio.h>
int main()
{
    int c;

    while ((c = getchar()) != EOF) // Ctrl + D simula o EOF
        putchar(c);
    return 0;
}