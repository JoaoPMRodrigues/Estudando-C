# include <stdio.h>

int main (void)
{
    float salario_bruto, salario_liquido, desconto;
    scanf("%f", &salario_bruto);
    
    if (500<=salario_bruto && salario_bruto<800)
    {    
        desconto = 0.9;
        salario_liquido = salario_bruto*desconto;
    }
    else if (800<=salario_bruto && salario_bruto<1000)
    {
        desconto = 0.85;
        salario_liquido = salario_bruto*desconto;
    }
    else if (salario_bruto>1000)
    {
        desconto = 0.2;
        salario_liquido = salario_bruto*desconto;
    }
    else
        salario_liquido=salario_bruto;
    
        printf("R$%.2f\n", salario_liquido);
    return 0;
}