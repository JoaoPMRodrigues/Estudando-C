# include <stdio.h>

int main (void)
{
    int m, n;
    int i, j,c;
    int numerador,denominador,expi=1,expj=1;
    double somatorio=0;

    printf("Quais os números? ");
    scanf("%d %d",&n,&m);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<m;j++)
        {
            // Numerador
            numerador = i*i*j;
            
            // Denominador
            expi=1;
            expj=1;
            for(c=1;c<=i;c++)
                expi*=3;
            for(c=1;c<=j;c++)
                expj*=3;    
            
            denominador = expi*(j*expi+i*expj);

            somatorio = somatorio + (double)numerador/denominador;
        }   
    }

    printf("%.4f\n",somatorio);
    return 0;
}