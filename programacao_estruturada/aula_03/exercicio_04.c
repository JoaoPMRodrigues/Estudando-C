# include <stdio.h>

int main (void)
{
    int n,i,s=0;

    printf("Digite um número: ");
    scanf("%d",&n);
    
    for (i=1;i<n;i++)
    {
        if (n%i==0)
            s+=i;
    }
    if (s==n)
        printf("É perfeito!\n");
    else
        printf("Não é perfeito!\n");
    return 0;
}