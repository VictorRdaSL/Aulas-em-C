#include <stdio.h>
// Definindo a estutura (Struct) de dados do Produto:
struct DadosProduto
{
    int codigo;
    float preco;
    float peso;
};
// Perceba que a struct DadosProduto tem 3 campos diferentes
int main () {
    // Criando a referência da struct:
    struct DadosProduto produto;

    printf("\n Digite o código do produto: ");
    scanf("%d", &produto.codigo);
    printf("\n Digite o preco do produto: ");
    scanf("%f", &produto.preco);
    printf("\n Digite o peso do produto: ");
    scanf("%f", &produto.peso);

    printf("\n Voce acaba de cadastrar o produto de codigo %d, com preco RS %.2f e peso de %.2f Kg", produto.codigo, produto.preco, produto.peso);

    return 0;
}