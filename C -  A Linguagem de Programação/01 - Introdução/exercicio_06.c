#include <stdio.h>
/* Cria uma tabela que compara graus celcius com Farenheit
    para C = 0,20,40...*/
int main ()
{
    int inicio, fim, incr;
    float fahr, celcius;

    inicio = 0;
    fim = 300;
    incr = 20;

    celcius = inicio;
    printf("%1s %4s %2s %6s %2s\n", "|", "ºC", "|", "ºF", "|");
    while (celcius <=fim)
    {
        fahr = (9.0/5.0)*celcius + 32.0;
        
        printf("%1s %4.0f %1s %6.2f %1s\n", "|", celcius, "|", fahr, "|");
        celcius = celcius + incr;
    }
    return 0;
}