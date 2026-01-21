#include <stdio.h>
int main()
{
    int inicio; /*Limite inferior da tabela*/
    int fim;    /*Limite superior da tabela*/
    int incr;   /*Incremento*/
    int fahr;   /*Temperatura*/

    printf("%4s%1s%6s\n", "  ºF ", "|", "ºC");
    for (fahr = inicio; fahr <= fim; fahr = fahr + incr)
        printf("%4d %1s %6.2f\n", fahr, "|", (5.0 / 9.0) * (fahr - 32));

    return 0;
}