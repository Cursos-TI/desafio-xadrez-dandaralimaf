#include <stdio.h>

int main() {
    // Variáveis para armazenar o número de casas definido pelo usuário
    int casas_bispo, casas_torre, casas_rainha;

    // Entrada de dados pelo usuário
    printf("Quantas casas o Bispo deve andar (diagonal superior direita)? ");
    scanf("%d", &casas_bispo);

    printf("Quantas casas a Torre deve andar (direita)? ");
    scanf("%d", &casas_torre);

    printf("Quantas casas a Rainha deve andar (esquerda)? ");
    scanf("%d", &casas_rainha);

    // ------------------------------
    // Movimentação das Peças
    // ------------------------------

    // Movimentação do Bispo: diagonal superior direita
    printf("\nMovimentacao do Bispo:\n");
    for (int i = 1; i <= casas_bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre: para a direita
    printf("\nMovimentacao da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimentação da Rainha: para a esquerda
    printf("\nMovimentacao da Rainha:\n");
    for (int i = 1; i <= casas_rainha; i++) {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
