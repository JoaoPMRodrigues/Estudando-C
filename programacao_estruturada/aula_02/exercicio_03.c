# include <stdio.h>

int main (void)
{   
    int n,d1,d2,d4,d5,aux;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    d1 = n/10000;
    aux = n%10000;
    d2 = aux/1000;
    aux=aux%100;
    d4 = aux/10;
    d5 = aux%10;
    
    if (d1==d5 && d2 == d4)
        printf("sim\n");
    else
        printf("Não\n");    
    return 0;
}