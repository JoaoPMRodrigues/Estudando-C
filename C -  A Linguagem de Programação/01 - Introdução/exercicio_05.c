#include <stdio.h>
/* Cria uma tabela (com cabeçalho) que compara graus celcius com Farenheit
    para f = 0,20,40...*/ 
int main()
{
    int inicio, fim, incr;
    float fahr, celcius;

    inicio = 0; // limite inferior
    fim = 300;  // limite superior
    incr = 20;  // incremento

    fahr = inicio;
    printf("%1s %4s %2s %6s %2s\n", "|", "ºF", "|","ºC","|");
    while (fahr <= fim)
    {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%1s %4.0f %1s %6.2f %1s\n","|", fahr,"|", celcius,"|");
        fahr = fahr + incr;
    }
    return 0;
}