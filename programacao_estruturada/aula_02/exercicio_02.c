# include <stdio.h>

int main(void)
{
    int n1,n2,n3;

    scanf("%d %d %d", &n1,&n2,&n3);
//    printf("%d %d %d\n", n1, n2, n3);
    if ((n1+n2==n3) || (n1+n3==n2) || (n2+n3==n1))
        printf("soma\n");
    else if((n1*n2==n3) || (n1*n3==n2) || (n2*n3==n1))
        printf("multi\n");
    else if((n1+n2+n3)%2==0)
        printf("par\n");
    else
        printf("impar\n");
}
