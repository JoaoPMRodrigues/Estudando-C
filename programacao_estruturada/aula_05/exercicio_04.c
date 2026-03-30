# include <stdio.h>

int main (void)
{
    int i,j;
    int n,jd,aux;

    printf("n: ");
    scanf("%d",&n);

    int mat[n][n];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("mat[%d][%d]: ",i,j);
        scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
            aux=mat[i][j];
            jd=n-i-1;
            mat[i][j]=mat[i][jd];
            mat[i][jd]=aux;
            }    
        }
    }    

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }    

    return 0;
}