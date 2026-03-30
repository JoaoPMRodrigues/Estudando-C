# include <stdio.h>

int main (void)
{
    int i,j,k;
    int m,n;

    printf("n: ");
    scanf("%d",&n);

    printf("m: ");
    scanf("%d",&m);

    int veta[n],vetb[m],vetc[n+m];

    for(i=0;i<n;i++)
    {
        printf("veta[%d]: ",i);
        scanf("%d",&veta[i]);
    }

    for(i=0;i<m;i++)
    {
        printf("vetb[%d]: ",i);
        scanf("%d",&vetb[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n || j<m)
    {
        if(i<=j && i<n)
        {
            vetc[k]=veta[i];
            i++;
            k++;
        }
        else
        {
            vetc[k]=vetb[j];
            j++;
            k++;
        }
    }

    for(i=0;i<k;i++)
        printf("%d ",vetc[i]);
    printf("\n");
    return 0;
}