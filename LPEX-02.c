#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

struct aluno_dados
{
    char nome[200];
    char data[200];
    float notas[2];
    float media;
};

float calcular_media(float n1)
{

    int soma;

    soma = n1;

    return soma / TAM;
}

int main()
{

    int i, j;
    float soma;
    float media[TAM];

    struct aluno_dados nota[TAM];

    for (i = 0; i < TAM; i++)
    {
        
        printf("Digite seu Nome: ");
        gets(nota[i].nome);

        printf("Digite a data de nascimento: ");
        gets(nota[i].data);

        for (j = 0; j < TAM; j++)
        {
            printf("Digite sua %d nota: ", j + 1);
            scanf("%f", &nota[i].notas[j]);

            soma = soma + nota[i].notas[j];
        }

        media[i] = calcular_media(soma);
        soma = 0;
    }

    printf("\nMedia: %.2f \n", media[0]);
    printf("\nMedia: %.2f \n", media[1]);
    return 0;
}