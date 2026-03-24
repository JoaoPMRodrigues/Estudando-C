# include <stdio.h>

int main (void)
{
    int n,i,c,primo;
    int soma=0;
    do
    {
        printf("Digite um número: ");
        scanf("%d",&n);
    } while (n<=0);
    


    for(i=2;i<=n;i++)
    {
        for(c=3;c<i;c++) //Verifica primo
        {
            if(i%c==0)
                continue;
        }

        if((int)n/i==(float)n/i)
        {    
            printf("%d ", i);
            n/=i;
            soma+=i;
            i--;
        }
    }
    printf("\nSoma = %d\n",soma);
    return 0;
}