#include <stdio.h>
/* Cria uma tabela que compara graus celcius com Farenheit
    para f =0,20,40...*/
int main()
{
    int inicio, fim, incr;
    float fahr, celcius;

    inicio = 0; // limite inferior
    fim = 300;  // limite superior
    incr = 20;  // incremento

    fahr = inicio;
    while (fahr <= fim)
    {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %6.2f\n", fahr, celcius);
        fahr = fahr + incr;
    }
    return 0;
}