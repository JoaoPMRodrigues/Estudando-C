#include <stdio.h>
/*
Converte uma letra maiuscula em minúscula
ou em c, caso não seja uma letra
*/
char lower(char letra)
{
    if (letra >= 65 && letra <= 90)
        return (letra + 32);
    else if (letra >= 97 && letra <= 122)
        return (letra);
    else
        return (99);
}

int main()
{
    int a;

    a = lower('A');
    printf("%c\n", a);
    return 0;
}