#include <stdio.h>

int main()
{
    int c;
    float nc;

    nc = 0;
    while ((c = getchar()) != EOF) // Ctrl + D simula o EOF
        ++nc;
    printf("%.0f \n", nc);
    return 0;
}