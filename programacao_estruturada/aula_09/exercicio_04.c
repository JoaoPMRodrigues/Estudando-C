#include <stdio.h>

int voldemort(int n)
{
    if (n == 3 || n == 2 || n == 1)
        return 1;
    return (2 * voldemort(n - 1)) - voldemort(n - 2) - voldemort(n - 3);
}
int main(void)
{
    int n = 30;

    printf("%d\n", voldemort(n));
    return 0;
}