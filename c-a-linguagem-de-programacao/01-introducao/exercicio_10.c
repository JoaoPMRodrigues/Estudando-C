#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF) // Ctrl + D simula o EOF
    {
        if (c == '\t')
            printf(">");
        else if (c == '\b') // Ctrl + H simula o Backspace
            printf("<");
        else
            putchar(c);
    }
    return 0;
}