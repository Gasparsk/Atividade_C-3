#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct dados_produto
{
    char nome[200];
    float preco;
    int estoque;
};

void atualizarEstoque(int estoque, float preco, int quantidadeProduto)
{
    int estoqueAtualizado;
    float precoAtualizado;
  
    estoqueAtualizado = estoque - quantidadeProduto;
    precoAtualizado =  preco * estoqueAtualizado;
    
    printf("Estoque atual: %d \n",estoqueAtualizado);
    printf("Preço total em estoque: %.2f \n",precoAtualizado);
}

int main()
{
    int opcao, escolha, quantidadeP;
    float produtoV;
    char produtoN[200];

    struct dados_produto produto;

    printf("Deseja registrar seu novo produto (1 Sim / 2 Nao)?: ");
    scanf("%d", &escolha);

    system("cls");

    switch (escolha)
    {
    case 1:

        fflush(stdin);
        printf("Registre o seu produto.\n");
        printf("Nome: ");
        gets(produto.nome);

        printf("Preço: ");
        scanf("%f", &produto.preco);

        fflush(stdin);

        printf("Quantidade em estoque: ");
        scanf("%d", &produto.estoque);

        printf("Registro finalizado!");

        system("cls");

        break;

    default:
        break;
    }

    do
    {
        printf("   ------Menu------\n");
        printf(" 1 | Realizar uma compra\n");
        printf(" 2 | Consultar estoque\n");
        printf(" 3 | Sair do programa.\n");
        printf("Resposta: ");
        scanf("%d", &opcao);

        system("cls");
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Nome do produto: \n");
            gets(produtoN);

            printf("Digite o valor do produto: ");
            scanf("%f", &produtoV);

            printf("Quantidade desejada do produto: ");
            scanf("%d", &quantidadeP);

            if (quantidadeP <= produto.estoque)
            {
                printf("Compra realizada com sucesso!\n");
            }
            else
            {
                printf("Sem estoque no momento...\n");
            }

            break;

        case 2:

            printf("Produto em estoque.");
            printf("\n");
            printf("Nome: %s \n", produto.nome);
            atualizarEstoque(produto.estoque, produto.preco, quantidadeP);

            break;

        default:
            break;
        }

    } while (opcao != 3);

    return 0;
}
