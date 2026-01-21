#include <stdio.h>

int main()
{
    int celcius;

    printf("%4s %2s %6s\n", "ºC", "|", "ºF");
    for (celcius = 0; celcius <= 300; celcius = celcius + 20)
        printf("%4d %1s %6.2f\n", celcius, "|", ((9.0 / 5.0) * celcius) + 32);
    return 0;
}