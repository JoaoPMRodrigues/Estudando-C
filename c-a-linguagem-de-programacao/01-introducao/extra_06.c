#include <stdio.h>
int main()
{
    int c;
    c = getchar();
    while (c != EOF) // Ctrl + D simula o EOF
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}