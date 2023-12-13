#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAM 5

struct alunos
{
    char nome[200];
    char data[200];
};
typedef struct alunos alunos;

float calcularMedia(float nota[])
{
    int i;
    float soma, media;
    for (i = 0; i < 2; i++)
    {
        soma += nota[i];
    }
    media = soma / 2;

    return media;
}

char *situacao(float media)
{
    char situacao[200];

    if (media > 7)
    {
        strcpy(situacao, "Aprovado");
    }
    else
    {
        strcpy(situacao, "Reprovado");
    }

    return situacao;
}

int main()
{
    float nota[2], mediaTotal;
    int i, j;

    alunos alunos[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o seu nome: \n");
        gets(alunos[i].nome);

        printf("Digite a sua data de nascimento: )\n");
        gets(alunos[i].data);

        for (j = 0; j < 2; j++)
        {
            printf("Sua %d nota: \n", i + 1);
            scanf("%f", &nota[j]);
        }

        mediaTotal = calcularMedia(nota);

        printf("A sua média é: %.1f \n ", mediaTotal);
        printf("Situação: %s \n", situacao(mediaTotal));

        printf("\n");

        fflush(stdin);
    }

    return 0;
}
