#include <stdio.h>
/*Uma solução mais elegante para o código exercicício_09*.c*/
int main()
{
    int c, ultimo = 0;

    while ((c = getchar()) != EOF) // Ctrl + D simula o EOF
    {
        if ((c != ' ') || (ultimo != ' '))
            putchar(c);
        ultimo = c;
    }
    return 0;
}