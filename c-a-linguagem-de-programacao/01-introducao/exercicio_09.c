#include <stdio.h>

int main()
{
    int c, ne = 0;

    while ((c = getchar()) != EOF) // Ctrl + D simula o EOF
    {
        if ((c == ' ') && (ne == 0))
        {
            ++ne;
            putchar(c);
        }
        else if ((c == ' ') && (ne != 0))
            continue;
        else if ((c != ' ') && (ne != 0))
        {
            putchar(c);
            --ne;
        }
        else
            putchar(c);
    }
    return 0;
}