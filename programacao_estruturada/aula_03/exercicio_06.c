# include <stdio.h>

int main (void)
{
    double x, eps, soma=1, t=1.0, pot=1;
    int c=1, fat=1;
    printf("Digite um real (x): ");
    scanf("%lf",&x);

    do
    {
        printf("Digite um real positivo (eps): ");
        scanf("%lf",&eps);
    } while (eps<=0);
    
    while (t > eps || -t > eps)
    {
        pot*=x;
        fat*=c;

        t=(float)pot/fat;
        soma+=t;
        c+=1;
    }

    printf("O resultado foi %.4f e foram somados %d termos\n",soma,c+1);
    return 0;
}
