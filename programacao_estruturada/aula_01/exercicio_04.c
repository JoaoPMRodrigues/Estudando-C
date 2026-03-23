# include <stdio.h>
# include <math.h>

int main (void)
{

    int a,b,c,d;
    double rd,x1,x2;

    printf("Dada a equação: ax² + bx + c\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d", &c);

    d = b*b - 4*a*c;

    if (d<0)
        printf("Não há raizes reais.");
    else if (d==0)
    {
        x1=-b/(2.0*a);
        printf("Há uma única solução: x = %.3f\n",x1);
    }
    else 
    {
        rd=sqrt(d);
        x1 = (-b+rd)/(2*a);
        x2 = (-b-rd)/(2*a);
        printf("Há 2 soluções: x1 = %.3f e x2 = %.3f\n",x1,x2);
    }
    return 0;

}