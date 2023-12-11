#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

struct contato
{

    char nome[200];
    char numero[200];
    char email[200];
};

char* dados_desejados(struct contato contato[], char *desejados)

{

    int i;
    char resposta[200];
    for (i = 0; i < TAM; i++)
    {
        if (strcmp(contato[i].nome, desejados == 0))
        {
            printf("Numero: %d \n", contato[i].numero);
            strcpy(resposta, contato[i].numero);
            break;
        }
    }
    printf("contato nao encontrado \n");

    return resposta;
}

int main()
{

    char desejadoNome[200];
    int i;

    char dadosdeNumeros[200];

    for (i = 0; i < TAM; i++)
    {

        struct contato contato[TAM];

        printf("%d Contato \n", i + 1);
        printf("Digite o nome: ");
        gets(contato[i].nome);

        printf("Digite o Numero: ");
        gets(contato[i].numero);

        printf("Digite o Email: ");
        gets(contato[i].email);
    }

    printf("\nInforme um nome: ");
    gets(desejadoNome);

    printf("\n");

    dadosdeNumeros = dados_desejados (contato, desejadoNome);
}