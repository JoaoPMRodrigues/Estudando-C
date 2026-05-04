#include <stdio.h>
#include <math.h>

int main(void)
{

    int a, b, c, delta;
    double raiz_delta, x1, x2;

    printf("Dada a equação: ax² + bx + c\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0)
        printf("Não há raizes reais.");
    else if (delta == 0)
    {
        x1 = -b / (2.0 * a);
        printf("Há uma única solução: x = %.3f\n", x1);
    }
    else
    {
        raiz_delta = sqrt(delta);
        x1 = (-b + raiz_delta) / (2 * a);
        x2 = (-b - raiz_delta) / (2 * a);
        printf("Há 2 soluções: x1 = %.3f e x2 = %.3f\n", x1, x2);
    }
    return 0;
}