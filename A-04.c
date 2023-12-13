#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct contaBancaria {
    char nome[200], numero[200], tipo[200];
    float saldo, transferencia, depositado;
};

typedef struct contaBancaria contaBancaria

float deposito (float valorInicial, float valorDeposito) {
    return valorInicial + valorDeposito;
}

float saque (float valorInicial, float valorSaque) {
    return valorInicial - valorSaque;
}

int main ( ) {

    int opcao;
    float depositoA, saqueA;
    contaBancaria dados;


    do {
        printf("Escolha alguma opcao abaixo\n");
        printf("-----------------------------\n");
        printf("1 |  Nova Conta\n");
        printf("2 |  Depositar\n");
        printf("3 |  Saque\n");
        printf("4 |  Sair do programa\n");
        printf("-----------------------------\n");
        printf("Resposta: ");
        scanf("%d", &opcao);

        system("cls");

        switch (opcao) {
        case 1:
            fflush(stdin);

            printf("Nome do titular: ");
            gets(dados.nome);

            printf("Número da conta: ");
            gets(dados.numero);

            printf("Tipo de conta desejada: ");
            gets(dados.tipo);

            printf("Qual saldo terá na conta: ");
            scanf("%f", &dados.saldo);

            break;
        
        case 2:
            printf("Quanto voce deseja depositar ?: ");
            scanf("%f", &dados.depositado);

            depositoA = deposito(dados.saldo, dados.depositado);

            printf("Nome do titular: %s\n", dados.nome);
            printf("Numero da conta: %s\n", dados.numero);
            printf("Tipo da conta: %s\n", dados.tipo);
            printf("Saldo pré-depósito: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", depositoA);

            break;

        case 3:
            printf("Quanto você deseja sacar: ");
            scanf("%f", &dados.transferencia);

            saqueA = saque(dados.saldo, dados.transferencia);

            printf("Nome: %s\n", dados.nome);
            printf("Número da conta: %s\n", dados.numero);
            printf("Tipo da conta: %s\n", dados.tipo);
            printf("Saldo pre saque: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", saqueA);

            break;
        
        default:
            break;
        }
    } while (opcao != 0);

    return 0;
}
