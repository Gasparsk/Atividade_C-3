#include <stdio.h>
#include <stdlib.h>
#define TAM 3
#include <string.h>
#include <time.h>


struct dados_pessoa
{
    char nome[200];
    char telefone[10];
    char email[200];
};

typedef struct dados_pessoa dados_pessoa;

char *verificacaoDados(dados_pessoa contato[], char *buscador)
{
    int i;

    for (i = 0; i < TAM; i++)
    {

        if (strcmp(contato[i].nome, buscador) == 0)
        {
            printf("Numero encontrado: %s \n", contato[i].telefone);
            break;
        }
        
    }
}

int main()
{
    int i;
    char encontrar[200];

    dados_pessoa contato[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite seu nome: \n");
        gets(contato[i].nome);

        printf("Digite seu telefone: \n");
        gets(contato[i].telefone);

        printf("Digite seu e-mail: \n");
        gets(contato[i].email);

        printf("\n");
    }

    printf("Busca de contatos.\n");
    printf("Digite um nome para acessar o número de contato: ");
    gets(encontrar);

    verificacaoDados(contato,encontrar);

    return 0;
}
