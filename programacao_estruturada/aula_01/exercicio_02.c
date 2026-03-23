# include <stdio.h>

int main (void)
{
    int horas=40,horas_trabalhadas;
    double salario_bruto,imposto_pago,salario_liquido;

    printf("Salário: R$");
    scanf("%lf",&salario_bruto);

    printf("Horas trabalhadas: ");
    scanf("%d",&horas_trabalhadas);

    if (horas_trabalhadas<=horas)
    {
        int valor=12;
        salario_bruto=horas_trabalhadas*valor;
    } else
    {
        int valor=12,extra=18,he=horas_trabalhadas-horas;
        salario_bruto = horas*valor+he*extra;
    }

    if (salario_bruto<=300)
    {
        imposto_pago=salario_bruto*0.15;
        salario_liquido=salario_bruto-imposto_pago;
    }
    else if (salario_bruto<=450)
    {
        imposto_pago=300*0.15;
        imposto_pago+=(salario_bruto-300)*0.2;
        salario_liquido=salario_bruto-imposto_pago;
    }
    else
    {
        imposto_pago=300*0.15;
        imposto_pago+=(salario_bruto-300)*0.2;
        imposto_pago+=(salario_bruto-450)*0.25;
        salario_liquido=salario_bruto-imposto_pago;
    }

    printf("Salário bruto: R$%.2lf\n",salario_bruto);
    printf("Imposto pago: R$%.2lf\n",imposto_pago);
    printf("Salário líquido: R$%.2lf\n",salario_liquido);
    return 0;
}