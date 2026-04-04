#include <stdio.h>

int mmc(int n1, int n2, int mult)
{
    if (mult % n1 == 0 && mult % n2 == 0)
        return mult;
    return mmc(n1, n2, mult + 1);
}

int main(void)
{
    int n1, n2, mult = 1;

    printf("n1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);

    printf("mmc: %d\n", mmc(n1, n2, mult));

    return 0;
}