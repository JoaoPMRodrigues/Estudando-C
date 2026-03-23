# include <stdio.h>

void main()
{
    int a1=0, a2=1,s,n;
    
    do 
    {
        printf("Digite um número inteiro positivo: ");
        scanf("%d",&n);
    } while(n<=0);

    while (a1<=n)
    {
        printf("%d ",a1);
        s=a1+a2;
        a1=a2;
        a2=s;
    }
    printf("\n");
}