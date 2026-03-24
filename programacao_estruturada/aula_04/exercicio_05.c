# include <stdio.h>

int main (void)
{
    int n,i,valor;
    
    int paridade_atual,paridade_nova;

    int tamanhoo_bloco=1,k_informativo=0,k;
    printf("n: ");
    scanf("%d",&n);

    printf("Digite o 1º valor: ");
    scanf("%d",&valor);

    paridade_atual=valor%2;
    
    for(i=2;i<=n;i++)
    {
        printf("Digite p %dº valor: ",i);
        scanf("%d",&valor);

        paridade_nova=valor%2;

        if (paridade_atual==paridade_nova)
            tamanhoo_bloco+=1;
        else
        {
            if(!k_informativo)
            {
                k=tamanhoo_bloco;
                k_informativo=1;
            }
            else if (tamanhoo_bloco!=k)
            {
                printf("Não intercalado\n");
                return 0;
            }
            
            tamanhoo_bloco=1;
            paridade_atual=paridade_nova;
        }
    }
    if(k_informativo)
    {
        if(tamanhoo_bloco!=k)
        {
            printf("Não intercalado\n");
            return 0;
        }
    } else
    k = tamanhoo_bloco;

    printf("É %d-intercalado\n",k);
}