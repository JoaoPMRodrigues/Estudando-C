# include <stdio.h>

int main (void)
{
    int n,i,j,c,total,comb=0;
    int primo;
    scanf("%d",&n);
    for(i=2; i<(int)n/2;i++)
    {
        primo = 1;
        for (c=2;c<i;c++)
        {
            if(i%c==0)
            {
                primo=0;
                break;
            }
        }
        if (!primo)
        {
            continue;
        }

        j = n - i;

        for (c=2;c<j;c++)
        {
            if(j%c==0)
            {
                primo=0;
                break;
            }
        }       
        if (!primo) 
            continue;
        
        comb+=1;
        
    }
     
    if (comb)
        printf("n: %d\n",comb);
    else
        printf("Não achei\n");
    return 0;
}