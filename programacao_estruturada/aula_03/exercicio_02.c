#include <stdio.h>

int main()
{
    float s_i = 10;
    double salario_atual, juros = 0.001;
    int i, ano = 2026;

    salario_atual = s_i;

    for (i = 1995; i < ano; i++)
    {
        salario_atual += salario_atual * juros;
        juros *= 2;
    }

    printf("salário atual = R$%.2f\n", salario_atual);

    return 0;
}