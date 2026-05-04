#include <stdio.h>
int main(void)
{
    int a, b, c, n;
    float s;
    printf("Digite o comprimento máximo da hipotenusa: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        for (a = 1; a <= n; a++)
            for (b = a; b <= n; b++)
            {
                if (i * i == a * a + b * b)
                    printf("Hip = %d Cat1 = %d e Cat2 = %d\n", i, a, b);
            }

    return 0;
}
