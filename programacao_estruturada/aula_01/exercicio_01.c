# include <stdio.h>

int main ()
{
    int ver_tri=0;
    int l1,l2,l3;

    printf("Quais os lados dos triangulos? ");
    scanf("%d %d %d",&l1, &l2,&l3);

    if (l1 >= l2 + l3 || l2 >= l1 + l3 || l3 >= l1 + l2)
    { // Verifica se é triângulo
        printf("Não é um triângulo!\n");
        return 0;
    }

    if (l1==l2 && l2 == l3)
        printf("Equilátero\n");
    else if (l1==l2 || l2 == l3 || l1==l3)
        printf("Isóceles\n");
    else
        printf("Escalêno\n");

    return 0;
}