#include <stdio.h>

int main(void)
{
    int valor, resto;
    int r1, m50, m25, m1;
    printf("Qual o valor?(Em centavos) ");
    scanf("%d", &valor);

    r1 = valor / 100;
    resto = valor % 100;
    m50 = resto / 50;
    resto %= 50;
    m25 = resto / 25;
    m1 = resto % 25;

    if (r1)
        printf("%d de 1r\n", r1);
    if (m50)
        printf("%d de 50c\n", m50);
    if (m25)
        printf("%d de 25c\n", m25);
    if (m1)
        printf("%d de 1c\n", m1);

    return 0;
}