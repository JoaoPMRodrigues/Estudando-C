#include <stdio.h>
#include <stdlib.h>

struct item
{
    char *nome;
    int qtd;
    float preco;
    float total;
};
typedef struct item it;

void le_item(it *item)
{
    item->nome = (char *)malloc(50 * sizeof(char));
    printf("Nome: ");
    scanf("%s", item->nome);

    printf("Quantidade: ");
    scanf("%d", &item->qtd);

    printf("Preço: ");
    scanf("%f", &item->preco);

    item->total = item->qtd * item->preco;
}

void imprime_item(it *item)
{
    printf("Nome: %s\nQuantidade: %d\nPreço: %.2f\nTotal: %.2f\n",
           item->nome, item->qtd, item->preco, item->total);
}
int main()
{
    it item;
    item.nome = (char *)malloc(50 * sizeof(char));

    le_item(&item);
    imprime_item(&item);

    free(item.nome);
    return 0;
}