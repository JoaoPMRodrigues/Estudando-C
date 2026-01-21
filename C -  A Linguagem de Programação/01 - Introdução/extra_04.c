#include <stdio.h>

int main()
{
    int fahr;

    printf("%4s%1s%6s\n", "  ºF ", "|", "ºC");
    /* inicio ; fim ; incr e %nd para n pertencente aos inteiros */
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%4d %1s %6.2f\n", fahr, "|", (5.0 / 9.0) * (fahr - 32));
    return 0;
}