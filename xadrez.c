#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
int Bispo;
int Torre;
int Rainha;
int escolha;

do {
    printf("Bem vindo ao JOGO DE XADREZ:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("Escolha uma peça(digite: 1, 2 ou 3): \n");
    scanf("%d", &escolha);
   
    switch(escolha) {
        case 1:

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
            printf("Movimento do Bispo\n");
            for(Bispo = 1 ; Bispo <= 5 ; Bispo++)
            {
                printf("Cima-"); // a direção do movimento
                printf("Direita\n"); // a direção do movimento
            }
            break;


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        case 2:
            printf("Movimentos da Torre\n");
            for(Torre = 1 ; Torre <= 5 ; Torre++)
            {
                printf("Direita\n"); // a direção do movimento
            }
            break;

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        case 3:
            printf("Movimentos da Rainha\n");
            for(Rainha = 1 ; Rainha <= 8 ; Rainha++)
            {
                printf("Esquerda\n"); // a direção do movimento
            }
            break;
        default:
            printf("Opção inválida!\n");
    }
} while (escolha > 3);
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
